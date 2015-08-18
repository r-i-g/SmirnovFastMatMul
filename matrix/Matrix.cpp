#include "Matrix.h"
#include <stdlib.h>
#include <sstream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::ArrayType;


Matrix::Matrix(double* data, ArrayType array_type, int n, int m, int stride, bool is_view):
m_data(data), m_multiplier(1) ,m_array_type(array_type), m_row_dim(n), m_col_dim(m), m_stride(stride), m_is_view(is_view) {}

Matrix::Matrix(int n, int m) : m_data(NULL), m_multiplier(1), m_array_type(), m_row_dim(n), m_col_dim(m), m_stride(m), m_is_view(false) {

	m_array_type.set_array_size(n, m);

	// Allocating n*m double array
	m_data = new double[n*m];
}

Matrix::Matrix(int n) : Matrix(n,n) {}

Matrix::Matrix(const Matrix& that) : Matrix(NULL, that.get_mpi_interpretation(), that.get_row_dimension(),
                                            that.get_col_dimension(), that.get_stride(), false) {

    // TODO create a proper copy constructor
	//// Checking if the dimensions are equal
	//int that_row_dim = that.get_row_dimension();
	//int that_col_dim = that.get_col_dimension();
	//if ((m_row_dim != that_row_dim) ||
	//	(m_col_dim == that_col_dim)) {
	//	throw_range_error("Copied matrix differs in dimensions. Expected row_dim " << m_row_dim << " got " << that_row_dim
	//		 << ". Expected col_dim " << m_col_dim << " got " << that_col_dim);
	//}

	// Destructing the previous array


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
		delete m_data;
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
