//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_H
#define FASTMATMUL_SMIRNOVALGORITHM_H

#include "../matrix/Matrix.h"
#include <vector>

using std::vector;
using SmirnovFastMul::Computation::Matrix;

namespace SmirnovFastMul {
    namespace Computation {

        typedef void (*AlgorithmEntrance)(vector<Matrix>& sub_matrices, MatrixPtr& calculated_matrix);

        class SmirnovAlgorithm {
        public:

            SmirnovAlgorithm(int A_row_dim, int A_col_dim, int B_col_dim);

            void set_alpha(vector<AlgorithmEntrance>& alpha);
            void set_beta(vector<AlgorithmEntrance>& beta);
            void set_gamma(vector<AlgorithmEntrance>& gamma);

            // sub_matrices is output
            void calculate_alpha(Matrix& A, vector<MatrixPtr>& alg_results_matrices);
            void calculate_beta(Matrix& B, vector<MatrixPtr>& alg_results_matrices);
            void calculate_c(const vector<Matrix>& sub_matrices, Matrix& C);

        protected:

            vector<AlgorithmEntrance> m_alpha;
            vector<AlgorithmEntrance> m_beta;
            int m_A_row_dim;
            int m_A_col_dim;
            int m_B_col_dim;

        private:

            void implement_decmposition(Matrix &src, int alg_row_dim, int alg_col_dim,
                                        vector<AlgorithmEntrance> &algorithm, vector<MatrixPtr> &alg_results_matrices);
        };

    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
