#include "Matrix.h"
#include <stdlib.h>
#include <sstream>
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::ArrayType;


Matrix::Matrix(double* data, ArrayType array_type, int n, int m, int stride, bool is_view):
m_data(data), m_multiplier(1) ,m_array_type(array_type), m_row_dim(n), m_col_dim(m), m_stride(stride), m_is_view(is_view) {
}

Matrix::Matrix(double* data, int n, int m) : m_data(data), m_multiplier(1), m_array_type(), m_row_dim(n), m_col_dim(m), m_stride(m), m_is_view(false) {}

Matrix::Matrix(int n, int m) : m_data(NULL), m_multiplier(1), m_array_type(), m_row_dim(n), m_col_dim(m), m_stride(m), m_is_view(false) {

	m_array_type.set_array_size(n, m);
    m_array_type.set_sub_matrix_size(n, m);
    m_array_type.set_sub_matrix_location(0, 0);

	// Allocating n*m double array
	m_data = new double[n*m];

    init(0);
}

Matrix::Matrix(int n) : Matrix(n,n) {}


Matrix::Matrix(const Matrix& that) : Matrix(that.get_data(), that.get_mpi_interpretation(), that.get_row_dimension(),
                                            that.get_col_dimension(), that.get_stride(), false) {

    //std::cout << "in copy constructror" << std::endl;

	// Creating the internal array
	m_data = new double[m_col_dim*m_row_dim];

	// Copying data
	double* that_data = that.get_data();
	for (int i = 0; i < m_row_dim; i++)
	{
		for (int j = 0; j < m_col_dim; j++)
		{
			m_data[i*m_stride + j] = that_data[i*m_stride + j];
		}
	}

	// Setting the multiplier
	m_multiplier = that.get_multiplier();
}


Matrix::Matrix(Matrix&& that) : Matrix(that.get_data(), that.get_mpi_interpretation(), that.get_row_dimension(),
                                       that.get_col_dimension(), that.get_stride(), that.get_is_view()) {
    //std::cout << "view " << that.m_is_view << std::endl;
    //std::cout << that.m_data << std::endl;
    //std::cout << m_data << std::endl;
    that.m_data = nullptr;
    that.m_is_view = true;

}

ArrayType Matrix::get_mpi_interpretation() const
{
	return m_array_type;
}

double* Matrix::get_data() const
{
	return m_data;
}

double* Matrix::get_data(int i, int j) const
{
	return m_data + i*m_stride + j;
}

int Matrix::get_stride() const {
    return m_stride;
}

void Matrix::update_multiplier(double multiplier)
{
	m_multiplier *= multiplier;
}

void Matrix::set_multiplier(double multiplier)
{
	m_multiplier = multiplier;
}

double Matrix::get_multiplier() const
{
	return m_multiplier;
}

int Matrix::get_row_dimension() const
{
	return m_row_dim;
}

int Matrix::get_col_dimension() const
{
	return m_col_dim;
}

Matrix::~Matrix() {
	if(!m_is_view) {
		// Only if we own the data we can delete it
		delete [] m_data;
	}
}

Matrix Matrix::sub_matrix(int num_rows, int num_col, int start_row, int start_col) {
	m_array_type.set_sub_matrix_size(num_rows, num_col);
	m_array_type.set_sub_matrix_location(start_row, start_col);
	// Advancing the data ptr to be at the start of the block
	return Matrix(get_data(start_row, start_col), m_array_type, num_rows, num_col, m_stride, true);
}

/*
std::ostream& operator<<(std::ostream& os, const Matrix& mat)
{
	for (int i = 0; i < mat.get_row_dimension(); ++i) {
		for (int j = 0; j < mat.get_col_dimension(); ++j) {
			os << mat(i, j) << " ";
		}
		os << std::endl;
	}
	return os;

}*/

void Matrix::init(double value) {
    for (int i = 0; i < get_row_dimension(); ++i) {
        for (int j = 0; j < get_col_dimension(); ++j) {
            m_data[i * m_stride + j] = value;
        }
    }
}