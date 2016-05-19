#ifndef _COMMUNICATION_HANDLER_
#define _COMMUNICATION_HANDLER_

#include <mpi.h>
#include "../matrix/Matrix.h"
#include "../matrix/PositionalMatrix.h"
#include "../measurement/Measurements.h"
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::TimerType;
using std::vector;

namespace SmirnovFastMul {
	namespace Communication {

        template <typename MatrixType>
		class CommunicationHandler {

		public:

			CommunicationHandler(): m_num_nodes(0), m_rank(-1), m_measurements(Measurements::getMeasurementLogger()){

                // Initializing MPI communication
                int is_initialized;
                MPI_Initialized(&is_initialized);
                if(!is_initialized) {
                    MPI_Init(NULL, NULL);
                }
                MPI_Comm_size(MPI_COMM_WORLD, &m_num_nodes);
                MPI_Comm_rank(MPI_COMM_WORLD, &m_rank);
                // TODO Add a check that the number of processes is a power of 40

            }

            // c-tor
            CommunicationHandler(const CommunicationHandler<MatrixType>& comm_handler) :
                    m_num_nodes(comm_handler.m_num_nodes), m_rank(comm_handler.m_rank)
            { }

			virtual ~CommunicationHandler() {
                int is_finalized;
                MPI_Finalized(&is_finalized);
                if(!is_finalized) {
                    MPI_Finalize();
                }
            }

            void send_matrix(const Matrix& matrix, int node) {
                m_measurements.startTimer(TimerType::COMM);

                // Sending the matrix to node
                MPI_Request request;
                // IMPORTAT: Sending the entire matrix and not just the subset of the matrix
                MPI_Isend(matrix.get_data(), matrix.get_row_dimension() * matrix.get_col_dimension() , MPI_DOUBLE, node, 11, MPI_COMM_WORLD, &request);
                //MPI_Send(matrix.get_data(), 1, matrix.get_mpi_interpretation().get_type(), node, 11, MPI_COMM_WORLD);
                MPI_Wait(&request, MPI_STATUS_IGNORE);
                //std::cout <<"sending"<<std::endl;

                m_measurements.endTimer(TimerType::COMM);
            }

            void receive_matrix(Matrix& matrix, int from_node) {

                m_measurements.startTimer(TimerType::COMM);

                MPI_Status status;
                //MPI_Recv(mat.get_data(), row_dim * col_dim, MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                MPI_Recv(matrix.get_data(),matrix.get_row_dimension() * matrix.get_col_dimension(), MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, &status);

                m_measurements.endTimer(TimerType::COMM);
            }

            void send_matrix(const PositionalMatrix& matrix, int node) {

                m_measurements.startTimer(TimerType::COMM);

                // Sending the position array
                //cout << "from rank " << m_rank << " sending position lne " << matrix.position_len() << " to " << node  << endl;
                if (matrix.is_condensed()) {
                    MPI_Send(matrix.get_positions(), matrix.position_len() , MPI_INT, node, 11, MPI_COMM_WORLD);
                }

                // Sending the data array
                MPI_Send(matrix.get_data(), matrix.num_elements() , MPI_DOUBLE, node, 11, MPI_COMM_WORLD);

                m_measurements.endTimer(TimerType::COMM);
            }

            void receive_matrix(PositionalMatrix& matrix, int from_node) {

                m_measurements.startTimer(TimerType::COMM);

                MPI_Status status;
                //cout << "from rank " << m_rank << " receiving position lne " << matrix.position_len() << " from " << from_node  << endl;
                // Receiving the positions
                if (matrix.is_condensed()) {
                    MPI_Recv(matrix.get_positions(), matrix.position_len(), MPI_INT, from_node, 11, MPI_COMM_WORLD,
                             &status);
                }

                // Receiving the data
                MPI_Recv(matrix.get_data(), matrix.num_elements() , MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, &status);

                m_measurements.endTimer(TimerType::COMM);

            }


            /**
             *  Sending num_sub_problems starting at sub_problem to target_processor
             *  @sub_matrices
             *  @sub_problem
             *  @num_sub_problem
             *  @target_processor
             *  @process_sub_problem_start
             */
            void send_receive(vector<MatrixType>& temp_matrices, const vector<MatrixType>& sub_matrices,
                              int send_index, int num_sub_problems, int target_processor) {

                // Creating a temp matrix to store the resutls
                MatrixType temp_matrix = temp_matrices[0].empty_clone();
                for (int i = 0; i < num_sub_problems; ++i) {

                    // We remove deadlocks buy deciding which action we will perform first
                    if ( target_processor > m_rank) {
                        send(sub_matrices, target_processor, i, send_index, num_sub_problems);
                        receive(temp_matrices, target_processor, i, temp_matrix);
                    } else {
                        receive(temp_matrices, target_processor, i, temp_matrix);
                        send(sub_matrices, target_processor, i, send_index, num_sub_problems);
                    }

                }
            }

            void send_receive_parts(const vector<MatrixType>& send_parts, int num_sub_problems, int target_processor,
                                    vector<MatrixType>& sub_problems, int receive_sub_problem) {
                for (int i = 0; i < num_sub_problems; ++i) {
                    MatrixType temp_matrix = send_parts[0].empty_clone();
                    int receive_to = receive_sub_problem * num_sub_problems + i;
                    sub_problems[receive_to] = std::move(temp_matrix);

                    if ( target_processor > m_rank) {
                        send_matrix(send_parts[i], target_processor);
                        receive_matrix(sub_problems[receive_to], target_processor);
                    } else {
                        receive_matrix(sub_problems[receive_to], target_processor);
                        send_matrix(send_parts[i], target_processor);
                    }
                }
            }


            void broad_cast(int& value) {
                MPI_Bcast(&value, 1, MPI_INT, 0, MPI_COMM_WORLD);
            }

            void collect_to(Matrix& dst_matrix, MatrixType& C) {


                for (int i = 0; i < m_num_nodes; ++i) {
                    if(i == m_rank) {
                        dst_matrix.insert_data(C.get_data(), C.get_positions(), C.position_len());
                        continue;
                    }

                    MatrixType temp_matrix = C.empty_clone();
                    receive_matrix(temp_matrix, i);
                    dst_matrix.insert_data(temp_matrix.get_data(), temp_matrix.get_positions(), temp_matrix.position_len());
                }
            }

            /**
             * Sends matrix to all of the other processes
             */
            void broad_cast(Matrix& matrix) {
                MPI_Bcast(matrix.get_data(), matrix.num_elements(), MPI_DOUBLE, 0, MPI_COMM_WORLD);
            }

            int get_num_nodes() {
                return m_num_nodes;
            }

            int get_rank() {
                return m_rank;
            }

            void barrier() {
                MPI_Barrier(MPI_COMM_WORLD);
            }



		protected:

            void send(const vector<MatrixType>& sub_matrices, int target_processor, int sub_problem_index,
                      int send_index, int num_sub_problems) {
                send_matrix(sub_matrices[send_index * num_sub_problems + sub_problem_index], target_processor);
            }

            void receive(vector<MatrixType>& temp_matrices, int target_processor, int sub_problem_index,
                         MatrixType& temp_matrix) {
                receive_matrix(temp_matrix, target_processor);

                m_measurements.startTimer(TimerType::REARRANGE);

                temp_matrices[sub_problem_index] += temp_matrix;

                m_measurements.endTimer(TimerType::REARRANGE);
            }

			int m_num_nodes;
			int m_rank;
            Measurements &m_measurements;

			std::vector<MPI_Group> groups;
			std::vector<MPI_Comm> communictions;

		};

	} // Communication namespace
} // SmirnovFastMul namespace

#endif