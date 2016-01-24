//
// Created by rong on 1/21/16.
//

#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include "../distribution/Distribution.h"
//#include "../communication/CommunicationHandler.h"
#include <iostream>

#include "../algorithm/SmirnovAlgorithm_336.h"
#include "../algorithm/SmirnovAlgorithm_363.h"
#include "../algorithm/SmirnovAlgorithm_633.h"
#include "../algorithm/SmirnovAlgorithm.h"

#include "../algorithm/MultiplyMatrices.h"

#include "../algorithm_backup/SmirnovAlgorithm.h"
#include "../algorithm_backup/SmirnovAlgorithm_336.h"
#include "../algorithm_backup/SmirnovAlgorithm_363.h"

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Computation::SmirnovAlgorithm_336;
using SmirnovFastMul::Computation::SmirnovAlgorithm_363;
using SmirnovFastMul::Computation::SmirnovAlgorithm_633;
using SmirnovFastMul::Computation::MultiplyMatrices;

/******/

void test_template_algorithm() {
    SmirnovAlgorithm_336<Matrix> sac;
    Matrix matrix(6);
    matrix.init_range();
    auto alpha = sac.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha[i] << endl;
    }

    SmirnovFastMulBU::Computation::SmirnovAlgorithm_336 alg;
    auto alpha2 = alg.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha2[i] << endl;
    }

    SmirnovAlgorithm_363<Matrix> sac2;
    auto beta1 = sac2.calculate_beta(matrix);
    cout << "beta" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << beta1[i] << endl;
    }

    SmirnovFastMulBU::Computation::SmirnovAlgorithm_363 alg2;
    auto beta2 = alg2.calculate_beta(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << beta2[i] << endl;
    }
    //SmirnovAlgorithm_633<Matrix> sac3;
}

void test_template_sub_matrices() {
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa1;
    auto sub_matrices = sa1.create_sub_matrices(3,3,cm);
    for (int i = 0; i < 3; ++i) {
        cout << sub_matrices[i] << endl;
    }
    // Excpetion because of a copy constructor
    /*for(auto matrix: sub_matrices) {
        cout << matrix << endl;
    }*/
}

void test_submatrix() {
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    CondensedMatrix cm2 = cm.sub_matrix(2,2,0,0);
    cout << cm << endl;
    cout << cm2 << endl;
}

void test_template_algorithm_condensed() {
    // Creating a condensed matrix
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    SmirnovAlgorithm_336<Matrix> sa1;
    auto alpha1 = sa1.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha1[i] << endl;
    }

    cout << "condensed alphas" << endl;
    cout << "the condensed matrix" << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa2;
    auto alpha2 = sa2.calculate_alpha(cm);
    for (int i = 0; i < 3; ++i) {
        cout << alpha2[i] << endl;
    }
}

void test_template_multiplication() {

    Matrix a(54);
    Matrix b(54);
    Matrix c(54);
    Matrix test_result(54);

    // Initializing the matrices
    a.init(2);
    b.init(3);
    test_result.init(324);

    MultiplyMatrices<Matrix> alg;
    alg.dfs(a,b,c,2,0);

    cout << "test matrix" << endl;
    if(test_result != c) {
        cout << "error with dfs" << endl;
    } else {
        cout << "success with dfs" << endl;
    }

    cout << "test condensed" << endl;
    // TODO solve the issue with condensedmatrix in dfs
    /*MultiplyMatrices<CondensedMatrix> alg2;
    CondensedMatrix a2(54,54,1);
    CondensedMatrix b2(54,54,1);
    CondensedMatrix c2(54,54,1);

    a2.init(2);
    b2.init(3);

    alg2.dfs(a2,b2,c2,2,0);
    if(test_result != c) {
        cout << "error with dfs" << endl;
    } else {
        cout << "success with dfs" << endl;
    }*/
}

int main()
{
    //SmirnovAlgorithm_336<CondensedMatrix> sac;
    //SmirnovAlgorithm<CondensedMatrix>& sa = sac;

    //test_template_algorithm();
    //test_template_multiplication();
    test_template_algorithm_condensed();
    //test_submatrix();
    //test_template_sub_matrices();
    return 0;
}
