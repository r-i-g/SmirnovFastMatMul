//
// Created by rig on 23/06/16.
//

#include "pdgemm_alg.h"

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

    int p = numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row );
    int q = numroc_( &global_A_col_dim, &NB, &myrow, &ZERO, &processor_col);

    int mA = max(1,numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descA, &global_A_row_dim, &global_A_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mA,  &info);

    int mB = max(1, numroc_( &global_B_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descB, &global_B_row_dim, &global_B_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mB,  &info);

    int mC = max(1, numroc_( &global_A_row_dim, &MB, &myrow, &ZERO, &processor_row ));
    descinit_(descC, &global_A_row_dim, &global_B_col_dim, &MB, &NB, &ZERO, &ZERO, &ictxt, &mC,  &info);

    // Row major matrix
    pdgemm_(&N, &N, &global_A_row_dim, &global_B_col_dim, &global_A_col_dim,
            &alpha, A.get_data(), &ONE, &ONE, descA,
            B.get_data(), &ONE, &ONE, descB,
            &beta, C.get_data(), &ONE, &ONE, descC);

    //pdgemm_(&N, &N, &global_A_row_dim, &global_B_col_dim, &global_A_col_dim,
    //        &alpha, B.get_data(), &ONE, &ONE, descB,
    //        A.get_data(), &ONE, &ONE, descA,
    //        &beta, C.get_data(), &ONE, &ONE, descC);
}

