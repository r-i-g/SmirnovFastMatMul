//
// Created by rong on 11/13/15.
//

#include "Distribution.h"
#include <math.h>

using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Communication::CommunicationHandler;


DistributionHandler::DistributionHandler() : m_comm() {
}

DistributionHandler::DistributionHandler(CommunicationHandler& comm) : m_comm(comm) {

}

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

bool DistributionHandler::are_coordinates_contained(int i, int j, int block_size) {
    int our_rank = m_comm.get_rank();
    int processor_matrix_dimension = (int)sqrt(m_comm.get_num_nodes());

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
                *processor_version_matrix.get_data(i,j) = *matrix.get_data(i,j);
            }

        }
    }

    return processor_version_matrix;
}