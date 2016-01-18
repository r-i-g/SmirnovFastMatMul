//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_H
#define FASTMATMUL_SMIRNOVALGORITHM_H

#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include <vector>
#include <memory>
#include <functional>

using std::vector;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;

namespace SmirnovFastMul {
    namespace Computation {

        template <typename MatrixType> class AlgorithmEntrance {
        public:
            typedef void (*type)(vector<MatrixType>& sub_matrices, MatrixType& calculated_matrix);
        };

        /*class AlgorithmEntrance {
        public:
            virtual void alg_entrance(vector<Matrix>& sub_matrices, Matrix& out) = 0;
            typedef std::unique_ptr<AlgorithmEntrance> AlgorithmEntrancePtr;

        };*/
        //typedef void (*AlgorithmEntrance)(vector<Matrix>& sub_matrices, Matrix& calculated_matrix);

        template <typename MatrixType> class SmirnovAlgorithm {
        public:

            SmirnovAlgorithm(int A_base_row_dim, int A_base_col_dim, int B_base_col_dim);

            void set_alpha(vector<AlgorithmEntrance<MatrixType>::type>& alpha) {
                m_alpha = alpha;
            }
            void set_beta(vector<AlgorithmEntrance>& beta) {
                m_beta = beta;
            }
            void set_gamma(vector<AlgorithmEntrance>& gamma) {
                m_gamma = gamma;
            }

            void add_alpha_entrance(AlgorithmEntrance entrance);
            void add_beta_entrance(AlgorithmEntrance beta);
            void add_gamma_entrance(AlgorithmEntrance gamma);

            // TODO remove or maintain
            //vector<Matrix> create_sub_matrices(int alg_base_row_dim, int alg_base_col_dim, Matrix &src);
            // sub_matrices is output
            // TODO remove or maintain
            //vector<Matrix> calculate_alpha(Matrix &A);

            vector<Matrix> calculate_beta(Matrix &B);

            void calculate_c(vector<Matrix>& sub_matrices, Matrix& C);

            int get_a_base_row_dim() {
                return m_A_base_row_dim;
            }
            int get_a_base_col_dim() {
                return m_A_base_col_dim;
            }
            int get_b_base_col_dim() {
                return m_B_base_col_dim;
            }

            /**
             * Template section
             */
            template <typename MatrixType> vector<MatrixType> create_sub_matrices(int alg_base_row_dim,
                                                                                  int alg_base_col_dim,
                                                                                  MatrixType &src) {
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

            template <typename MatrixType> vector<MatrixType> calculate_alpha(MatrixType& A) {
                int src_row_dim = A.get_row_dimension();
                int src_col_dim = A.get_col_dimension();

                int alg_row_dim = src_row_dim / m_A_base_row_dim;
                int alg_col_dim = src_col_dim / m_A_base_col_dim;

                vector<MatrixType> sub_matrices = create_sub_matrices<MatrixType>(m_A_base_row_dim, m_A_base_col_dim, A);
                //Matrix* output = new Matrix(alg_row_dim, alg_col_dim);
                //alpha_add0(sub_matrices, *output);
                return implement_algorithm(alg_row_dim, alg_col_dim, sub_matrices, m_alpha);
            }

        protected:

            vector<AlgorithmEntrance> m_alpha;
            vector<AlgorithmEntrance> m_beta;
            vector<AlgorithmEntrance> m_gamma;
            int m_A_base_row_dim;
            int m_A_base_col_dim;
            int m_B_base_col_dim;

            vector<Matrix> implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                               vector<AlgorithmEntrance> &algorithm);

            vector<CondensedMatrix> implement_algorithm(int alg_row_dim, int alg_col_dim, vector<CondensedMatrix> &sub_matrices,
                                                        vector<AlgorithmEntrance<Matrix>::type> &algorithm);

            void implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                     vector<AlgorithmEntrance<CondensedMatrix>::type> &algorithm, vector<Matrix>& out);

        private:



        };

    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
