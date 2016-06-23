//
// Created by rig on 23/06/16.
//

#include "utils/command_line_parser.h"
#include "utils/test_defs.h"
#include "../../pdgemm/pdgemm_alg.h"

bool compare(double* a, double* b, int size) {
    for (int i = 0; i < size; ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

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

    // Initializing positins
    DistributionHandler dh(comm_handler.get_rank(), comm_handler.get_num_nodes(), processor_row_dim, processor_col_dim);
    dh.init_owned_positions(A);
    dh.init_owned_positions(B);

    // Randomizing the data
    A.randomize_ints(10);
    B.randomize_ints(10);

    PositionalMatrix pdgemm_C(A_dim.row_dim, B_dim.col_dim, processor_row_dim, processor_col_dim);
    pdgemm(A, B, pdgemm_C, processor_row_dim, processor_col_dim);
    FOR_RANK_0(our_rank) {
        cout << "Finished dgemm multiplication" << endl;
    }

    PositionalMatrix smir_C(A_dim.row_dim, B_dim.col_dim, processor_row_dim, processor_col_dim);
    //dh.init_owned_positions(smir_C);
    MultiplyMatrices<PositionalMatrix> alg(dh);
    alg.bfs(A, B, smir_C, cmd_parser.get_recursion_levels(), cmd_parser.get_num_subproblems());
    FOR_RANK_0(our_rank) {
        cout << "Finished smir multiplication" << endl;
    }

    // Comparing between the matrices
    int is_equal = compare(pdgemm_C.get_data(), smir_C.get_data(), A_dim.row_dim * B_dim.col_dim);
    if (is_equal) {
        cout << "From process " << comm_handler.get_rank() << " matrices are the same" << endl;
        //if(comm_handler.get_rank() == 2 ) {
        //    cout << " dist " << dist << endl;
        //    cout << " init " << init << endl;
        // }
    } else {
        cout << "From process " << comm_handler.get_rank() << " matrices differ" << endl;
        FOR_RANK_0(our_rank) {
            cout << "dgemm " << pdgemm_C << endl;
            cout << "smir " << smir_C << endl;
        }
    }
    return 0;
}

