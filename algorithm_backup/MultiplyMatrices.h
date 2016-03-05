//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_MULTIPLYMATRICES_H
#define FASTMATMUL_MULTIPLYMATRICES_H

#include "../matrix/Matrix.h"
#include "PositionalMatrix.h"
#include "SmirnovAlgorithm.h"
#include "../communication/CommunicationHandler.h"
#include "../distribution/Distribution.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Distribution::DistributionHandler;
using std::vector;

namespace SmirnovFastMul{
    namespace Computation {

        class MultiplyMatrices {
        public:

            MultiplyMatrices();
            MultiplyMatrices(const DistributionHandler& dh);

            void multiply(Matrix& A, Matrix& B, Matrix& C);

            void set_distribution_handler(const DistributionHandler& dh);

        //protected:

            void dfs(Matrix& A, Matrix& B, Matrix& C, int l, int alg_index, int debug=1);

            /**
             * @num_stages Indicates the amount of steps each processor preforms
             */
            void my_bfs(Matrix &A, Matrix &B, Matrix &C, int k, int alg_index, int start_processor, int end_processor,
                        int num_sub_problems = 1);
            //void bfs(vector<Matrix>& alphas, vector<Matrix&> betas, vector<Matrix>& gammas, int k, int alg_index, int start_processor, int end_processor);

            void bfs(Matrix &A, Matrix& B, Matrix& C, int k, int num_sub_problems=1);

            void bfs(PositionalMatrix& A, PositionalMatrix& B, PositionalMatrix& C, int k, int num_sub_problems=1);

        protected:

            void bfs_aux(Matrix &A, Matrix& B, Matrix& C, int k, int alg_index, int num_sub_problems=1);

            void local_multiplication(Matrix&A, Matrix& B, Matrix& C);

            int get_sub_problem_index_start(int start_processor, int end_processor, int num_sub_problems=1);
            int get_sub_problem_index_end(int start_processor, int end_processor, int num_sub_problems=1);

            int get_sub_problem_processors_start(int start_processor, int end_processor, int num_sub_problems=1);
            int get_sub_problem_processors_end(int start_processor, int end_processor, int num_sub_problems=1);

            vector<int> generate_collaberating_nodes(int start_processor, int end_processor, int num_sub_problems=1);

            void place_sub_problems(vector<Matrix> &sub_matrices, vector<Matrix> &gammas, int current_sub_problem_index,
                                    int sub_problem_index_start, int sub_problem_index_end);

        private:

            // Generated a list of sub_matrices
            vector<Matrix> generate_sub_matrices(int row_dim, int col_dim);

            // Returns the index of the sub problem we are currently working on
            int get_sub_problem(int start_processor, int end_processor);


            // The communication handler to be used throughout the multiplication algorithm
            CommunicationHandler m_comm_handler;

            DistributionHandler m_distribution_handler;

            vector<SmirnovAlgorithm> m_algorithms;
            int m_internal_algorithm;
            vector<int> m_processor_rank;

        };
    }
}


#endif //FASTMATMUL_MULTIPLYMATRICES_H
