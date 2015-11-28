#include "CommunicationHandler.h"
#include <iostream>

using SmirnovFastMul::Communication::CommunicationHandler;
using std::cout;
using std::endl;

CommunicationHandler::CommunicationHandler() : m_num_nodes(0), m_rank(-1) {

    // Initializing MPI communication
    // TODO add a check using mpi_initialized
    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &m_num_nodes);
    MPI_Comm_rank(MPI_COMM_WORLD, &m_rank);
    // TODO Add a check that the number of processes is a power of 40
}

CommunicationHandler::CommunicationHandler(const CommunicationHandler& comm_handler) : m_num_nodes(comm_handler.m_num_nodes),
                                                                                       m_rank(comm_handler.m_rank)
{ }

void CommunicationHandler::send_matrix(const Matrix& matrix, int node) {

    // Sending the matrix to node
    MPI_Request request;
    // IMPORTAT: Sending the entire matrix and not just the subset of the matrix
    MPI_Isend(matrix.get_data(), matrix.get_row_dimension() * matrix.get_col_dimension() , MPI_DOUBLE, node, 11, MPI_COMM_WORLD, &request);
    //MPI_Send(matrix.get_data(), 1, matrix.get_mpi_interpretation().get_type(), node, 11, MPI_COMM_WORLD);
    MPI_Wait(&request, MPI_STATUS_IGNORE);
    //std::cout <<"sending"<<std::endl;
}

int CommunicationHandler::get_num_nodes() {
    return m_num_nodes;
}

int CommunicationHandler::get_rank() {
    return m_rank;
}

CommunicationHandler::~CommunicationHandler() {
    //std::cout << "rank " << m_rank << "called dest";
    // TODO add a check using mpi_finalized
    MPI_Finalize();
}

void CommunicationHandler::scatter_sub_matrices(const vector<Matrix>& sub_matrices, const vector<int>& nodes) {

    for (int i = 0; i < nodes.size(); ++i) {
        send_matrix(sub_matrices.at(i), nodes.at(i));
    }
}

Matrix CommunicationHandler::receive_matrix(int row_dim, int col_dim, int from_node) {

    Matrix mat(row_dim, col_dim);
    MPI_Status status;
    //MPI_Recv(mat.get_data(), row_dim * col_dim, MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    MPI_Recv(mat.get_data(), row_dim * col_dim, MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, &status);
    /*if(m_rank==0 && from_node==10) {
        int number_amount;
        MPI_Get_count(&status, MPI_DOUBLE, &number_amount);
        std::cout << "received  " << number_amount << "should have gotten " << row_dim*col_dim << " from " << status.MPI_SOURCE << " with tag " << status.MPI_TAG << std::endl;
    }*/
    //std::cout << "from process " << m_rank << " receiving matrix " <<  mat <<" from node " << from_node << std::endl;
    return mat;
}

vector<Matrix> CommunicationHandler::receive_sub_matrices(int row_dim, int col_dim, const vector<int>& nodes) {

    vector<Matrix> sub_matrices;
    sub_matrices.reserve(nodes.size());

    // Initializing the sub_matrices vector
    for (int j = 0; j < nodes.size(); ++j) {
        sub_matrices.push_back(std::move(Matrix(NULL,row_dim, col_dim)));
    }

    //std::cout << "from process " << m_rank << " receiving data" << std::endl;
    for (int i = 0; i < nodes.size(); ++i) {
        // There's no need to receive from ourselves
        if( nodes.at(i) == m_rank) {
            continue;
        }
        //std::cout << "from " << m_rank << " index " << sub_matrix_index << std::endl;
        sub_matrices.at(i) = std::move(receive_matrix(row_dim, col_dim, nodes.at(i)));
    }

    return sub_matrices;
}

void CommunicationHandler::scatter_matrix(const Matrix& matrix, const vector<int>& nodes) {
    for(auto node : nodes) {
        // There's no need to send ourselves the data
        if(node == m_rank) {
            continue;
        }
        //std::cout << "from process " << m_rank << " sending matrix to node " << node << std::endl;
        send_matrix(matrix, node);
    }
}

void CommunicationHandler::send_receive(vector<Matrix>& sub_matrices, int sub_problem, int num_sub_problems,
                                        int target_processor, int process_sub_problem_start) {

    for (int i = 0; i < num_sub_problems; ++i) {
        int send_index = i + sub_problem * num_sub_problems;

        cout << "Rank:" << m_rank << " target_processor:" << target_processor << endl;
        cout << "Sending index:" << send_index << endl;
        send_matrix(sub_matrices[send_index], target_processor);

        int row_dim = sub_matrices[send_index].get_row_dimension();
        int col_dim = sub_matrices[send_index].get_col_dimension();

        int receive_to = process_sub_problem_start + i;
        sub_matrices[receive_to] += receive_matrix(row_dim, col_dim, target_processor);
    }
}

void CommunicationHandler::send_receive_to(vector<Matrix>& gamma, int sub_problem_start, int num_sub_problems,
                                           int target_processor, int receive_sub_problem) {

    for (int i = 0; i < num_sub_problems; ++i) {
        int send_index = i + sub_problem_start;

        send_matrix(gamma[send_index], target_processor);

        int row_dim = gamma[send_index].get_row_dimension();
        int col_dim = gamma[send_index].get_col_dimension();

        int receive_to = receive_sub_problem * num_sub_problems + i;
        gamma[receive_to] += receive_matrix(row_dim, col_dim, target_processor);
    }

}

