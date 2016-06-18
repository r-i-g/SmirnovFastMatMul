//
// Created by rig on 18/06/16.
//

#ifndef FASTMATMUL_DGEMM_UTILS_H
#define FASTMATMUL_DGEMM_UTILS_H

#include "../../../matrix/Matrix.h"
#include <omp.h>

using SmirnovFastMul::Computation::Matrix;

/**
 * Receives matrices in row major representation and multiplies them using the dgemm function
 */
void dgemm_rowmajor(double* A, double* B, double* C, int m, int k, int n);

/**
 * Receives matrices in row major representation and multiplies them using the dgemm function
 */
void dgemm_rowmajor(Matrix &A, Matrix &B, Matrix &C);

#endif //FASTMATMUL_DGEMM_UTILS_H
