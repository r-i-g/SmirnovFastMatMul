//
// Created by rong on 8/18/15.
//

#include "MultiplyMatrices.h"
#include "SmirnovAlgorithm_336.h"
#include "SmirnovAlgorithm_363.h"
#include "SmirnovAlgorithm_633.h"
#include <iostream>

#include "../common/common.h"

using SmirnovFastMul::Computation::MultiplyMatrices;
using SmirnovFastMul::Communication::CommunicationHandler;

__inline int advance_algorithm(int alg_index) {
    return (alg_index +1)%3;
}

MultiplyMatrices::MultiplyMatrices() : m_comm_handler(), m_internal_algorithm(0){

    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_336());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_363());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_633());
}

void MultiplyMatrices::multiply(Matrix &A, Matrix &B, Matrix &C) {

}

void MultiplyMatrices::dfs(Matrix &A, Matrix &B, Matrix &C, int l, int alg_index) {

    if( l <= 0) {
        SmirnovAlgorithm alg = m_algorithms[alg_index];
        vector<Matrix> alpha = alg.calculate_alpha(A);
        vector<Matrix> beta = alg.calculate_beta(B);

        vector<Matrix> sub_matrices;
        sub_matrices.reserve(SMIRNOV_SUB_PROBLEMS);
        for (int i = 0; i < SMIRNOV_SUB_PROBLEMS; ++i) {
            Matrix sub(1);
            double* data_a = alpha.at(i).get_data();
            double* data_b = beta.at(i).get_data();
            double* sub_data = sub.get_data();
            sub_data[0] = data_a[0] * data_b[0];
            //std::cout << sub_data[0] << std::endl;
            sub_matrices.push_back(std::move(sub));
        }
        alg.calculate_c(sub_matrices,C);
        return;
    }

    // Locally computing alphas and betas
    SmirnovAlgorithm alg = m_algorithms[alg_index];
    vector<Matrix> alpha = alg.calculate_alpha(A);
    vector<Matrix> beta = alg.calculate_beta(B);
    // C sub matrices will be propagated forward and eventually change C
    //vector<Matrix> c_sub_matrices = alg.create_sub_matrices(alg.get_a_base_row_dim(), alg.get_b_base_col_dim(), C);
    vector<Matrix> sub_matrices;
    sub_matrices.reserve(SMIRNOV_SUB_PROBLEMS);
    int a_dim = A.get_row_dimension();
    int b_dim = B.get_col_dimension();
    int sub_matrix_row_dim = a_dim / alg.get_a_base_row_dim();
    int sub_matrix_col_dim = b_dim / alg.get_b_base_col_dim();
    for (int i = 0; i < SMIRNOV_SUB_PROBLEMS; ++i) {
        Matrix sub(sub_matrix_row_dim, sub_matrix_col_dim);
        dfs(alpha[i], beta[i], sub, l-1, advance_algorithm(alg_index));
        sub_matrices.push_back(std::move(sub));
    }
    alg.calculate_c(sub_matrices,C);
}


void MultiplyMatrices::bfs(Matrix &A, Matrix &B, Matrix &C, int k, int alg_index, int start_processor, int end_processor, int num_sub_problems) {

    if(k==0) {
        // Computing local smirnov algorithm
        local_multiplication(A,B,C);
        return;
    }

    // Locally computing alphas and betas
    SmirnovAlgorithm alg = m_algorithms[alg_index];
    vector<Matrix> alpha = alg.calculate_alpha(A);
    vector<Matrix> beta = alg.calculate_beta(B);

    // The parallel computation will be achieved by deciding on which sub problem we solve
    int sub_problem_index_start = get_sub_problem_index_start(start_processor, end_processor, num_sub_problems);
    int sub_problem_index_end = get_sub_problem_index_end(start_processor, end_processor, num_sub_problems);

    // Here we calculate the range of processes that collaborate with us on the calculation of the sub problem
    int sub_problem_process_start = get_sub_problem_processors_start(start_processor, end_processor);
    int sub_problem_process_end = get_sub_problem_processors_end(start_processor, end_processor);

    int sub_matrix_row_dim = A.get_row_dimension() / alg.get_a_base_row_dim();
    int sub_matrix_col_dim = B.get_col_dimension() / alg.get_b_base_col_dim();

    vector<Matrix> gamma(SMIRNOV_SUB_PROBLEMS);
    for (int sub_problem_index = sub_problem_index_start;
         sub_problem_index < sub_problem_index_end; ++sub_problem_index) {

        Matrix our_sub_problem(sub_matrix_row_dim, sub_matrix_col_dim);

        bfs(alpha.at(sub_problem_index), beta.at(sub_problem_index), our_sub_problem,
            k-1, advance_algorithm(alg_index), sub_problem_process_start, sub_problem_process_end);

        // Sending our computed parts to the other processors
        // collaborating nodes contains the entire list of collaborating_nodes
        vector<int> collaberating_nodes = generate_collaberating_nodes(start_processor, end_processor, num_sub_problems);
        m_comm_handler.scatter_matrix(our_sub_problem, collaberating_nodes);

        // Receiving sub matrices from other processors to complete our sub matrices list
        vector<Matrix> sub_matrices = m_comm_handler.receive_sub_matrices(sub_matrix_row_dim, sub_matrix_col_dim, collaberating_nodes);

        // Placing the received sub problems into their respectable position
        place_sub_problems(sub_matrices, gamma, sub_problem_index, start_processor, end_processor, num_sub_problems);
        gamma.at(sub_problem_index) = std::move(our_sub_problem);
    }

    // Locally computing C from sub_matrices;
    alg.calculate_c(gamma,C);
}

void MultiplyMatrices::place_sub_problems(vector<Matrix> &sub_matrices, vector<Matrix> &gammas,
                                          int current_sub_problem_index,
                                          int start_processor, int end_processor, int num_sub_problems) {

    int num_processors = end_processor - start_processor + 1;
    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    for (int i = 0; i < sub_matrices.size(); ++i) {
        gammas[current_sub_problem_index + i * group_size] = std::move(sub_matrices[i]);
    }
}

void MultiplyMatrices::local_multiplication(Matrix&A, Matrix& B, Matrix& C) {

    double* c_data = C.get_data();
    int c_stride = C.get_stride();
    for (int i = 0; i < A.get_row_dimension(); ++i) {
        for (int k = 0; k < B.get_col_dimension(); ++k) {
            for (int j = 0; j < A.get_col_dimension(); ++j) {

                c_data[i * c_stride + k] += A(i,j) * B(j,k);
            }
        }
    }
}

int MultiplyMatrices::get_sub_problem_index_start(int start_processor, int end_processor, int num_sub_problems) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    // Calculating to which group we "fall" into
    int group =  our_relative_rank/group_size;

    return group * num_sub_problems + start_processor;
}

int MultiplyMatrices::get_sub_problem_index_end(int start_processor, int end_processor, int num_sub_problems) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    return get_sub_problem_index_start(start_processor, end_processor, num_processors) + group_size -1;
}

int MultiplyMatrices::get_sub_problem_processors_start(int start_processor, int end_processor) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / SMIRNOV_SUB_PROBLEMS;

    int our_group_index = our_relative_rank/group_size;

    return our_group_index * group_size + start_processor;
}

int MultiplyMatrices::get_sub_problem_processors_end(int start_processor, int end_processor) {

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / SMIRNOV_SUB_PROBLEMS;

    return get_sub_problem_processors_start(start_processor, end_processor) + group_size - 1;

}

vector<Matrix> MultiplyMatrices::generate_sub_matrices(int row_dim, int col_dim) {
    vector<Matrix> sub_matrices;
    // We reserve space so no copy constructor would be initialized;
    sub_matrices.reserve(SMIRNOV_SUB_PROBLEMS);

    for (int i = 0; i < SMIRNOV_SUB_PROBLEMS; ++i) {
        sub_matrices.push_back(std::move(Matrix(row_dim, col_dim)));
    }

    return sub_matrices;
}

int MultiplyMatrices::get_sub_problem(int start_processor, int end_processor) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / SMIRNOV_SUB_PROBLEMS;

    // Calculating to which group we "fall" into
    return our_relative_rank/group_size;

}

vector<int> MultiplyMatrices::generate_collaberating_nodes(int start_processor, int end_processor, int num_sub_problems) {

    int num_processors = end_processor - start_processor + 1;
    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    int our_relative_position = (m_comm_handler.get_rank() - start_processor) % group_size;

    vector<int> collabarating_nodes(SMIRNOV_SUB_PROBLEMS);
    for (int i = 0; i < SMIRNOV_SUB_PROBLEMS; ++i) {
        collabarating_nodes.at(i) = start_processor + our_relative_position  + group_size * i;
    }

    return collabarating_nodes;
}
