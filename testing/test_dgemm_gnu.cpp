//
// Created by rig on 17/06/16.
//

#include <stdio.h>
#include <gsl/gsl_blas.h>
#include <iostream>

using std::cout;
using std::endl;


void test_gnu_dgemm(double* a, double* b, double* c) {

    gsl_matrix_view A = gsl_matrix_view_array(a, 2, 3);
    gsl_matrix_view B = gsl_matrix_view_array(b, 3, 2);
    gsl_matrix_view C = gsl_matrix_view_array(c, 2, 2);

    // Compute C = A B

    gsl_blas_dgemm (CblasNoTrans, CblasNoTrans,
                    1.0, &A.matrix, &B.matrix,
                    0.0, &C.matrix);
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

    cout << "testing the results of gnu dgemm " << endl;
    test_gnu_dgemm(a, b, c);
    print_result(c);

    return 0;
}