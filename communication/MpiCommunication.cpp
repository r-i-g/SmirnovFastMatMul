#include "MpiCommunication.h"

#include <iostream>
using std::cout;
using std::endl;

using SmirnovFastMul::Communication::ArrayType;


ArrayType::ArrayType(const ArrayType& that) : ArrayType() {
    // Initializing the arrays
    init_array(that.m_src_array_size, m_src_array_size);
    init_array(that.m_sub_matrix_size, m_sub_matrix_size);
    init_array(that.m_relative_sub_matrix_location, m_relative_sub_matrix_location);
    init_array(that.m_sub_matrix_location, m_sub_matrix_location);
}

void ArrayType::set_array_size(int row_dim, int col_dim) {
	m_src_array_size[0] = row_dim;
	m_src_array_size[1] = col_dim;
}

void ArrayType::set_sub_matrix_size(int row_dim, int col_dim) {
	m_sub_matrix_size[0] = row_dim;
	m_sub_matrix_size[1] = col_dim;
}

void ArrayType::set_sub_matrix_location(int start_row, int start_col) {
	m_sub_matrix_location[0] = start_row;
	m_sub_matrix_location[1] = start_col;
}

void ArrayType::init() {
    //cout << "src size:" << m_src_array_size[0] << " "<< m_src_array_size[1] << endl;
    //cout << "sub size:" << m_sub_matrix_size[0] << " "<< m_sub_matrix_size[1] << endl;
	MPI_Type_create_subarray(2, m_src_array_size, m_sub_matrix_size, m_relative_sub_matrix_location, MPI_ORDER_C, MPI_DOUBLE, &m_new_type);
	MPI_Type_commit(&m_new_type);
}

void ArrayType::init_array(const int src[2], int dst[2]) {
	for (int i = 0; i < 2; i++)
	{
		dst[i] = src[i];
	}
}

int SmirnovFastMul::Communication::ArrayType::get_sub_matrix_start_row()
{
	return m_sub_matrix_location[0];

}

int SmirnovFastMul::Communication::ArrayType::get_sub_matrix_start_col()
{
	return m_sub_matrix_location[1];

}

MPI_Datatype ArrayType::get_type() {
    init();
    return m_new_type;
}
