#include "CommunicationHandler.h"
#include <iostream>

using SmirnovFastMul::Communication::CommunicationHandler;

CommunicationHandler::CommunicationHandler() : m_num_nodes(0), m_rank(-1) {

    // Initializing MPI communication
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
    sub_matrices.reserve(SMIRNOV_SUB_PROBLEMS);

    // Initializing the sub_matrices vecotr
    for (int j = 0; j < SMIRNOV_SUB_PROBLEMS; ++j) {
        sub_matrices.push_back(std::move(Matrix(NULL,row_dim, col_dim)));
    }

    //std::cout << "from process " << m_rank << " receiving data" << std::endl;
    for (int i = 0; i < nodes.size(); ++i) {
        int sub_matrix_index = i;
        if(nodes.at(i) > m_rank) {
            sub_matrix_index += 1;
        }
        sub_matrices.at(sub_matrix_index) = std::move(receive_matrix(row_dim, col_dim, nodes.at(i)));
        if(m_rank == 0) {
            std::cout << sub_matrices.at(sub_matrix_index) << std::endl;
        }
    }

    return sub_matrices;
}

void CommunicationHandler::scatter_matrix(const Matrix& matrix, const vector<int>& nodes) {
    for(auto node : nodes) {
        //std::cout << "from process " << m_rank << " sending matrix to node " << node << std::endl;
        send_matrix(matrix, node);
    }
}

