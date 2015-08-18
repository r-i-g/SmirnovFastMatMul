#ifndef _MATRIX_
#define _MATRIX_

#include "../common/common.h"
#include "../communication/MpiCommunication.h"
#include <mpi.h>

/************************************************************************/
/*	Creating a MPI matrix wrapper in c++ to ease the handling of sending 
/*	and receiving of information.
/*	As a design choice the wrapped mpi calls are in C to preserve backwards
/*	compatibility.
/************************************************************************/

namespace SmirnovFastMul {
	using Communication::ArrayType;
	namespace Computation
	{
		/*
		Currently the Matrix only supports doubles
		*/
		class Matrix {
		public:
		
			Matrix(double* data, const ArrayType matrix_type, int n, int m, int stride, bool is_view);
			Matrix(int n, int m);
			Matrix(int n);
	
			// c-tor - does deep copy
			Matrix(const Matrix& that);
	
			virtual ~Matrix();
	
			Matrix sub_matrix(int num_rows, int num_col, int start_row, int start_col);
			ArrayType get_mpi_interpretation() const;
	
			// The indices are 0 based
			const double& operator()(int i, int j) const { return m_data[i * m_stride + j]; }
			double& operator()(int i, int j) { return m_data[i * m_stride + j]; }
			// Returns the entire matrix representation
			double* get_data() const;
			double* get_data(int i, int j) const;
	
			void update_multiplier(double multiplier);
			void set_multiplier(double multiplier);
			
			double get_multiplier() const;
			int get_row_dimension() const;
			int get_col_dimension() const;
            int get_stride() const;

			friend std::ostream& operator<<(std::ostream& os, const Matrix& mat) {
				for (int i = 0; i < mat.get_row_dimension(); ++i) {
					for (int j = 0; j < mat.get_col_dimension(); ++j) {
						os << mat(i, j) << " ";
				}
				os << std::endl;
			}
			return os;

			}
			// TODO create friend functions
			// max_ij |a_ij - b_ij|
			// Frobenius norm difference: \| A - B \|_F
			// C = alpha1 * A1
			// C += alpha1 * A1
			// nullify 
			// Generate a matrix with random uniform entries on [0, 1]
			
			//friend Matrix operator- ();
	
		protected:
			
			// The data structure decided upon is a continuous block of memory, rows concatenated.
			double* m_data;
			double m_multiplier;
			ArrayType m_array_type;
	
			int m_row_dim;
			int m_col_dim;
			// Since we save the internal data as a linear vector, we define stride to be m_col_dim-1
	 		int m_stride;

			// Indicates that this matrix is a view to some other allocated internal data
			bool m_is_view;
		};
	} // Computation namespace
} // SmirnovFastMul namespace


#endif // Matrix class implementation
