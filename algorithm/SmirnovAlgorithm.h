//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_H
#define FASTMATMUL_SMIRNOVALGORITHM_H

#include "../matrix/Matrix.h"
#include <vector>
#include <memory>

using std::vector;
using SmirnovFastMul::Computation::Matrix;

namespace SmirnovFastMul {
    namespace Computation {

        /*class AlgorithmEntrance {
        public:
            virtual void alg_entrance(vector<Matrix>& sub_matrices, Matrix& out) = 0;
            typedef std::unique_ptr<AlgorithmEntrance> AlgorithmEntrancePtr;

        };*/
        typedef void (*AlgorithmEntrance)(vector<Matrix>& sub_matrices, Matrix& calculated_matrix);

        class SmirnovAlgorithm {
        public:

            SmirnovAlgorithm(int A_base_row_dim, int A_base_col_dim, int B_base_col_dim);

            void set_alpha(vector<AlgorithmEntrance>& alpha) {
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


            // sub_matrices is output
            vector<Matrix> calculate_alpha(Matrix &A);
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

            vector<Matrix> create_sub_matrices(int alg_base_row_dim, int alg_base_col_dim, Matrix &src);
        protected:

            vector<AlgorithmEntrance> m_alpha;
            vector<AlgorithmEntrance> m_beta;
            vector<AlgorithmEntrance> m_gamma;
            int m_A_base_row_dim;
            int m_A_base_col_dim;
            int m_B_base_col_dim;

            vector<Matrix> implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                               vector<AlgorithmEntrance> &algorithm);
            void implement_algorithm(int alg_row_dim, int alg_col_dim, vector<Matrix> &sub_matrices,
                                     vector<AlgorithmEntrance> &algorithm, vector<Matrix>& out);

        private:



        };

    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
