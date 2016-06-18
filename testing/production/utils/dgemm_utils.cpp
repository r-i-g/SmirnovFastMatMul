//
// Created by rig on 18/06/16.
//

#include "dgemm_utils.h"
#include <iostream>

using std::cout;
using std::endl;

// We'll link against what ever library in existence that implements these functions
extern "C" {

void dgemm_( char*, char*, int*,int*,int*, double*, double*,int*, double*,int*, double*, double*,int*);
void daxpy_( int*, double*, double*, int*, double*, int* );
void dcopy_( int*, double*, int*, double*, int* );
void dscal_( int*, double*, double*, int* );

}

void dgemm_rowmajor(double* A, double* B, double* C, int m, int k, int n) {
    //cout << "In dgemm rowmajor" << endl;
    char transf_B = 'N';
    char transf_A = 'N';
    double alpha = 1.;
    double beta = 0.;

    // row major matrices
    dgemm_(&transf_B, &transf_A, &n, &m, &k, &alpha, B, &n, A, &k, &beta, C, &n);

}

void dgemm_rowmajor(Matrix& A, Matrix& B, Matrix& C) {

   dgemm_rowmajor(A.get_data(), B.get_data(), C.get_data(), A.get_row_dimension(), A.get_col_dimension(), B.get_col_dimension());
}
