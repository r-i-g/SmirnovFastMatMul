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

        template <typename MatrixType>
		class CommunicationHandler {

		public:

			CommunicationHandler(): m_num_nodes(0), m_rank(-1) {

                // Initializing MPI communication
                // TODO add a check using mpi_initialized
                MPI_Init(NULL, NULL);
                MPI_Comm_size(MPI_COMM_WORLD, &m_num_nodes);
                MPI_Comm_rank(MPI_COMM_WORLD, &m_rank);
                // TODO Add a check that the number of processes is a power of 40
            }

            // c-tor
            CommunicationHandler(const CommunicationHandler<MatrixType>& comm_handler) :
                    m_num_nodes(comm_handler.m_num_nodes), m_rank(comm_handler.m_rank)
            { }

			virtual ~CommunicationHandler() {

            }

            void send_matrix(const Matrix& matrix, int node) {
                // Sending the matrix to node
                MPI_Request request;
                // IMPORTAT: Sending the entire matrix and not just the subset of the matrix
                MPI_Isend(matrix.get_data(), matrix.get_row_dimension() * matrix.get_col_dimension() , MPI_DOUBLE, node, 11, MPI_COMM_WORLD, &request);
                //MPI_Send(matrix.get_data(), 1, matrix.get_mpi_interpretation().get_type(), node, 11, MPI_COMM_WORLD);
                MPI_Wait(&request, MPI_STATUS_IGNORE);
                //std::cout <<"sending"<<std::endl;
            }

            void receive_matrix(Matrix& matrix, int from_node) {

                MPI_Status status;
                //MPI_Recv(mat.get_data(), row_dim * col_dim, MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                MPI_Recv(matrix.get_data(),matrix.get_row_dimension() * matrix.get_col_dimension(), MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, &status);

            }


            void send_matrix(const CondensedMatrix& matrix, int node) {
                // Sending the position array
                MPI_Send(matrix.get_positions(), matrix.position_len() , MPI_INT, node, 11, MPI_COMM_WORLD);

                // Sending the data array
                MPI_Send(matrix.get_data(), matrix.num_elements() , MPI_DOUBLE, node, 11, MPI_COMM_WORLD);
            }

            void receive_matrix(CondensedMatrix& matrix, int from_node) {

                MPI_Status status;
                // Receiving the positions
                MPI_Recv(matrix.get_positions(), matrix.position_len() , MPI_INT, from_node, 11, MPI_COMM_WORLD, &status);

                // Receiving the data
                MPI_Recv(matrix.get_data(), matrix.num_elements() , MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, &status);

            }


            /**
             *  Sending num_sub_problems starting at sub_problem to target_processor
             *  @sub_matrices
             *  @sub_problem
             *  @num_sub_problem
             *  @target_processor
             *  @process_sub_problem_start
             */
            void send_receive(const vector<MatrixType>& sub_matrices_to_send, vector<MatrixType>& sub_matrices,
                              int num_sub_problems, int target_processor, int process_sub_problem_start) {


                for (int i = 0; i < num_sub_problems; ++i) {

                    // We remove deadlocks buy deciding which action we will perform first
                    if ( target_processor > m_rank) {
                        send(sub_matrices_to_send, target_processor, i);
                        receive(sub_matrices, target_processor, i, process_sub_problem_start);

                    } else {
                        receive(sub_matrices, target_processor, i, process_sub_problem_start);
                        send(sub_matrices_to_send, target_processor, i);
                    }

                }
            }

            int get_num_nodes() {
                return m_num_nodes;
            }

            int get_rank() {
                return m_rank;
            }

		protected:

            void send(const vector<MatrixType>& sub_matrices, int target_processor, int sub_problem_index) {
                send_matrix(sub_matrices[sub_problem_index], target_processor);
            }

            void receive(vector<MatrixType>& sub_matrices, int target_processor, int sub_problem_index,
                         int process_sub_problem_start) {
                MatrixType matrix = MatrixType::create_sub_matrix();
                int receive_to = process_sub_problem_start + sub_problem_index;
                receive_matrix(matrix, target_processor);
                sub_matrices[receive_to] += matrix;
            }

			int m_num_nodes;
			int m_rank;

			std::vector<MPI_Group> groups;
			std::vector<MPI_Comm> communictions;

		};

	} // Communication namespace
} // SmirnovFastMul namespace

#endif