//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_MULTIPLYMATRICES_H
#define FASTMATMUL_MULTIPLYMATRICES_H

#include "../matrix/Matrix.h"

using SmirnovFastMul::Computation::Matrix;

namespace SmirnovFastMatMul{
    namespace Computation {

        class MultiplyMatrices {
        public:
            void multiply(Matrix& A, Matrix& B, Matrix& C);

        protected:

            void dfs(Matrix& A, Matrix& B, Matrix& C, int l);
            void bfs(Matrix& A, Matrix& B, Matrix& C, int k);


        private:
        };
    }
}


#endif //FASTMATMUL_MULTIPLYMATRICES_H
