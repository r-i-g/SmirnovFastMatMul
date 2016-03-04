//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_MULTIPLYMATRICES_H
#define FASTMATMUL_MULTIPLYMATRICES_H

#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include "SmirnovAlgorithm.h"
#include "../communication/CommunicationHandler.h"
#include "../distribution/Distribution.h"
#include <vector>
#include <memory>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Distribution::DistributionHandler;
using std::vector;

namespace SmirnovFastMul{
    namespace Computation {

        template <typename MatrixType>
        class MultiplyMatrices {
        public:

            MultiplyMatrices() : m_comm_handler(),
                                 m_internal_algorithm(0),
                                 m_distribution_handler(m_comm_handler.get_rank(),
                                                        m_comm_handler.get_num_nodes())
            {
                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_336<MatrixType>>());
                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_363<MatrixType>>());
                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_633<MatrixType>>());
            }

            MultiplyMatrices(const DistributionHandler& dh) : m_comm_handler(),
                                                              m_internal_algorithm(0),
                                                              m_distribution_handler(dh)
            {

                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_336<MatrixType>>());
                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_363<MatrixType>>());
                m_algorithms.push_back(std::make_shared<SmirnovAlgorithm_633<MatrixType>>());
            }


            void dfs(MatrixType& A, MatrixType& B, MatrixType& C, int l, int alg_index) {
                if( l <= 0) {
                    local_multiplication(A,B,C);
                    return;
                }

                // Locally computing alphas and betas
                auto alg = m_algorithms[alg_index];
                vector<MatrixType> alpha = alg->calculate_alpha(A);
                vector<MatrixType> beta = alg->calculate_beta(B);
                vector<MatrixType> sub_matrices;
                sub_matrices.reserve(SMIRNOV_SUB_PROBLEMS);

                int a_dim = A.get_row_dimension();
                int b_dim = B.get_col_dimension();
                int sub_matrix_row_dim = a_dim / alg->get_a_base_row_dim();
                int sub_matrix_col_dim = b_dim / alg->get_b_base_col_dim();


                for (int i = 0; i < SMIRNOV_SUB_PROBLEMS; ++i) {
                    // TODO maybe change to something else to support CondenseMatrix
                    MatrixType sub(sub_matrix_row_dim, sub_matrix_col_dim);
                    dfs(alpha[i], beta[i], sub, l-1, advance_algorithm(alg_index));
                    sub_matrices.push_back(std::move(sub));
                }

                alg->calculate_c(sub_matrices,C);
            }


            // Should receive the matrices condesned or regular
            void bfs(MatrixType &A, MatrixType& B, MatrixType& C, int k, int num_sub_problems=1) {

                bfs_aux(A, B, C, k, 0, num_sub_problems);
            }

            void bfs_aux(MatrixType &A, MatrixType& B, MatrixType& C, int k, int alg_index, int num_sub_problems=1) {

                if(k==0) {
                    local_multiplication(A,B,C);
                    return;
                }

                // Locally computing alphas and betas from A and B
                auto alg = m_algorithms[alg_index];

                vector<MatrixType> alpha = alg->calculate_alpha(A);
                vector<MatrixType> beta = alg->calculate_beta(B);
                vector<MatrixType> sub_problems(SMIRNOV_SUB_PROBLEMS);
                sub_problems.reserve(SMIRNOV_SUB_PROBLEMS);

                int sub_problem_start = m_distribution_handler.sub_problem_start(k, num_sub_problems);
                int sub_problem_end = m_distribution_handler.sub_problem_end(k, num_sub_problems);
                //cout << "from recucsion level " << k << " from rank " << m_comm_handler.get_rank() << " start problem is " << sub_problem_start << endl;


                vector<MatrixType> temp_alphas = temp_matrices(alpha, sub_problem_start, num_sub_problems);
                vector<MatrixType> temp_betas = temp_matrices(beta, sub_problem_start, num_sub_problems);
                // Sending to targets and receiving from targets
                for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems ; ++i) {

                    int target_processor = m_distribution_handler.target_processor(i, k);

                    // There's no need to send ourselves the data
                    if (target_processor == m_comm_handler.get_rank()) {
                        continue;
                    }

                    // TODO is there a better way to represent and copy the matrices?
                    // i is the group of sub_problems we send
                    m_comm_handler.send_receive(temp_alphas, alpha, i, num_sub_problems, target_processor);
                    m_comm_handler.send_receive(temp_betas, beta, i, num_sub_problems, target_processor);
                }

                // Merging our part of the received matrices
                for (int i = 0; i < num_sub_problems; ++i) {
                    alpha[sub_problem_start + i] = std::move(temp_alphas[i]);
                    beta[sub_problem_start + i] = std::move(temp_betas[i]);
                }

                int sub_matrix_row_dim = A.get_row_dimension() / alg->get_a_base_row_dim();
                int sub_matrix_col_dim = B.get_col_dimension() / alg->get_b_base_col_dim();

                for (int i = sub_problem_start; i <= sub_problem_end; ++i) {

                    // Creating an empty matrix as sub_problem[i]
                    //sub_problems[i] = std::move(C.sub_matrix(sub_matrix_row_dim,sub_matrix_col_dim,0,0).empty_clone());
                    sub_problems[i] = std::move(create_sub_matrix(C, k, alg_index, num_sub_problems));
                    //sub_problems[i] = std::move(MatrixType(sub_matrix_row_dim, sub_matrix_col_dim));

                    bfs_aux(alpha[i], beta[i], sub_problems[i], k-1, advance_algorithm(alg_index), num_sub_problems);
                }

                // Distributing our calculated sub problem
                int our_part;
                for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems; ++i) {

                    int target_processor = m_distribution_handler.target_processor(i, k);

                    // There's no need to send ourselves the data
                    if (target_processor == m_comm_handler.get_rank()) {
                        our_part = i;
                        continue;
                    }

                    // Sending i'th part of sub_problems to target_processor
                    vector<MatrixType> send_parts = get_parts(sub_problems, sub_problem_start, num_sub_problems, k, i);
                    m_comm_handler.send_receive_parts(send_parts, num_sub_problems, target_processor, sub_problems, i);
                }

                //cout << "Getting our part" << endl;
                vector<MatrixType> our_parts = get_parts(sub_problems, sub_problem_start, num_sub_problems, k, our_part);

                // Removing the access information
                sub_problems.erase(sub_problems.begin() + sub_problem_start,
                                   sub_problems.begin() + sub_problem_start + num_sub_problems);

                // Inserting our_parts instead of the removed ones
                for (int i = 0; i < num_sub_problems; ++i) {
                    sub_problems.insert(sub_problems.begin() + sub_problem_start + i,
                                        std::move(our_parts[i]));
                }

                // Locally computing C from gammas
                alg->calculate_c(sub_problems, C);
            }


            vector<MatrixType> test_distribution_alpha(MatrixType &A, int k, int alg_index, int num_sub_problems) {

                // Locally computing alphas and betas from A and B
                auto alg = m_algorithms[alg_index];

                vector<MatrixType> alpha = alg->calculate_alpha(A);
                vector<MatrixType> sub_problems;
                sub_problems.reserve(SMIRNOV_SUB_PROBLEMS);

                int sub_problem_start = m_distribution_handler.sub_problem_start(k, num_sub_problems);
                int sub_problem_end = m_distribution_handler.sub_problem_end(k, num_sub_problems);

                vector<MatrixType> temp_alphas = temp_matrices(alpha, sub_problem_start, num_sub_problems);
                // Sending to targets and receiving from targets
                for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems ; ++i) {

                    int target_processor = m_distribution_handler.target_processor(i, k);

                    // There's no need to send ourselves the data
                    if (target_processor == m_comm_handler.get_rank()) {
                        continue;
                    }

                    // TODO is there a better way to represent and copy the matrices?
                    // i is the group of sub_problems we send
                    cout << "form rank " << m_comm_handler.get_rank() << " sending to target " << target_processor << endl;
                    m_comm_handler.send_receive(temp_alphas, alpha, i, num_sub_problems, target_processor);
                }

                // Merging our part of the received matrices
                for (int i = 0; i < num_sub_problems; ++i) {
                    alpha[sub_problem_start + i] = std::move(temp_alphas[i]);
                }

                return alpha;
            }

            vector<MatrixType> test_distribution_beta(MatrixType& B, int k, int alg_index, int num_sub_problems=1) {

                // Locally computing alphas and betas from A and B
                auto alg = m_algorithms[alg_index];

                vector<MatrixType> beta = alg->calculate_beta(B);
                vector<MatrixType> sub_problems(SMIRNOV_SUB_PROBLEMS);
                sub_problems.reserve(SMIRNOV_SUB_PROBLEMS);

                int sub_problem_start = m_distribution_handler.sub_problem_start(k, num_sub_problems);
                int sub_problem_end = m_distribution_handler.sub_problem_end(k, num_sub_problems);

                vector<MatrixType> temp_betas = temp_matrices(beta, sub_problem_start, num_sub_problems);
                // Sending to targets and receiving from targets
                for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems ; ++i) {

                    int target_processor = m_distribution_handler.target_processor(i, k);

                    // There's no need to send ourselves the data
                    if (target_processor == m_comm_handler.get_rank()) {
                        continue;
                    }

                    // TODO is there a better way to represent and copy the matrices?
                    // i is the group of sub_problems we send
                    m_comm_handler.send_receive(temp_betas, beta, i, num_sub_problems, target_processor);
                }

                // Merging our part of the received matrices
                for (int i = 0; i < num_sub_problems; ++i) {
                    beta[sub_problem_start + i] = std::move(temp_betas[i]);
                }

                return beta;
            }

            void local_multiplication(MatrixType&A, MatrixType& B, MatrixType& C) {

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

        protected:

            vector<MatrixType> temp_matrices(const vector<MatrixType>& sub_matrices, int sub_problem_start, int num_sub_problems) {

                vector<MatrixType> matrices;
                matrices.reserve(num_sub_problems);
                for (int i = 0; i < num_sub_problems; ++i) {
                    matrices.push_back(sub_matrices[sub_problem_start + i]);
                }

                return matrices;
            }

            MatrixType get_part(const vector<MatrixType>& sub_matrices, int sub_problem_start, int num_sub_problems,
                                int index, int k, int part) {

                int row_dim = sub_matrices[sub_problem_start + index].get_row_dimension();
                int col_dim = sub_matrices[sub_problem_start + index].get_col_dimension();

                bool fix_row = false;
                if ( m_distribution_handler.get_neighbor_distance(k) >= m_distribution_handler.get_grid_base()) {
                    row_dim /= (SMIRNOV_SUB_PROBLEMS / num_sub_problems);
                    fix_row = true;
                } else {
                    col_dim /= (SMIRNOV_SUB_PROBLEMS / num_sub_problems);
                }

                MatrixType mat(row_dim,col_dim);

                for (int i = 0; i < row_dim; ++i) {
                    for (int j = 0; j < col_dim; ++j) {
                        int row = fix_row ? i * (SMIRNOV_SUB_PROBLEMS / num_sub_problems) + part: i;
                        int col = fix_row ? j : j * (SMIRNOV_SUB_PROBLEMS / num_sub_problems) + part;
                        mat(i,j) = sub_matrices[sub_problem_start + index](row, col);
                    }
                }

                return mat;
            }

            vector<MatrixType> get_parts(const vector<MatrixType>& sub_matrices, int sub_problem_start, int num_sub_problems, int k, int part) {

                vector<MatrixType> send_matrices;
                send_matrices.reserve(num_sub_problems);
                for (int l = 0; l < num_sub_problems; ++l) {

                    send_matrices.push_back(std::move(get_part(sub_matrices, sub_problem_start, num_sub_problems, l, k, part)));
                }

                return send_matrices;
            }

            int advance_algorithm(int alg_index) {
                return (alg_index +1)%3;
            }

            MatrixType create_sub_matrix(const MatrixType& C, int k, int alg_index, int num_sub_problems) {

                auto alg = m_algorithms[alg_index];

                int containing_row = C.get_row_dimension() / alg->get_a_base_row_dim();
                int containing_column = C.get_col_dimension() / alg->get_b_base_col_dim();

                // Checking where the neighbors are located
                if ( m_distribution_handler.get_neighbor_distance(k) >= m_distribution_handler.get_grid_base()) {
                    // We should send data to neighbors located vertically
                    containing_row *= (SMIRNOV_SUB_PROBLEMS / num_sub_problems);
                } else {
                    // We should send data to neighbors located horizontally
                    containing_column *= (SMIRNOV_SUB_PROBLEMS / num_sub_problems);
                }

                return MatrixType(containing_row, containing_column);

            }

        private:

            // The different smirnov algorithm to achieve 54X54
            vector<std::shared_ptr<SmirnovAlgorithm<MatrixType>>> m_algorithms;

            // Generated a list of sub_matrices
            vector<MatrixType> generate_sub_matrices(int row_dim, int col_dim);

            // Returns the index of the sub problem we are currently working on
            int get_sub_problem(int start_processor, int end_processor);

            // The communication handler to be used throughout the multiplication algorithm
            CommunicationHandler<MatrixType> m_comm_handler;

            DistributionHandler m_distribution_handler;


            int m_internal_algorithm;
            vector<int> m_processor_rank;

        };
    }
}


#endif //FASTMATMUL_MULTIPLYMATRICES_H
