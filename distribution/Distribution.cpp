//
// Created by rong on 11/13/15.
//

#include "Distribution.h"
#include <math.h>
#include <iostream>

using SmirnovFastMul::Distribution::DistributionHandler;
//using SmirnovFastMul::Communication::CommunicationHandler;

using std::cout;
using std::endl;

DistributionHandler::DistributionHandler(int rank, int num_nodes, int processor_grid_base) :
        m_rank(rank), m_num_nodes(num_nodes), m_processor_grid_base(processor_grid_base)
{ }

DistributionHandler::DistributionHandler(const DistributionHandler& dh) :
        DistributionHandler(dh.m_rank, dh.m_num_nodes, dh.m_processor_grid_base)
{ }


/*
void Distribution::distribute_matrix(const Matrix& matrix, int block_size) {
    // The initial distribution of the matrix among the processors

    // Creating the data we want to distribute
    for (int k = 0; k < m_comm.get_num_nodes(); ++k) {

    }


    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
        for (int j = 0; j < matrix.get_col_dimension(); ++j) {

        }
    }

    // Distributing the data to the processes

}*/

int DistributionHandler::sub_problem_start(int recursion_level, int num_sub_problems) {
    int rank = m_rank;

    // Viewing the process rank as a number in 40 base
    char conversion[32] = {0};
    for (int i = 0; rank != 0; ++i) {
        conversion[i] = rank % m_processor_grid_base;
        rank = rank / m_processor_grid_base;
    }

    return conversion[recursion_level-1] * num_sub_problems;
}

int DistributionHandler::sub_problem_end(int recursion_level, int num_sub_problems) {
    return sub_problem_start(recursion_level, num_sub_problems) + num_sub_problems - 1;
}

int DistributionHandler::target_processor(int sub_problem_index, int recursion_level) {
    int rank = m_rank;

    // Viewing the process rank as a number in 40 base
    char conversion[32] = {0};
    for (int i = 0; rank != 0; ++i) {
        conversion[i] = rank % m_processor_grid_base;
        rank = rank / m_processor_grid_base;
    }

    conversion[recursion_level-1] = sub_problem_index;

    int target = 0;
    int exp = 1;
    for(int i=0; i<32; i++) {
        target += conversion[i] * exp;
        exp = exp * m_processor_grid_base;
    }

    return target;
}

bool DistributionHandler::are_coordinates_contained(int i, int j, int block_size) {
    int our_rank = m_rank;
    int processor_matrix_dimension = (int)sqrt(m_num_nodes);

    // Converting the coordinates to be in the scale of our block size
    int i_in_block_size = i / block_size;
    int j_in_block_size = j / block_size;

    // Getting the position of the block relative to the processor grid assignment
    int relative_i = i_in_block_size % processor_matrix_dimension;
    int relative_j = j_in_block_size % processor_matrix_dimension;

    return (relative_i * processor_matrix_dimension + relative_j) == our_rank;
}

Matrix DistributionHandler::distribute_matrix(const Matrix& matrix, int block_size) {

    // Creating the processor version of the matrix
    Matrix processor_version_matrix(matrix.get_row_dimension(), matrix.get_col_dimension());

    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
        for (int j = 0; j < matrix.get_col_dimension(); ++j) {

            if ( are_coordinates_contained(i,j,block_size) ) {
                processor_version_matrix(i,j) = matrix(i,j);
            }

        }
    }

    return processor_version_matrix;
}