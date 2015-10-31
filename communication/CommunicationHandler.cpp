#include "CommunicationHandler.h"
#include <iostream>

using SmirnovFastMul::Communication::CommunicationHandler;

CommunicationHandler::CommunicationHandler() : m_num_nodes(0), m_rank(-1) {

    // Initializing MPI communication
    // TODO add a check using mpi_initialized
    MPI_Init(NULL, NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &m_num_nodes);
    MPI_Comm_rank(MPI_COMM_WORLD, &m_rank);
    // TODO Add a check that the number of processes is a power of 40
}

void CommunicationHandler::send_matrix(const Matrix& matrix, int node) {

    // Sending the matrix to node
    MPI_Send(matrix.get_data(), 1, matrix.get_mpi_interpretation().get_type(), node, 11, MPI_COMM_WORLD);

    //std::cout <<"sending"<<std::endl;
}

int CommunicationHandler::get_num_node() {
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
    MPI_Recv(mat.get_data(), row_dim * col_dim, MPI_DOUBLE, from_node, 11, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    //std::cout << "from process " << m_rank << " receiving matrix " <<  mat(0,0) <<" from node " << from_node << std::endl;
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

