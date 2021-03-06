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
        DistributionHandler(rank, num_nodes, processor_grid_base, processor_grid_base)
{ }

DistributionHandler::DistributionHandler(int rank, int num_nodes, int processor_row_dim, int processor_col_dim) :
        m_rank(rank), m_num_nodes(num_nodes), m_processor_row_dim(processor_row_dim), m_processor_col_dim(processor_col_dim)
{
    m_processor_grid_base = m_processor_col_dim;
}

DistributionHandler::DistributionHandler(const DistributionHandler& dh) :
        DistributionHandler(dh.m_rank, dh.m_num_nodes, dh.m_processor_row_dim, dh.m_processor_col_dim)
{ }

int DistributionHandler::sub_problem_start(int recursion_level, int num_sub_problems) {
    int rank = m_rank;

    // Viewing the process rank as a number in m_processor_grid_base base
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

    // Viewing the process rank as a number in m_processor_grid_base base
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

    // Converting the coordinates to be in the scale of our block size
    int i_in_block_size = i / block_size;
    int j_in_block_size = j / block_size;

    // Getting the position of the block relative to the processor grid assignment
    int relative_i = i_in_block_size % m_processor_row_dim;
    int relative_j = j_in_block_size % m_processor_col_dim;

    return (relative_i * m_processor_col_dim + relative_j) == our_rank;
}

int DistributionHandler::get_neighbor_distance(int k) {
    // Calculating the step needed to take in k recursion level
    char conversion[32] = {0};

    conversion[k-1] = 1;

    int step = 0;
    int exp = 1;
    for(int i=0; i<32; i++) {
        step += conversion[i] * exp;
        exp = exp * m_processor_grid_base;
    }

    return step;
}

int DistributionHandler::get_grid_base() {
    return m_processor_grid_base;
}

Matrix DistributionHandler::distribute_matrix(const Matrix& matrix, int block_size) {

    // Creating the processor version of the matrix
    int row_dimension = matrix.get_row_dimension() / m_processor_row_dim;
    int col_dimension = matrix.get_col_dimension() / m_processor_col_dim;

    // If the processor doesn't partition exactly the matrix we need to adjust the matrix sizes
    int extra_rows = matrix.get_row_dimension() % m_processor_row_dim;
    int extra_cols = matrix.get_col_dimension() % m_processor_col_dim;

    if(extra_rows != 0) {
        int grid_row = m_rank / m_processor_col_dim;
        row_dimension += (extra_rows > grid_row ? 1 : 0);
    }
    if(extra_cols != 0) {
        int grid_col = m_rank % m_processor_col_dim;
        col_dimension += (extra_cols > grid_col ? 1 : 0);
    }

    Matrix processor_version_matrix(row_dimension, col_dimension);

    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
        for (int j = 0; j < matrix.get_col_dimension(); ++j) {

            if ( are_coordinates_contained(i,j,block_size) ) {
                processor_version_matrix(i / m_processor_row_dim, j / m_processor_col_dim) = matrix(i,j);
            }

        }
    }

    return processor_version_matrix;
}


PositionalMatrix DistributionHandler::condensed_distributed_matrix(const Matrix& matrix, int block_size) {

    int matrix_row_dimension = matrix.get_row_dimension();
    int matrix_col_dimension = matrix.get_col_dimension();

    //int condensed_row_dimension = matrix_row_dimension / m_processor_row_dim;
    //int condensed_col_dimension = matrix_col_dimension / m_processor_col_dim;

    PositionalMatrix condensed_matrix(matrix_row_dimension, matrix_col_dimension,
                                      m_processor_row_dim, m_processor_col_dim);

    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
        for (int j = 0; j < matrix.get_col_dimension(); ++j) {

            if ( are_coordinates_contained(i,j,block_size) ) {
                condensed_matrix.condense(matrix(i,j), m_processor_row_dim, m_processor_col_dim, i,j);
            }

        }
    }

    return condensed_matrix;
}

void DistributionHandler::init_owned_positions(PositionalMatrix& matrix) {

    // Calculating the relative position our rank in the processor grid
    int p_i = m_rank / m_processor_col_dim;
    int p_j = m_rank % m_processor_col_dim;

    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
        for (int j = 0; j < matrix.get_col_dimension(); ++j) {
            // Calculating the global i and j
            int g_i = p_i + i * m_processor_row_dim;
            int g_j = p_j + j * m_processor_col_dim;

            *matrix.get_positions(i,j) = g_i * matrix.get_containing_column() + g_j;
        }
    }
}