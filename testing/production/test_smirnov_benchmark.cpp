//
// Created by rig on 23/06/16.
//

/*
 * Generating local matrices as the local partitioned matrices, and trying to multiply the matrices
 */

#include "utils/command_line_parser.h"
#include "utils/test_defs.h"

int main(int argc, char* argv[]) {

    CommunicationHandler<PositionalMatrix> comm_handler;
    int our_rank = comm_handler.get_rank();

    // Reading the parameters from the command line
    CommandLineParser cmd_parser(argc, argv);

    // Getting processor dimensions
    int processor_row_dim = cmd_parser.get_processor_row_dim();
    int processor_col_dim = cmd_parser.get_processor_col_dim();
    FOR_RANK_0(our_rank) {
        cout << "Got processor row dim " << processor_row_dim << " and col dim " << processor_col_dim << endl;
    }

    // Getting the matrix dimensions
    MatrixDimensions A_dim(cmd_parser.get_in_file());
    MatrixDimensions B_dim(cmd_parser.get_in_file());
    FOR_RANK_0(our_rank) {
        cout << "For matrix A we got the global matrix row dim " << A_dim.row_dim << " and the col dim " << A_dim.col_dim << endl;
        cout << "For matrix B we got the global matrix row dim " << B_dim.row_dim << " and the col dim " << B_dim.col_dim << endl;
    }

    // Creating randomized matrices
    int our_row_dim;
    int our_col_dim;
    PositionalMatrix A(A_dim.row_dim, A_dim.col_dim, processor_row_dim, processor_col_dim);
    PositionalMatrix B(B_dim.row_dim, B_dim.col_dim, processor_row_dim, processor_col_dim);
    PositionalMatrix C(A_dim.row_dim, B_dim.col_dim, processor_row_dim, processor_col_dim);

    // Randomizing the data
    A.randomize_ints(100);
    B.randomize_ints(100);

    DistributionHandler dh(comm_handler.get_rank(), comm_handler.get_num_nodes(), processor_row_dim, processor_col_dim);
    dh.init_owned_positions(A);
    dh.init_owned_positions(B);
    MultiplyMatrices<PositionalMatrix> alg(dh);

    // Starting to time and multiplying the matrices
    Measurements& m = Measurements::getMeasurementLogger();
    m.startTimer(TimerType::TIME);

    alg.bfs(A, B, C, cmd_parser.get_recursion_levels(), cmd_parser.get_num_subproblems());

    m.endTimer(TimerType::TIME);

    return 0;
 }
