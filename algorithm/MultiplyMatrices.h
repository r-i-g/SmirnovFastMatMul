//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_MULTIPLYMATRICES_H
#define FASTMATMUL_MULTIPLYMATRICES_H

#include "../matrix/Matrix.h"
#include "SmirnovAlgorithm.h"
#include "../communication/CommunicationHandler.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Communication::CommunicationHandler;
using std::vector;

namespace SmirnovFastMul{
    namespace Computation {

        class MultiplyMatrices {
        public:

            MultiplyMatrices();

            void multiply(Matrix& A, Matrix& B, Matrix& C);

        //protected:

            void dfs(Matrix& A, Matrix& B, Matrix& C, int l, int alg_index);
            void bfs(Matrix& A, Matrix& B, Matrix& C, int k, int alg_index, int start_processor, int end_processor);
            void bfs(vector<Matrix>& alphas, vector<Matrix&> betas, vector<Matrix>& gammas, int k, int alg_index, int start_processor, int end_processor);

        protected:

            void local_multiplication(Matrix&A, Matrix& B, Matrix& C);
            int get_sub_problem_start(int start_processor, int end_processor);
            int get_sub_problem_end(int start_processor, int end_processor);

        private:

            // Generated a list of sub_matrices
            vector<Matrix> generate_sub_matrices(int row_dim, int col_dim);

            // Returns the index of the subproblem we are currently working on
            int get_sub_problem(int start_processor, int end_processor);

            vector<int> generate_collaberating_nodes(int start_processor, int end_processor);

            // The communication handler to be used throughout the multiplication algorithm
            CommunicationHandler m_comm_handler;

            vector<SmirnovAlgorithm> m_algorithms;
            int m_internal_algorithm;
            vector<int> m_processor_rank;

        };
    }
}


#endif //FASTMATMUL_MULTIPLYMATRICES_H
