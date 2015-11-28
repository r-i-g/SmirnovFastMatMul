//
// Created by rong on 11/13/15.
//

#ifndef FASTMATMUL_DISTRIBUTION_H
#define FASTMATMUL_DISTRIBUTION_H

#include "../matrix/Matrix.h"
#include "../common/common.h"

using SmirnovFastMul::Computation::Matrix;


namespace SmirnovFastMul {
    namespace Distribution {
        class DistributionHandler {
        public:

            DistributionHandler(int rank, int num_nodes, int processor_grid_base =SMIRNOV_SUB_PROBLEMS);
            //void distribute_matrix(const Matrix& matrix, int block_size);

            bool are_coordinates_contained(int i, int j, int block_size);

            int sub_problem_start(int recursion_level, int num_sub_problems=1);

            int sub_problem_end(int recursion_level, int num_sub_problems=1);

            /**
             * Treats the number of processors as an array base SMIRNOV_SUB_PROBLEMS
             * @return to which process we should send the sub_problem
             */
            int target_processor(int sub_problem_index, int recursion_level, int num_sub_problems=1);


            // Each processor creates a new matrix containing only its entries obtained from the original matrix
            Matrix distribute_matrix(const Matrix& matrix, int block_size);

        private:
            int m_rank;
            int m_num_nodes;
            int m_processor_grid_base;
        };
    }
}


#endif //FASTMATMUL_DISTRIBUTION_H
