#ifndef _COMMUNICATION_
#define _COMMUNICATION_

#include <mpi.h>

namespace SmirnovFastMul {
	namespace Communication {

		class ArrayType {
		public:
			ArrayType(){// TODO implement
			}

			// c-tor - does deep copy
			ArrayType(const ArrayType& that);

			void set_array_size(int row_dim, int col_dim);

			void set_sub_matrix_size(int row_dim, int col_dim);

			void set_sub_matrix_location(int start_row, int start_col);

			// Initialized the internal data structure. Assumes all the setters were called.
			void init();

			int get_sub_matrix_start_row();
			int get_sub_matrix_start_col();
            MPI_Datatype get_type();

		protected:
			MPI_Datatype m_new_type; 

			int m_src_array_size[2];
			int m_sub_matrix_size[2];
			// The sub matrix location is relative to the start of the array, and since we advance the array we keep the location at 0,0 
			int m_relative_sub_matrix_location[2] = { 0, 0 };
			// Holds the starting position of the sub block
			int m_sub_matrix_location[2];

			void init_array(const int src[2], int dst[2]);
		};
	} // Communication namespace
} // SmirnovFastMul namespace

#endif
