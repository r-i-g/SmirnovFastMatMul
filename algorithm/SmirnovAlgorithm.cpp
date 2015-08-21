//
// Created by rong on 8/18/15.
//

#include "SmirnovAlgorithm.h"

using SmirnovFastMul::Computation::MatrixPtr;
using SmirnovFastMul::Computation::SmirnovAlgorithm;

SmirnovAlgorithm::SmirnovAlgorithm(int A_row_dim, int A_col_dim, int B_col_dim) :
        m_A_row_dim(A_row_dim), m_A_col_dim(A_col_dim), m_B_col_dim(B_col_dim) {
}

void SmirnovAlgorithm::implement_decmposition(Matrix &src, int alg_row_dim, int alg_col_dim,
                                              vector<AlgorithmEntrance> &algorithm,
                                              vector<MatrixPtr> &alg_results_matrices) {

    int src_row_dim = src.get_row_dimension();
    int src_col_dim = src.get_col_dimension();

    // Calculating the sub_matrices used for the algorithm
    vector<Matrix> sub_matrices;
    for (int i = 0; i < src_row_dim / (double) alg_row_dim; ++i) {
        for (int j = 0; j < src_col_dim / (double) alg_col_dim; ++j) {
            sub_matrices.push_back(src.sub_matrix(alg_row_dim, alg_col_dim, i*alg_row_dim, j*alg_col_dim));
        }
    }

    // Iterating over the algorithms we need to apply
    for(auto alg_entrance : algorithm) {
        MatrixPtr output(new Matrix(m_A_row_dim, m_A_col_dim));
        alg_results_matrices.push_back(std::move(output));
        alg_entrance(sub_matrices, output);
    }
}

void SmirnovAlgorithm::calculate_alpha(Matrix& A, vector<MatrixPtr>& alg_results_matrices) {

    int a_row_dim = A.get_row_dimension();
    int a_col_dim = A.get_col_dimension();
    implement_decmposition(A, m_A_row_dim, m_A_col_dim, m_alpha, alg_results_matrices);
}

void SmirnovAlgorithm::calculate_beta(Matrix& B, vector<MatrixPtr>& alg_results_matrices) {

    int a_row_dim = B.get_row_dimension();
    int a_col_dim = B.get_col_dimension();
    implement_decmposition(B, m_A_col_dim, m_B_col_dim, m_beta, alg_results_matrices);
}

