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



        class SmirnovAlgorithm {
        public:

            SmirnovAlgorithm(int A_row_dim, int A_col_dim, int B_col_dim);


            virtual void calculate_alpha(Matrix& A) = 0;
            virtual void calculate_beta(Matrix& B) = 0;
            virtual void calculate_c(vector<Matrix> gamma, Matrix& B) = 0;

        protected:


            int m_A_row_dim;
            int m_A_col_dim;
            int m_B_col_dim;

        private:

        };

    }

}


#endif //FASTMATMUL_SMIRNOVALGORITHM_H
