//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_H
#define FASTMATMUL_SMIRNOVALGORITHM_H

#include "../matrix/Matrix.h"
#include "../matrix/PositionalMatrix.h"
#include "../measurement/Measurements.h"
#include <vector>
#include <memory>
#include <functional>
#include <iostream>

using std::vector;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::TimerType;

using std::cout;
using std::endl;

namespace SmirnovFastMul {
    namespace Computation {

        class AlgorithmEntrance {
        public:
            virtual void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) = 0;
        };


        class SmirnovAlgorithm {
        public:

            SmirnovAlgorithm(int A_base_row_dim, int A_base_col_dim, int B_base_col_dim) :
                    m_A_base_row_dim(A_base_row_dim), m_A_base_col_dim(A_base_col_dim), m_B_base_col_dim(B_base_col_dim),
                    m_measurements(Measurements::getMeasurementLogger())
            {}

            int get_a_base_row_dim() {
                return m_A_base_row_dim;
            }
            int get_a_base_col_dim() {
                return m_A_base_col_dim;
            }
            int get_b_base_col_dim() {
                return m_B_base_col_dim;
            }

            vector<PositionalMatrix> create_sub_matrices(int alg_base_row_dim,
                                                         int alg_base_col_dim,
                                                         PositionalMatrix &src) {
                int src_row_dim = src.get_row_dimension();
                int src_col_dim = src.get_col_dimension();

                int sub_block_row_dim = src_row_dim / alg_base_row_dim;
                int sub_block_col_dim = src_col_dim / alg_base_col_dim;

                vector<PositionalMatrix> sub_matrices;
                // So c-tor want be called when resizing the vector in push_back
                sub_matrices.reserve(alg_base_row_dim * alg_base_col_dim);
                // Calculating the sub_matrices used for the algorithm
                for (int i = 0; i < alg_base_row_dim; ++i) {
                    for (int j = 0; j < alg_base_col_dim; ++j) {
                        //std::cout << "adding the subblock starting at:" << i* sub_block_row_dim << " " << j* sub_block_col_dim << std::endl;
                        //cout << "row dim:" << sub_block_row_dim << " col dim:" << sub_block_col_dim << endl;
                        //cout << src.sub_matrix(sub_block_row_dim,
                        //                      sub_block_col_dim, i* sub_block_row_dim, j* sub_block_col_dim) << endl;
                        sub_matrices.push_back(src.sub_matrix(sub_block_row_dim,
                                                              sub_block_col_dim, i* sub_block_row_dim, j* sub_block_col_dim));
                    }
                }

                return sub_matrices;
            }

            vector<PositionalMatrix> calculate_alpha(PositionalMatrix& A) {
                int src_row_dim = A.get_row_dimension();
                int src_col_dim = A.get_col_dimension();

                int alg_row_dim = src_row_dim / m_A_base_row_dim;
                int alg_col_dim = src_col_dim / m_A_base_col_dim;

                vector<PositionalMatrix> sub_matrices = create_sub_matrices(m_A_base_row_dim, m_A_base_col_dim, A);
                return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_alpha_alg());
            }

            vector<PositionalMatrix> calculate_beta(PositionalMatrix& B) {
                int src_row_dim = B.get_row_dimension();
                int src_col_dim = B.get_col_dimension();

                int alg_row_dim = src_row_dim / m_A_base_col_dim;
                int alg_col_dim = src_col_dim / m_B_base_col_dim;

                vector<PositionalMatrix> sub_matrices = create_sub_matrices(m_A_base_col_dim, m_B_base_col_dim, B);
                return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_beta_alg());
            }

            void calculate_c(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& C) {
                int alg_row_dim = C.get_row_dimension() / m_A_base_row_dim;
                int alg_col_dim = C.get_col_dimension() / m_B_base_col_dim;

                vector<PositionalMatrix> c_sub_matrices = create_sub_matrices(m_A_base_row_dim, m_B_base_col_dim, C);
                implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_gamma_alg(), c_sub_matrices);
            }

            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_alpha_alg() = 0;
            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_beta_alg() = 0;
            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_gamma_alg() = 0;

        protected:

            int m_A_base_row_dim;
            int m_A_base_col_dim;
            int m_B_base_col_dim;
            Measurements &m_measurements;

            vector<PositionalMatrix> implement_algorithm(int alg_row_dim, int alg_col_dim, vector<PositionalMatrix>& sub_matrices,
                                                        const vector<std::shared_ptr<AlgorithmEntrance>>& algorithm) {
                // Iterating over the algorithms we need to apply
                vector<PositionalMatrix> alg_results_matrices;
                // So c-tor want be called when resizing the vector in push_back
                alg_results_matrices.reserve(algorithm.size());

                m_measurements.startTimer(TimerType::ADD);

                for(const auto& alg_entrance : algorithm) {
                    // TODO change back to alg_row_dim and alg_col_dim
                    //cout << "In implememt in condense. alg_row_dim: " << alg_row_dim << " alg_col_dim:" << alg_col_dim << " condense factor:"  << condense_factor << endl;
                    PositionalMatrix output(const_cast<PositionalMatrix&>(sub_matrices[0]));
                    //cout << output << endl;

                    (*alg_entrance)(sub_matrices, output);
                    //cout << output << endl;
                    // Setting the position of the output matrix
                    //output.set_positions();
                    alg_results_matrices.push_back(std::move(output));
                }

                m_measurements.endTimer(TimerType::ADD);

                return alg_results_matrices;
            }

            void implement_algorithm(int alg_row_dim, int alg_col_dim,
                                     vector<PositionalMatrix>& sub_matrices,
                                     const vector<std::shared_ptr<AlgorithmEntrance>>& algorithm,
                                     vector<PositionalMatrix>& out) {

                m_measurements.startTimer(TimerType::ADD);

                for (int i = 0; i < algorithm.size(); ++i) {
                    auto alg_entrance = algorithm[i];
                    (*alg_entrance)(sub_matrices, out[i]);
                }

                m_measurements.endTimer(TimerType::ADD);

            }

        };
    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
