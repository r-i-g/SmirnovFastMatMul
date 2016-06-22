//
// Created by rig on 18/06/16.
//

#ifndef FASTMATMUL_DGEMM_UTILS_H
#define FASTMATMUL_DGEMM_UTILS_H

#include "../matrix/Matrix.h"
#include <omp.h>

using SmirnovFastMul::Computation::Matrix;

// Since we are using a row notation we use the following algebric rule to use dgemm:
// B^T * A^T = (A * B)^T = C^T, which is what we want

/**
 * Receives matrices in row major representation and multiplies them using the dgemm function
 */
void dgemm_rowmajor(double* A, double* B, double* C, int m, int k, int n);

/**
 * Receives matrices in row major representation and multiplies them using the dgemm function
 */
void dgemm_rowmajor(Matrix &A, Matrix &B, Matrix &C);

#endif //FASTMATMUL_DGEMM_UTILS_H
