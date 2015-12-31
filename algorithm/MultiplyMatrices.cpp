//
// Created by rong on 8/18/15.
//

#include "MultiplyMatrices.h"
#include "SmirnovAlgorithm_336.h"
#include "SmirnovAlgorithm_363.h"
#include "SmirnovAlgorithm_633.h"
#include <mpi.h>
#include <iostream>

#include "../common/common.h"

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MultiplyMatrices;
using SmirnovFastMul::Communication::CommunicationHandler;
using std::cout;
using std::endl;

int advance_algorithm(int alg_index) {
    return (alg_index +1)%3;
}

MultiplyMatrices::MultiplyMatrices() : m_comm_handler(),
                                       m_internal_algorithm(0),
                                       m_distribution_handler(m_comm_handler.get_rank(), m_comm_handler.get_num_nodes())
{

    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_336());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_363());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_633());
}

MultiplyMatrices::MultiplyMatrices(const DistributionHandler& dh) : m_comm_handler(),
                                                                    m_internal_algorithm(0),
                                                                    m_distribution_handler(dh)
{

    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_336());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_363());
    m_algorithms.push_back(SmirnovFastMul::Computation::SmirnovAlgorithm_633());
}

void MultiplyMatrices::multiply(Matrix &A, Matrix &B, Matrix &C) {

}

void MultiplyMatrices::set_distribution_handler(const DistributionHandler& dh) {
    m_distribution_handler = dh;
}

void MultiplyMatrices::dfs(Matrix &A, Matrix &B, Matrix &C, int l, int alg_index, int debug) {

    if( l <= 0) {
        local_multiplication(A,B,C);
        return;
        /*SmirnovAlgorithm alg = m_algorithms[alg_index];
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
        return;*/
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
        dfs(alpha[i], beta[i], sub, l-1, advance_algorithm(alg_index),i);
        sub_matrices.push_back(std::move(sub));
    }

    if( l == 1  && debug == 0) {
        cout << sub_matrices[4] << endl;
        cout << sub_matrices[5] << endl;
        cout << sub_matrices[6] << endl;
        cout << sub_matrices[7] << endl;
    }
    /*if(debug == 7) {
        for (int i = 0; i < sub_matrices.size(); ++i) {
            std::cout << sub_matrices[i] << std::endl;
        }
    }*/
    alg.calculate_c(sub_matrices,C);
}


void MultiplyMatrices::my_bfs(Matrix &A, Matrix &B, Matrix &C, int k, int alg_index, int start_processor,
                              int end_processor, int num_sub_problems) {

    if(k==0) {
        // TODO: remove/turn this debug print
        //std::cout << "computing the base case " << m_comm_handler.get_rank() <<  std::endl;
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
    // TODO: remove/turn this debug print

        //std::cout << "from rank " << m_comm_handler.get_rank() << " level " << k << " sub_problem_s " <<
        //sub_problem_index_start << " sub_problem_e " << sub_problem_index_end << std::endl;

    // Here we calculate the range of processes that collaborate with us on the calculation of the sub problem
    int sub_problem_process_start = get_sub_problem_processors_start(start_processor, end_processor, num_sub_problems);
    int sub_problem_process_end = get_sub_problem_processors_end(start_processor, end_processor, num_sub_problems);
    // TODO: remove/turn this debug print
        //std::cout << "from rank " << m_comm_handler.get_rank() << " level " << k << " processor_s " <<
        //sub_problem_process_start << " processor_e " << sub_problem_process_end << std::endl;

    int sub_matrix_row_dim = A.get_row_dimension() / alg.get_a_base_row_dim();
    int sub_matrix_col_dim = B.get_col_dimension() / alg.get_b_base_col_dim();

    vector<Matrix> gamma(SMIRNOV_SUB_PROBLEMS);
    gamma.reserve(SMIRNOV_SUB_PROBLEMS);
    for (int sub_problem_index = sub_problem_index_start;
         sub_problem_index <= sub_problem_index_end; ++sub_problem_index) {

        Matrix our_sub_problem(sub_matrix_row_dim, sub_matrix_col_dim);

        // Locally computing C from sub_matrices;
        my_bfs(alpha.at(sub_problem_index), beta.at(sub_problem_index), our_sub_problem,
               k - 1, advance_algorithm(alg_index), sub_problem_process_start, sub_problem_process_end,
               num_sub_problems);

        // Sending our computed parts to the other processors
        // collaborating nodes contains the entire list of collaborating_nodes
        vector<int> collaberating_nodes = generate_collaberating_nodes(start_processor, end_processor, num_sub_problems);
        // TODO: remove/turn this debug print
            /*std::cout << "rank" << m_comm_handler.get_rank() << " currene level" << k << " collaberating nodes: ";
            for (int i = 0; i < collaberating_nodes.size(); ++i) {
                std::cout << collaberating_nodes[i] << " ";
            }
            std::cout << std::endl;*/

        m_comm_handler.scatter_matrix(our_sub_problem, collaberating_nodes);
        if( m_comm_handler.get_rank() == 10 && sub_problem_index==7 && k==2) {
            std::cout << m_comm_handler.get_rank() << " " << our_sub_problem << std::endl;
        }
        // TODO: remove/turn this debug print
        //std::cout << "sending matrices " << m_comm_handler.get_rank() << std::endl;


        // Receiving sub matrices from other processors to complete our sub matrices list
        // TODO: add sub matrices to receive sub matrices
        vector<Matrix> sub_matrices = m_comm_handler.receive_sub_matrices(sub_matrix_row_dim, sub_matrix_col_dim, collaberating_nodes);
        if( m_comm_handler.get_rank() == 0 && sub_problem_index==3 && k==2) {
            std::cout << m_comm_handler.get_rank() << " " << sub_matrices[1] << std::endl;
        }
        //std::cout << "reciving matrices " << m_comm_handler.get_rank() << std::endl;

        // Placing the received sub problems into their respectable position
        place_sub_problems(sub_matrices, gamma, sub_problem_index, sub_problem_index_start, sub_problem_index_end);
        gamma.at(sub_problem_index) = std::move(our_sub_problem);

    }

    /*if( m_comm_handler.get_rank() == 0 && k==2) {
        for (int i = 0; i < gamma.size(); ++i) {
            std::cout << gamma[i] << std::endl;
        }
    }*/
    // Locally computing C from sub_matrices;
    alg.calculate_c(gamma,C);
}

void MultiplyMatrices::bfs(Matrix &A, Matrix& B, Matrix& C, int k, int num_sub_problems) {
    // Distributing the matrix to the processors
    Matrix dist_A = m_distribution_handler.distribute_matrix(A,1);
    Matrix dist_B = m_distribution_handler.distribute_matrix(B,1);
    MPI_Barrier(MPI_COMM_WORLD);

    bfs_aux(dist_A, dist_B, C, k, 0, num_sub_problems);
}

void MultiplyMatrices::bfs_aux(Matrix &A, Matrix &B, Matrix &C, int k, int alg_index, int num_sub_problems) {

    if(k==0) {
        local_multiplication(A,B,C);
        return;
    }

    // Locally computing alphas and betas from A and B
    SmirnovAlgorithm alg = m_algorithms[alg_index];
    vector<Matrix> alpha = alg.calculate_alpha(A);
    vector<Matrix> beta = alg.calculate_beta(B);

    vector<Matrix> gamma(SMIRNOV_SUB_PROBLEMS);
    gamma.reserve(SMIRNOV_SUB_PROBLEMS);

    int sub_problem_start = m_distribution_handler.sub_problem_start(k, num_sub_problems);
    int sub_problem_end = m_distribution_handler.sub_problem_end(k, num_sub_problems);

    // Sending to targets and receiving from targets
    for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems ; ++i) {

        int target_processor = m_distribution_handler.target_processor(i, k);

        // There's no need to send ourselves the data
        if (target_processor == m_comm_handler.get_rank()) {
            continue;
        }

        // TODO is there a better way to represent and copy the matrices?
        // i is the group of sub_problems we send
        m_comm_handler.send_receive(alpha, i, num_sub_problems, target_processor, sub_problem_start);
        m_comm_handler.send_receive(beta, i, num_sub_problems, target_processor, sub_problem_start);
    }

    int sub_matrix_row_dim = A.get_row_dimension() / alg.get_a_base_row_dim();
    int sub_matrix_col_dim = B.get_col_dimension() / alg.get_b_base_col_dim();

    for (int i = sub_problem_start; i <= sub_problem_end; ++i) {

        // Creating an empty matrix as gamma[i]
        gamma[i] = std::move(Matrix(sub_matrix_row_dim, sub_matrix_col_dim));

        bfs_aux(alpha[i], beta[i], gamma[i], k-1, advance_algorithm(alg_index), num_sub_problems);
    }

    // Distributing our calculated sub problem
    for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems; ++i) {

        int target_processor = m_distribution_handler.target_processor(i, k);

        // There's no need to send ourselves the data
        if (target_processor == m_comm_handler.get_rank()) {
            continue;
        }

        m_comm_handler.send_receive_to(gamma, sub_problem_start, num_sub_problems, target_processor, i);
    }


    // Locally computing C from gammas
    alg.calculate_c(gamma, C);
}

void MultiplyMatrices::place_sub_problems(vector<Matrix> &sub_matrices, vector<Matrix> &gammas,
                                          int current_sub_problem_index,
                                          int sub_problem_index_start, int sub_problem_index_end) {

    int num_sub_problems = sub_problem_index_end - sub_problem_index_start + 1;
    int relative_sub_problem_in_group = current_sub_problem_index - sub_problem_index_start;

    //std::cout << "in rank " << m_comm_handler.get_rank() << " group size is " << num_sub_problems << std::endl;
    if( m_comm_handler.get_rank() == 0) {
       //std::cout << "in rank " << m_comm_handler.get_rank();
    }
    for (int i = 0; i < sub_matrices.size(); ++i) {
        int sub_problem_position = relative_sub_problem_in_group + i * num_sub_problems;

        if ( sub_problem_position  != current_sub_problem_index) {
                gammas[sub_problem_position] = std::move(sub_matrices[i]);
        }
        if( m_comm_handler.get_rank() == 0) {
            //std::cout << " sub_problem " << current_sub_problem_index + i * num_sub_problems;
        }
    }
    if( m_comm_handler.get_rank() == 0) {
        //std::cout << std::endl;
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

    //std::cout << "rank " << m_comm_handler.get_rank() << " num_processors " << num_processors << " group size " << group_size << " our group index " << group << std::endl;
    return group * num_sub_problems;
}

int MultiplyMatrices::get_sub_problem_index_end(int start_processor, int end_processor, int num_sub_problems) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    return get_sub_problem_index_start(start_processor, end_processor, num_sub_problems) + num_sub_problems -1;
}

int MultiplyMatrices::get_sub_problem_processors_start(int start_processor, int end_processor, int num_sub_problems) {

    int our_relative_rank = m_comm_handler.get_rank() - start_processor;

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    int our_group_index = our_relative_rank/group_size;

    return our_group_index * group_size + start_processor;
}

int MultiplyMatrices::get_sub_problem_processors_end(int start_processor, int end_processor, int num_sub_problems) {

    int num_processors = end_processor - start_processor + 1;

    int group_size = num_processors / (SMIRNOV_SUB_PROBLEMS / num_sub_problems);

    return get_sub_problem_processors_start(start_processor, end_processor, num_sub_problems) + group_size - 1;

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

    //std::cout << "rank " << m_comm_handler.get_rank() << " ";

    int num_collaborators = num_processors / group_size;
    vector<int> collabarating_nodes(num_collaborators);
    for (int i = 0; i < num_collaborators; ++i) {
       // std::cout << " node " << start_processor + our_relative_position  + group_size * i;
        collabarating_nodes.at(i) = start_processor + our_relative_position  + group_size * i;
    }
    //std::cout << std::endl;

    return collabarating_nodes;
}
