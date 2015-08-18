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
			void scatter_matrix(const Matrix& matrix);

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