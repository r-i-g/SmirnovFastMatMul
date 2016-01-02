//
// Created by rong on 1/1/16.
//

#include "CondensedMatrix.h"
#include "Matrix.h"
#include <iostream>

using SmirnovFastMul::Computation::CondensedMatrix;
using std::cout;
using std::endl;

// TODO initialize the values of containing_n and containing_m
CondensedMatrix::CondensedMatrix(int containing_n, int containing_m, int n, int m) :
        m_containing_n(containing_n), m_containing_m(containing_m), Matrix(n,m)
{
    m_positions = new int[n*m];
}

CondensedMatrix::CondensedMatrix(int containing_n, int containing_m, int n) :
        CondensedMatrix(containing_n,containing_m, n, n)
{ }

void CondensedMatrix::condense(double matrix_value, int condense_factor, int i, int j) {
    int condensed_i = i / condense_factor;
    int condensed_j = j / condense_factor;

    m_data[condensed_i * m_stride + condensed_j] = matrix_value;

    //cout << "For position i:" << i << " j:" << j << " containig_m:" << m_containing_m << " we got the posioitn:" << i * m_containing_m + j << endl;
    m_positions[condensed_i * m_stride + condensed_j] = i * m_containing_m + j;
}

int advance_position(int limit, int cur_pos) {
    return limit < cur_pos + 1 ? limit : cur_pos + 1;
}

int col_amount(int* positions, int len, int num_columns) {
    // Until we find a difference of at least one row from the beginning
    int start = positions[0];
    for (int i = 0; i < len; ++i) {
        if ( ((positions[i] - start) / num_columns) > 0) {
            // Since we're 0 based there isn't a need to add 1
            return i;
        }
    }
}

void CondensedMatrix::merge(CondensedMatrix& mat) {
    int current_index = 0;

    int our_index = 0;
    int mat_index = 0;

    // Allocating space to accommodate both matrices
    int merge_size = num_elements() + mat.num_elements();
    double* merged_data = new double[merge_size];
    int* merged_position = new int[merge_size];

    // TODO what goes on with the last step
    for (int i = 0; i <merge_size; ++i) {


        // We inserted all of our data we only need to insert from mat
        if ( our_index == num_elements()) {

            merged_data[i] = mat.m_data[mat_index];
            merged_position[i] = mat.m_positions[mat_index];
            mat_index += 1;

        } else if ( mat_index == mat.num_elements() ) {

            merged_data[i] = m_data[our_index];
            merged_position[i] = m_positions[our_index];
            our_index += 1;
        }
        // Our index is larger than the mat. We copy mat data and advance mat position
        else if (m_positions[our_index] > mat.m_positions[mat_index]) {
            merged_data[i] = mat.m_data[mat_index];
            merged_position[i] = mat.m_positions[mat_index];
            mat_index += 1;
        }
        // mat index is larger. We copy our data and advance our position
        else {
            merged_data[i] = m_data[our_index];
            merged_position[i] = m_positions[our_index];
            our_index += 1;
        }
    }

    // Cleaning our data and assigning the new merged data and positions
    delete m_data;
    m_data = merged_data;

    delete m_positions;
    m_positions = merged_position;

    // Changing the dimensions of the inner represented matrix
    m_col_dim = col_amount(m_positions, merge_size, m_containing_m);
    m_row_dim = merge_size / m_col_dim;
    m_stride = m_col_dim;
}

const int* CondensedMatrix::get_positions() const {
    return m_positions;
}
