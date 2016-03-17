//
// Created by rig on 05/03/16.
//
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
#include "command_line_parser.h"
#include "matrix_creation/matrix_creation.h"
#include "../../matrix/Matrix.h"
#include "../../matrix/PositionalMatrix.h"
#include "../../communication/CommunicationHandler.h"
#include "../../distribution/Distribution.h"
#include "../../algorithm/MultiplyMatrices.h"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Computation::MultiplyMatrices;

int main(int argc, char* argv[]) {

    // Read the parameters from the command line
    string in_file = read_string( argc, argv, "-i", NULL );
    string compare_file = read_string( argc, argv, "-c", NULL );
    int sub_problems = read_int(argc, argv, "-s", SMIRNOV_SUB_PROBLEMS);

    cout << "got the following in file " << in_file << endl;
    cout << "got the following compare file " << compare_file << endl;
    cout << "got the following number of sub problems " << sub_problems << endl;

    ifstream file (in_file);
    ifstream to_compare_file (compare_file);
    MatrixDimensions A_dim;
    MatrixDimensions B_dim;

    CommunicationHandler<Matrix> matrix_comm_handler;

    int our_rank = matrix_comm_handler.get_rank();
    int num_processes = matrix_comm_handler.get_num_nodes();

    if ( our_rank == 0) {

        A_dim = MatrixDimensions(file);
        B_dim = MatrixDimensions(file);

    }

    // Distributing amount of sub_problems
    matrix_comm_handler.broad_cast(sub_problems);

    // Distributing the MatrixDimensions
    auto broadcast_dimension = [&matrix_comm_handler](MatrixDimensions& matrix_dim) {
        matrix_comm_handler.broad_cast(matrix_dim.row_dim);
        matrix_comm_handler.broad_cast(matrix_dim.col_dim);
    };
    broadcast_dimension(A_dim);
    broadcast_dimension(B_dim);

    Matrix complete_A(A_dim.row_dim, A_dim.col_dim);
    Matrix complete_B(B_dim.row_dim, B_dim.col_dim);
    Matrix complete_C(A_dim.row_dim, B_dim.col_dim);

    // Reading the matrices
    if (our_rank == 0) {
        complete_A = matrix_reader(file, A_dim);
        complete_B = matrix_reader(file, B_dim);
    }

    // Distributing the matrices
    matrix_comm_handler.broad_cast(complete_A);
    matrix_comm_handler.broad_cast(complete_B);


    // Taking our part from the matrix
    int grid_base = SMIRNOV_SUB_PROBLEMS/sub_problems;
    DistributionHandler dh(matrix_comm_handler.get_rank(), matrix_comm_handler.get_num_nodes(), grid_base);
    PositionalMatrix A = dh.condensed_distributed_matrix(complete_A, 1);
    PositionalMatrix B = dh.condensed_distributed_matrix(complete_B, 1);
    PositionalMatrix C = dh.condensed_distributed_matrix(complete_C, 1);

    // Removing the content of the complete matrices
    complete_A.clear_matrix();
    complete_B.clear_matrix();
    if (our_rank != 0) {
        complete_C.clear_matrix();
    }

    // Running and timing the algorithm
    MultiplyMatrices<PositionalMatrix> alg(dh);
    //void bfs(MatrixType &A, MatrixType& B, MatrixType& C, int k, int num_sub_problems=1)
    // for calculating log_n(x) == log(x)/log(n)
    int recursion_level = log(num_processes) / log(grid_base);
    alg.bfs(A, B, C, recursion_level, sub_problems);

    // Collecting the output matrices for comparison
    CommunicationHandler<PositionalMatrix> positional_comm_handler;
    if (our_rank == 0) {

        positional_comm_handler.collect_to(complete_C, C);

    } else {

        positional_comm_handler.send_matrix(C,0);
        return 0;
    }

    /// This code is only run from process 0
    // Comparing the matrices
    MatrixDimensions dimensions;
    dimensions.row_dim = A_dim.row_dim;
    dimensions.col_dim = B_dim.col_dim;
    Matrix to_compare = matrix_reader(to_compare_file, dimensions);
    if (to_compare == complete_C) {
        cout << "Matrices are the same" << endl;
    } else {
        cout << "Matrices aren't the same" << endl;
    }

    return 0;
}