//
// Created by rig on 17/06/16.
//

#include <stdio.h>
#include <iostream>
#include <omp.h>

using std::cout;
using std::endl;

extern "C" {
// for computers with cblas
//#include <cblas.h>
// for calling fortran blas
void dgemm_( char*, char*, int*,int*,int*, double*, double*,int*, double*,int*, double*, double*,int*);
void daxpy_( int*, double*, double*, int*, double*, int* );
void dcopy_( int*, double*, int*, double*, int* );
void dscal_( int*, double*, double*, int* );
}

/*
#define dgemm_rowmajor(A,B,C,m,n,k,alpha,beta,transf_A,transf_B, lda, ldb, ldc) \
        dgemm_(&transf_B, &transf_A, &n, &m, &k, &alpha, B, &m, A, &k, &beta, C, &n)
*/
#define dgemm_rowmajor(A,B,C,m,n,k,alpha,beta,transf_A,transf_B) \
        dgemm_(&transf_B, &transf_A, &n, &m, &k, &alpha, B, &m, A, &k, &beta, C, &n)

void test_omp_dgemm(double* a, double* b, double* c) {
    char N = 'N';
    int m = 2;
    int k = 3;
    int n = 2;
    double alpha = 1.;
    double beta = 0.;
    // row major matrices
    dgemm_rowmajor(a,b,c,m,n,k,alpha,beta,N,N);
    //dgemm_rowmajor(a,b,c,m,n,k,alpha,beta,N,N,n,k,n);
    //dgemm_( &N, &N, &rows_a, &cols_b, &cols_a, &one, a, &rows_a, b, &rows_b, &zero, c, &rows_a);
}

void print_result(double* c) {
    printf ("[ %g, %g\n", c[0], c[1]);
    printf ("  %g, %g ]\n", c[2], c[3]);
}

int main(void) {
    double a[] = { 0.11, 0.12, 0.13,
                   0.21, 0.22, 0.23 };

    double b[] = { 1011, 1012,
                   1021, 1022,
                   1031, 1032 };

    double c[] = { 0.00, 0.00,
                   0.00, 0.00 };

    cout << "testing the results of omp dgemm " << endl;
    test_omp_dgemm(a, b, c);
    print_result(c);

    return 0;
}
