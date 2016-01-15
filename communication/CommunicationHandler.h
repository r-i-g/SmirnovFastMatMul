#ifndef _COMMUNICATION_HANDLER_
#define _COMMUNICATION_HANDLER

#include <mpi.h>
#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;
using std::vector;

namespace SmirnovFastMul {
	namespace Communication {

		class CommunicationHandler {

		public:

			CommunicationHandler();

            // c-tor
            CommunicationHandler(const CommunicationHandler& comm_handler);

			virtual ~CommunicationHandler();


            void send_matrix(const Matrix& matrix, int node);

            Matrix receive_matrix(int row_dim, int col_dim, int from_node);


            void send_matrix(const CondensedMatrix& matrix, int node);

            CondensedMatrix receive_matrix(int containing_row_dim, int containing_col_dim,
                                           int row_dim, int col_dim, int from_node);


            void scatter_sub_matrices(const vector<Matrix>& sub_matrices, const vector<int>& nodes);

            void scatter_matrix(const Matrix& matrix, const vector<int>& nodes);


            // The vector already consists of constructed matrices
            // Additionally, creating the vector to be of size 40
            vector<Matrix> receive_sub_matrices(int row_dim, int col_dim, const vector<int>& nodes);

            /**
             *  Sending num_sub_problems starting at sub_problem to target_processor
             *  @sub_matrices
             *  @sub_problem
             *  @num_sub_problem
             *  @target_processor
             *  @process_sub_problem_start
             */
            void send_receive(vector<Matrix>& sub_matrices, int sub_problem, int num_sub_problems,
                              int target_processor, int process_sub_problem_start);

            void send_receive(vector<CondensedMatrix>& sub_matrices, int sub_problem, int num_sub_problems,
                              int target_processor, int process_sub_problem_start);

            void send_receive_to(vector<Matrix>& gamma, int sub_problem_start, int num_sub_problems,
                                 int target_processor, int receive_sub_problem);

            int get_num_nodes();
            int get_rank();
			// TODO implement send
			// TODO implement Isend
			// TODO implement receive
			// TODO implement receiveI

		protected:

            void send(vector<Matrix>& sub_matrices, int target_processor, int sub_problem_index, int sub_problem_group, int num_sub_problems);

            void receive(vector<Matrix>& sub_matrices, int target_processor, int sub_problem_index, int sub_problem_group, int num_sub_problems,
                         int process_sub_problem_start);

			int m_num_nodes;
			int m_rank;

			std::vector<MPI_Group> groups;
			std::vector<MPI_Comm> communictions;

		};

	} // Communication namespace
} // SmirnovFastMul namespace

#endif