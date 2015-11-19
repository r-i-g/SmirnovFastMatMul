//
// Created by rong on 11/13/15.
//

#include "Distribution.h"

using SmirnovFastMul::Communication::Distribution;

Distribution::Distribution(CommunicationHandler& comm) : m_comm(comm) {

}

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

}