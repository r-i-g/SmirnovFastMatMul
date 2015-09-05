#ifndef _COMMUNICATION_HANDLER_
#define _COMMUNICATION_HANDLER

#include <mpi.h>
#include "../matrix/Matrix.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using std::vector;

namespace SmirnovFastMul {
	namespace Communication {

		class CommunicationHandler {

		public:

			CommunicationHandler();

			virtual ~CommunicationHandler();

            void send_matrix(const Matrix& matrix, int node);

            void scatter_sub_matrices(const vector<Matrix>& sub_matrices, const vector<int>& nodes);

            void scatter_matrix(const Matrix& matrix, const vector<int>& nodes);

            Matrix receive_matrix(int row_dim, int col_dim, int from_node);

            // The vector already consists of constructed matrices
            // Additionally, creating the vector to be of size 40
            vector<Matrix> receive_sub_matrices(int row_dim, int col_dim, const vector<int>& nodes);

            int get_num_node();
            int get_rank();
			// TODO implement send
			// TODO implement Isend
			// TODO implement receive
			// TODO implement receiveI

		protected:

			int m_num_nodes;
			int m_rank;

			std::vector<MPI_Group> groups;
			std::vector<MPI_Comm> communictions;

		};

	} // Communication namespace
} // SmirnovFastMul namespace

#endif