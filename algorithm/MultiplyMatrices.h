//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_MULTIPLYMATRICES_H
#define FASTMATMUL_MULTIPLYMATRICES_H

#include "../matrix/Matrix.h"
#include "SmirnovAlgorithm.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using std::vector;

namespace SmirnovFastMatMul{
    namespace Computation {

        class MultiplyMatrices {
        public:

            MultiplyMatrices();

            void multiply(Matrix& A, Matrix& B, Matrix& C);

        //protected:

            void dfs(Matrix& A, Matrix& B, Matrix& C, int l, int alg_index);
            void bfs(Matrix& A, Matrix& B, Matrix& C, int k);


        private:
            vector<SmirnovAlgorithm> m_algorithms;
            int m_internal_algorithm;
            vector<int> m_processor_rank;
        };
    }
}


#endif //FASTMATMUL_MULTIPLYMATRICES_H
