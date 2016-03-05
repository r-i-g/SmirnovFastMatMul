//
// Created by rong on 1/1/16.
//

#include "PositionalMatrix.h"
#include "Matrix.h"
#include <iostream>
#include <mpi.h>
#include <math.h>

using SmirnovFastMul::Computation::PositionalMatrix;
using std::cout;
using std::endl;


PositionalMatrix::PositionalMatrix(int containing_n, int containing_m, int condense_factor, int* positions, Matrix&& matrix) :
        Matrix(std::move(matrix)),
        m_containing_n(containing_n), m_containing_m(containing_m), m_condense_factor(condense_factor), m_positions(positions)
{ }

PositionalMatrix::PositionalMatrix(int containing_n, int containing_m, int n, int m) :
        PositionalMatrix(containing_n, containing_m, containing_n / n)
{ }

PositionalMatrix::PositionalMatrix(int containing_n, int containing_m, int condense_factor):
        Matrix(containing_n/condense_factor, containing_m/condense_factor),
        m_containing_n(containing_n), m_containing_m(containing_m), m_condense_factor(condense_factor),
        m_positions(nullptr)
{
    if (m_condense_factor == 1) {
        return;
    }

    int n = containing_n/condense_factor, m = containing_m/condense_factor;

    m_positions = new int[n*m];
    init_positions(0);
}

PositionalMatrix::PositionalMatrix(const PositionalMatrix& that) :
    Matrix(that),
    m_containing_n(that.m_containing_n), m_containing_m(that.m_containing_m), m_condense_factor(that.m_condense_factor)
{

    if (m_condense_factor == 1) {
        return;
    }
    //cout << " in copy constructor in PositionalMatrix" << endl;
    int n = m_containing_n/m_condense_factor, m = m_containing_m/m_condense_factor;

    m_positions = new int[n*m];
    for (int i = 0; i < n*m; ++i) {
        m_positions[i] = that.get_positions(i);
    }
}

PositionalMatrix::PositionalMatrix(PositionalMatrix&& that) :
    PositionalMatrix(that.m_containing_n, that.m_containing_m, that.m_condense_factor, that.get_positions(), std::move(that))
{
    //cout << "in move ctor" << endl;
    that.m_positions = nullptr;
}

PositionalMatrix::~PositionalMatrix() {
    // We always own the data
    //cout << "in condense d-tor" << endl;
    if (m_positions != nullptr) {
        delete [] m_positions;
    }
}

// The parameters are in the condensed matrix scale
int* PositionalMatrix::sub_position(int num_rows, int num_col, int start_row, int start_col) {

    if(m_positions == nullptr)
        return nullptr;

    int num_elements = num_rows * num_col;

    int sub_position_start = start_row * m_stride + start_col;
    int start_value = m_positions[sub_position_start];
    //cout << "sub_start_porision: " << sub_position_start << " num_rows:" << num_rows << " num columns:" << num_col << endl;
    /*for (int i = 0; i < num_elements(); ++i) {
        cout << m_positions[i] << " ";
    }
    cout << endl;*/


    int* position_array = new int[num_elements];
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_col; ++j) {
            //cout << i * num_col + j <<"," << *get_positions(i + start_row,j + start_col) << " ";
            position_array[i * num_col + j] = *get_positions(i + start_row,j + start_col);
        }
    }
    //cout << endl;

    return position_array;
}

PositionalMatrix PositionalMatrix::sub_matrix(int num_rows, int num_col, int start_row, int start_col) {

    Matrix sub_matrix = Matrix::sub_matrix(num_rows, num_col, start_row, start_col);

    return PositionalMatrix(num_rows * m_condense_factor,
                           num_col * m_condense_factor,
                           m_condense_factor,
                           sub_position(num_rows, num_col, start_row, start_col),
                           std::move(sub_matrix));

}

void PositionalMatrix::condense(double matrix_value, int condense_factor, int i, int j) {
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

void PositionalMatrix::set_positions() {
    for (int i = 0; i < m_row_dim; ++i) {
        for (int j = 0; j < m_col_dim; ++j) {
            int real_i = i * m_condense_factor;
            int real_j = j * m_condense_factor;
            m_positions[i * m_stride + j] = real_i * m_containing_m  + real_j;
        }
    }
}

int PositionalMatrix::get_condense_factor() const {
    return m_condense_factor;
}

void PositionalMatrix::merge(const PositionalMatrix& mat) {
    int current_index = 0;

    int our_index = 0;
    int mat_index = 0;

    // Allocating space to accommodate both matrices
    int merge_size = num_elements() + mat.num_elements();
    double* merged_data = new double[merge_size];
    int* merged_position = new int[merge_size];

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
    //delete [] m_data;
    m_data = merged_data;
    m_is_view = false;

    delete [] m_positions;
    m_positions = merged_position;

    // Changing the dimensions of the inner represented matrix
    m_col_dim = col_amount(m_positions, merge_size, m_containing_m);
    m_row_dim = merge_size / m_col_dim;
    m_stride = m_col_dim;
}

int PositionalMatrix::position_len() const {
    //return num_elements();
    return m_row_dim * m_col_dim;
}

int* PositionalMatrix::get_positions() const {
    return m_positions;
}


void PositionalMatrix::init_positions(int value) {
    for (int i = 0; i < position_len(); ++i) {
        m_positions[i] = value;
    }
}

int PositionalMatrix::get_positions(int i) const {
    return m_positions[i];
}

int* PositionalMatrix::get_positions(int i, int j) const {
    return m_positions + i * m_col_dim + j;
}

PositionalMatrix PositionalMatrix::empty_clone() const {
    return PositionalMatrix(m_containing_n, m_containing_m, m_condense_factor);
}