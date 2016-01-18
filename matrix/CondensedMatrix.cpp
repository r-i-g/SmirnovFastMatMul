//
// Created by rong on 1/1/16.
//

#include "CondensedMatrix.h"
#include "Matrix.h"
#include <iostream>
#include <mpi.h>

using SmirnovFastMul::Computation::CondensedMatrix;
using std::cout;
using std::endl;


CondensedMatrix::CondensedMatrix(int containing_n, int containing_m, int condense_factor, int* positions, Matrix&& matrix,
                                 bool is_view) :
        Matrix(std::move(matrix)),
        m_containing_n(containing_n), m_containing_m(containing_m), m_condense_factor(condense_factor), m_positions(positions)
{
    m_is_view = is_view;
}

CondensedMatrix::CondensedMatrix(int containing_n, int containing_m, int n, int m) :
        CondensedMatrix(containing_n, containing_m, containing_n / n)
{ }

CondensedMatrix::CondensedMatrix(int containing_n, int containing_m, int condense_factor):
        Matrix(containing_n/condense_factor, containing_m/condense_factor),
        m_containing_n(containing_n), m_containing_m(containing_m), m_condense_factor(condense_factor)
{
    int n = containing_n/condense_factor, m = containing_m/condense_factor;

    m_positions = new int[n*m];
    init(0);
}

CondensedMatrix::CondensedMatrix(CondensedMatrix&& that) :
    CondensedMatrix(that.m_containing_n, that.m_containing_n, that.m_condense_factor, that.get_positions(), std::move(that),
    that.m_is_view)
{
    that.m_positions = nullptr;
    that.m_is_view = true;
}

CondensedMatrix::~CondensedMatrix() {
    if(!m_is_view) {
        // Only if we own the data we can delete it
        delete [] m_positions;
    }
}

CondensedMatrix CondensedMatrix::sub_matrix(int num_rows, int num_col, int start_row, int start_col) {
    Matrix sub_matrix = Matrix::sub_matrix(num_rows, num_col, start_row, start_col);
    return CondensedMatrix(m_containing_n/num_rows, m_containing_m/num_col, m_condense_factor,
                           get_positions(start_row,start_col),
                           std::move(sub_matrix),true);
}

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

bool CondensedMatrix::is_contained(int i, int j) {

}

void CondensedMatrix::set_positions() {
    int position_index = 0;
    for (int i = 0; i < m_row_dim; ++i) {
        for (int j = 0; j < m_col_dim; ++j) {
            int real_i = i * m_condense_factor;
            int real_j = j * m_condense_factor;
            m_positions[position_index] = real_i * m_containing_m * real_j;
            position_index++;
        }
    }
}

int CondensedMatrix::get_condense_factor() {
    return m_condense_factor;
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
    delete [] m_data;
    m_data = merged_data;

    delete [] m_positions;
    m_positions = merged_position;

    // Changing the dimensions of the inner represented matrix
    m_col_dim = col_amount(m_positions, merge_size, m_containing_m);
    m_row_dim = merge_size / m_col_dim;
    m_stride = m_col_dim;
}

int CondensedMatrix::position_len() const {
    return num_elements();
}

int* CondensedMatrix::get_positions() const {
    return m_positions;
}

// The indices are 0 based
const double& CondensedMatrix::operator()(int i, int j) const {
    int condensed_i = i / m_condense_factor;
    int condensed_j = j / m_condense_factor;
    return m_data[condensed_i * get_stride() + condensed_j];
}

double& CondensedMatrix::operator()(int i, int j) {
    int condensed_i = i / m_condense_factor;
    int condensed_j = j / m_condense_factor;
    return m_data[condensed_i * get_stride() + condensed_j];
}

void CondensedMatrix::init(int value) {
    for (int i = 0; i < position_len(); ++i) {
        m_positions[i] = value;
    }
}

int* CondensedMatrix::get_positions(int i, int j) const {
    return m_positions + i * m_stride + j;
}