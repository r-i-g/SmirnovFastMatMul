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
    std::cout << "rank " << m_rank << "called dest";
    MPI_Finalize();
}

