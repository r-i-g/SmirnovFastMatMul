//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_H
#define FASTMATMUL_SMIRNOVALGORITHM_H

#include "../matrix/Matrix.h"
#include "AlgorithmEntrance.h"
#include <vector>
#include <memory>
#include <functional>

using std::vector;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::AlgorithmEntrance;

namespace SmirnovFastMul {
    namespace Computation {

        template <class MatrixType>
        class SmirnovAlgorithmTempalte {
        public:

            SmirnovAlgorithmTempalte(int A_base_row_dim, int A_base_col_dim, int B_base_col_dim);

            int get_a_base_row_dim() {
                return m_A_base_row_dim;
            }
            int get_a_base_col_dim() {
                return m_A_base_col_dim;
            }
            int get_b_base_col_dim() {
                return m_B_base_col_dim;
            }

            vector<MatrixType> create_sub_matrices(int alg_base_row_dim, int alg_base_col_dim, MatrixType &src) {
                int src_row_dim = src.get_row_dimension();
                int src_col_dim = src.get_col_dimension();

                int sub_block_row_dim = src_row_dim / alg_base_row_dim;
                int sub_block_col_dim = src_col_dim / alg_base_col_dim;

                vector<MatrixType> sub_matrices;
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
            }

            vector<MatrixType> implement_algorithm(int alg_row_dim, int alg_col_dim, vector<MatrixType> &sub_matrices,
                                                   vector<std::function<MatrixType(vector<MatrixType>&)>> &algorithm) {
                // Iterating over the algorithms we need to apply
                vector<MatrixType> alg_results_matrices;
                // So c-tor want be called when resizing the vector in push_back
                alg_results_matrices.reserve(algorithm.size());
                for(auto alg_entrance : algorithm) {
                    Matrix output(alg_row_dim, alg_col_dim);

                    //std::cout << "in alg imp " << std::endl;
                    //std::cout << "iteration " << i++ << std::endl;
                    //std::cout << &sub_matrices << std::endl;
                    alg_results_matrices.push_back(std::move(alg_entrance(sub_matrices)));
                }

                return alg_results_matrices;
            }

            void implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                     vector<std::function<MatrixType(vector<MatrixType>&)>> &algorithm,
                                     vector<MatrixType>& out) {

                for (int i = 0; i < algorithm.size(); ++i) {
                    out[i] = std::move(algorithm[i](sub_matrices));
                }
            }

            vector<MatrixType> calculate_alpha(MatrixType& A) {
                int src_row_dim = A.get_row_dimension();
                int src_col_dim = A.get_col_dimension();

                int alg_row_dim = src_row_dim / m_A_base_row_dim;
                int alg_col_dim = src_col_dim / m_A_base_col_dim;

                vector<MatrixType> sub_matrices = create_sub_matrices(m_A_base_row_dim, m_A_base_col_dim, A);
                //Matrix* output = new Matrix(alg_row_dim, alg_col_dim);
                //alpha_add0(sub_matrices, *output);
                return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_alpha_alg());
            }

            vector<MatrixType> calculate_beta(MatrixType& B) {
                int src_row_dim = B.get_row_dimension();
                int src_col_dim = B.get_col_dimension();

                int alg_row_dim = src_row_dim / m_A_base_col_dim;
                int alg_col_dim = src_col_dim / m_B_base_col_dim;

                vector<Matrix> sub_matrices = create_sub_matrices(m_A_base_col_dim, m_B_base_col_dim, B);
                return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_beta_alg());
            }

            void calculate_c(vector<MatrixType>& sub_matrices, Matrix& C) {
                int alg_row_dim = C.get_row_dimension() / m_A_base_row_dim;
                int alg_col_dim = C.get_col_dimension() / m_B_base_col_dim;

                vector<MatrixType> c_sub_matrices = create_sub_matrices(m_A_base_row_dim, m_B_base_col_dim, C);
                implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, get_gamma_alg(), c_sub_matrices);
            }

            virtual vector<std::function<MatrixType(vector<MatrixType>&)>> get_alpha_alg() = 0;
            virtual vector<std::function<MatrixType(vector<MatrixType>&)>> get_beta_alg() = 0;
            virtual vector<std::function<MatrixType(vector<MatrixType>&)>> get_gamma_alg() = 0;

        protected:

            vector<AlgorithmEntrance> m_alpha;
            vector<AlgorithmEntrance> m_beta;
            vector<AlgorithmEntrance> m_gamma;
            int m_A_base_row_dim;
            int m_A_base_col_dim;
            int m_B_base_col_dim;



        private:



        };

    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
