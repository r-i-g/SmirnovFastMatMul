//
// Created by rig on 23/06/16.
//

#ifndef FASTMATMUL_PDGEMM_ALG_H
#define FASTMATMUL_PDGEMM_ALG_H

#include "../matrix/PositionalMatrix.h"

using SmirnovFastMul::Computation::PositionalMatrix;

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

void pdgemm(PositionalMatrix& A, PositionalMatrix&B, PositionalMatrix& C, int processor_row, int processor_col);

#endif //FASTMATMUL_PDGEMM_ALG_H
