//
// Created by rig on 22/06/16.
//

#include "utils/command_line_parser.h"
#include "utils/dgemm_utils.h"
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

extern "C" {

void pdgemm_ (char*, char*,
              int * 	M,
              int * 	N,
              int * 	K,
              double * 	ALPHA,
              double * 	A,
              int * 	IA,
              int * 	JA,
              int * 	DESCA,
              double * 	B,
              int * 	IB,
              int * 	JB,
              int * 	DESCB,
              double * 	BETA,
              double * 	C,
              int * 	IC,
              int * 	JC,
              int * 	DESCC);

void descinit_( int *desc, int *m, int *n, int *mb, int *nb, int *irsrc, int *icsrc, int *ictxt, int *lld, int *info);

int  numroc_( int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);

void Cblacs_pinfo( int* mypnum, int* nprocs);
void Cblacs_get( int context, int request, int* value);
void Cblacs_gridinfo( int context, int*  np_row, int* np_col, int*  my_row, int*  my_col);
void Cblacs_gridexit( int context);
void Cblacs_exit( int error_code);
int  Cblacs_gridinit( int* context, char * order, int np_row, int np_col);

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
    /*pdgemm_(&N, &N, &global_B_col_dim, &global_A_row_dim, &global_A_col_dim,
            &alpha, B.get_data(), &ONE, &ONE, descB,
            A.get_data(), &ONE, &ONE, descA,
            &beta, C.get_data(), &ONE, &ONE, descC);*/

    pdgemm_(&N, &N, &global_A_row_dim, &global_B_col_dim, &global_A_col_dim,
            &alpha, A.get_data(), &ONE, &ONE, descA,
            B.get_data(), &ONE, &ONE, descB,
            &beta, C.get_data(), &ONE, &ONE, descC);
    //dgemm_(&transf_B, &transf_A, &n, &m, &k, &alpha, B, &n, A, &k, &beta, C, &n);
}

/*
 * Reading contents of matrices to multiply using the dgemm routine and outputting the relevant statistics
 */

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
    int processor_row_dim = 1;
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
}
/*
#define gridSize 4

int main(int argc, char* argv[]) {
    int i, j, k, np, myid;
    int bufsize;
    double *buf;

    MPI_Offset filesize;
    MPI_File myfile;
    MPI_Status status;

    // Initialize MPI
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &myid);
    MPI_Comm_size(MPI_COMM_WORLD, &np);

    double *A = (double *) malloc(gridSize * gridSize * sizeof(double));

    //I use mpi-IO to read in a matrix from a file, each processor reads in a row and that row is store in the array called buf
    for (j = 0; j < bufsize; j++) {
        A[myid * bufsize + j] = buf[j];
    }

    //BLACS portion
    int ictxt, nprow, npcol, myrow, mycol, nb;
    int info, itemp;
    int ZERO = 0, ONE = 1;
    nprow = 2;
    npcol = 2;
    nb = 2;

    Cblacs_pinfo(&myid, &np);
    Cblacs_get(-1, 0, &ictxt);
    Cblacs_gridinit(&ictxt, "Row", nprow, npcol);
    Cblacs_gridinfo(ictxt, &nprow, &npcol, &myrow, &mycol);

    int M = gridSize;

    int descA[9], descx[9], descy[9];
    int mA = numroc_(&M, &nb, &myrow, &ZERO, &nprow);
    int nA = numroc_(&M, &nb, &mycol, &ZERO, &npcol);
    int nx = numroc_(&M, &nb, &myrow, &ZERO, &nprow);
    int my = numroc_(&M, &nb, &myrow, &ZERO, &nprow);

    descinit_(descA, &M, &M, &nb, &nb, &ZERO, &ZERO, &ictxt, &mA, &info);
    descinit_(descx, &M, &M, &nb, &nb, &ZERO, &ZERO, &ictxt, &nx, &info);

    descinit_(descy, &M, &M, &nb, &nb, &ZERO, &ZERO, &ictxt, &my, &info);


    double *matrixA = (double *) malloc(mA * nA * sizeof(double));
    double *matrixB = (double *) malloc(mA * nA * sizeof(double));
    double *matrixC = (double *) calloc(mA * nA, sizeof(double));
    int sat, sut;


    for (i = 0; i < mA; i++) {
        for (j = 0; j < nA; j++) {
            sat = (myrow * nb) + i + (i / nb) * nb;
            sut = (mycol * nb) + j + (j / nb) * nb;
            matrixA[j * mA + i] = A[sat * M + sut];
            matrixB[j * mA + i] = A[sat * M + sut];
        }
    }

    double alpha = 1.0;
    double beta = 0.0;

    //call where seg fault happens
    char N = 'N';
    cout << "Before mult" << endl;
    pdgemm_(&N, &N, &M, &M, &M, &alpha, matrixA, &ONE, &ONE, descA, matrixB, &ONE, &ONE, descx,
            &beta, matrixC, &ONE, &ONE, descy);

    //Cblacs_barrier(ictxt, "A");

    //Cblacs_gridexit(0);

    if (myid == 0) {
        printf("Done\n");

    }
    MPI_Finalize();

    exit(0);
}*/