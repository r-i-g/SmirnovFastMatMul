//
// Created by rong on 8/18/15.
//

#include "SmirnovAlgorithm.h"
#include "../common/common.h"
#include "../matrix/CondensedMatrix.h"
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Computation::AlgorithmEntrance;

SmirnovAlgorithm::SmirnovAlgorithm(int A_base_row_dim, int A_base_col_dim, int B_base_col_dim) :
        m_A_base_row_dim(A_base_row_dim), m_A_base_col_dim(A_base_col_dim), m_B_base_col_dim(B_base_col_dim) {
}

vector<Matrix> SmirnovAlgorithm::implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                   vector<AlgorithmEntrance<Matrix>::type> &algorithm) {
    // Iterating over the algorithms we need to apply
    vector<Matrix> alg_results_matrices;
    // So c-tor want be called when resizing the vector in push_back
    alg_results_matrices.reserve(algorithm.size());
    for(auto alg_entrance : algorithm) {
        Matrix output(alg_row_dim, alg_col_dim);

        //std::cout << "in alg imp " << std::endl;
        //std::cout << "iteration " << i++ << std::endl;
        //std::cout << &sub_matrices << std::endl;
        alg_entrance(sub_matrices, output);
        alg_results_matrices.push_back(std::move(output));
    }

    return alg_results_matrices;
}

vector<CondensedMatrix> SmirnovAlgorithm::implement_algorithm(int alg_row_dim, int alg_col_dim, vector<CondensedMatrix> &sub_matrices,
                                                     vector<AlgorithmEntrance<CondensedMatrix>::type> &algorithm) {
    // Iterating over the algorithms we need to apply
    vector<CondensedMatrix> alg_results_matrices;
    // So c-tor want be called when resizing the vector in push_back
    alg_results_matrices.reserve(algorithm.size());
    // Setting the condense facot
    int condense_factor = sub_matrices[0].get_condense_factor();
    for(auto alg_entrance : algorithm) {
        CondensedMatrix output(alg_row_dim, alg_col_dim, condense_factor);

        alg_entrance(sub_matrices, output);
        // Setting the position of the output matrix
        output.set_positions();
        alg_results_matrices.push_back(std::move(output));
    }

    return alg_results_matrices;
}



void SmirnovAlgorithm::implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                           vector<AlgorithmEntrance> &algorithm, vector<Matrix>& out) {
    for (int i = 0; i < algorithm.size(); ++i) {
        algorithm[i](sub_matrices, out[i]);
    }
}

/* TODO remove or maintain
vector<Matrix> SmirnovAlgorithm::create_sub_matrices(int alg_base_row_dim, int alg_base_col_dim, Matrix &src) {
    int src_row_dim = src.get_row_dimension();
    int src_col_dim = src.get_col_dimension();

    int sub_block_row_dim = src_row_dim / alg_base_row_dim;
    int sub_block_col_dim = src_col_dim / alg_base_col_dim;

    vector<Matrix> sub_matrices;
    // So c-tor want be called when resizing the vector in push_back
    sub_matrices.reserve(alg_base_row_dim * alg_base_col_dim);
    // Calculating the sub_matrices used for the algorithm
    for (int i = 0; i < alg_base_row_dim; ++i) {
        for (int j = 0; j < alg_base_col_dim; ++j) {
            //std::cout << "adding the subblock starting at:" << i* sub_block_row_dim << " " << j* sub_block_col_dim << std::endl;
            sub_matrices.push_back(src.sub_matrix(sub_block_row_dim,
                                                  sub_block_col_dim, i* sub_block_row_dim, j* sub_block_col_dim));
        }
    }

    return sub_matrices;
}*/

/* TODO remove or matintain
vector<Matrix> SmirnovAlgorithm::calculate_alpha(Matrix &A) {

    int src_row_dim = A.get_row_dimension();
    int src_col_dim = A.get_col_dimension();

    int alg_row_dim = src_row_dim / m_A_base_row_dim;
    int alg_col_dim = src_col_dim / m_A_base_col_dim;

    vector<Matrix> sub_matrices = create_sub_matrices(m_A_base_row_dim, m_A_base_col_dim, A);
    //Matrix* output = new Matrix(alg_row_dim, alg_col_dim);
    //alpha_add0(sub_matrices, *output);
    return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, m_alpha);
}*/

vector<Matrix> SmirnovAlgorithm::calculate_beta(Matrix &B) {

    int src_row_dim = B.get_row_dimension();
    int src_col_dim = B.get_col_dimension();

    int alg_row_dim = src_row_dim / m_A_base_col_dim;
    int alg_col_dim = src_col_dim / m_B_base_col_dim;

    vector<Matrix> sub_matrices = create_sub_matrices(m_A_base_col_dim, m_B_base_col_dim, B);
    return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, m_beta);
}

void SmirnovAlgorithm::calculate_c(vector<Matrix>& sub_matrices, Matrix& C) {


    int alg_row_dim = C.get_row_dimension() / m_A_base_row_dim;
    int alg_col_dim = C.get_col_dimension() / m_B_base_col_dim;

    vector<Matrix> c_sub_matrices = create_sub_matrices(m_A_base_row_dim, m_B_base_col_dim, C);
    implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, m_gamma, c_sub_matrices);
}

void SmirnovAlgorithm::add_alpha_entrance(SmirnovFastMul::Computation::AlgorithmEntrance entrance) {
    m_alpha.push_back(entrance);
}

void SmirnovAlgorithm::add_beta_entrance(SmirnovFastMul::Computation::AlgorithmEntrance beta) {
    m_beta.push_back(beta);
}

void SmirnovAlgorithm::add_gamma_entrance(SmirnovFastMul::Computation::AlgorithmEntrance gamma) {
    m_gamma.push_back(gamma);
}
