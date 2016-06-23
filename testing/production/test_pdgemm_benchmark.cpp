//
// Created by rig on 22/06/16.
//
/*
#include "utils/command_line_parser.h"
#include "../../algorithm/dgemm_utils.h"
#include "matrix_creation/matrix_creation.h"
#include "../../measurement/Measurements.h"
#include "../../communication/CommunicationHandler.h"
#include "../../distribution/Distribution.h"
#include "../../matrix/Matrix.h"

#include <mpi.h>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::TimerType;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Communication::CommunicationHandler;

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

static int max( int a, int b ){
    if (a>b) return(a); else return(b);
}


void pdgemm(PositionalMatrix& A, PositionalMatrix&B, PositionalMatrix& C, int processor_row, int processor_col) {

    // MN and MB are the block dimensions
    int MB =1;
    int NB =1;
    char process_dist[] = "Row";
    char N = 'N';
    int ZERO = 0, ONE = 1;
    int descA[9], descB[9], descC[9];
    int info, ictxt;
    double alpha = 1.;
    double beta = 0.;

    int global_A_row_dim = A.get_containing_row(), global_A_col_dim = A.get_containing_column();
    int global_B_row_dim = B.get_containing_row(), global_B_col_dim = B.get_containing_column();

    Cblacs_get( -1, 0, &ictxt );
    Cblacs_gridinit( &ictxt, process_dist, processor_row, processor_col);

    int myrow, mycol;
    Cblacs_gridinfo( ictxt, &processor_row, &processor_col, &myrow, &mycol);
    //cout << myrow << " " << mycol << endl;

    int p = numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row );
    int q = numroc_( &global_A_col_dim, &NB, &myrow, &ZERO, &processor_col);
    //cout << p*q << " " << p << " " << q << endl;

    int mA = max(1,numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descA, &global_A_row_dim, &global_A_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mA,  &info);
    //descinit_( descA, &n, &n, &nb, &nb, &izero, &izero, &ictxt, &itemp, &info );

    int mB = max(1, numroc_( &global_B_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descB, &global_B_row_dim, &global_B_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mB,  &info);
    //descinit_( descB, &n, &nrhs, &nb, &nb, &izero, &izero, &ictxt, &itemp, &info );

    int mC = max(1, numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descC, &global_A_row_dim, &global_B_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mB,  &info);

    //pdgemm_( "N", "N", &n, &nrhs, &n, &pone, A.get_data(), &ione, &ione, descA, B.get_data(), &ione, &ione, descB, &mone, C.get_data(), &ione, &ione, descB);
    //pdgemm_("N", "N", &A.rowSize, &A.colSize, &B.colSize,
    // &alpha, A_local, &ZERO, &ZERO, descA,
    // B_local, &ZERO, &ZERO, descB,
    // &beta, C_local, &ZERO, &ZERO, descC);
    // Row major matrix
    pdgemm_(&N, &N, &global_A_row_dim, &global_B_col_dim, &global_A_col_dim,
            &alpha, A.get_data(), &ONE, &ONE, descA,
            B.get_data(), &ONE, &ONE, descB,
            &beta, C.get_data(), &ONE, &ONE, descC);
    //pdgemm_(&N, &N, &global_B_col_dim, &global_A_row_dim, &global_A_col_dim,
    //        &alpha, B.get_data(), &ONE, &ONE, descB,
    //        A.get_data(), &ONE, &ONE, descA,
    //        &beta, C.get_data(), &ONE, &ONE, descC);

    //dgemm_(&transf_B, &transf_A, &n, &m, &k, &alpha, B, &n, A, &k, &beta, C, &n);
}*/

#include "utils/command_line_parser.h"
#include "utils/test_defs.h"
#include "../../pdgemm/pdgemm_alg.h"

/*
 * Reading contents of matrices to multiply using the dgemm routine and outputting the relevant statistics
 */
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
    A.randomize_ints(10);
    B.randomize_ints(10);

    // Starting to time and multiplying the matrices
    Measurements& m = Measurements::getMeasurementLogger();
    m.startTimer(TimerType::TIME);

    pdgemm(A, B, C, processor_row_dim, processor_col_dim);

    m.endTimer(TimerType::TIME);
    FOR_RANK_0(our_rank) {
        m.printTimer(TimerType::TIME);
        m.printTimers();
    }
}


/*
int main(int argc, char* argv[]) {

    double* a = new double[4];
    double a_[] = { 0.11, 0.12,
                   0.21, 0.22 };
    memcpy(a, a_, sizeof(double) * 4);
    //cout << __LINE__ << endl;

    double* b = new double[4];
    double b_[] = { 1011, 1012,
                   1021, 1022};
    memcpy(b, b_, sizeof(double) * 4);
    //cout << __LINE__ << endl;

    double* c = new double[4];
    double c_[] = { 0.00, 0.00,
                   0.00, 0.00 };
    memcpy(c, c_, sizeof(double) * 4);
    //cout << __LINE__ << endl;

    Matrix src_A(a, 2,2);
    Matrix src_B(b, 2,2);
    Matrix src_C(c, 2,2);

    // Distributing to each processor his part of the matrix
    int processor_row_dim = 2;
    int processor_col_dim = 2;
    CommunicationHandler<PositionalMatrix> matrix_comm_handler;
    DistributionHandler dh(matrix_comm_handler.get_rank(), matrix_comm_handler.get_num_nodes(), processor_row_dim, processor_col_dim);

    // Checking that all received the correct matrices
    PositionalMatrix A = dh.condensed_distributed_matrix(src_A, 1);
    PositionalMatrix B = dh.condensed_distributed_matrix(src_B, 1);
    PositionalMatrix C = dh.condensed_distributed_matrix(src_C, 1);

    //cout << "From process " << matrix_comm_handler.get_rank() << " got the following matrix A " << A << endl;
    //cout << "From process " << matrix_comm_handler.get_rank() << " got the following matrix B " << B << endl;

    // Multiplying the matrices
    pdgemm(A,B,C, processor_row_dim, processor_col_dim);
    cout << "From process" << matrix_comm_handler.get_rank() <<"\n"<< C << endl;
    return 0;
}*/