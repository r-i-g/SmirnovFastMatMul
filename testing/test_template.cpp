//
// Created by rong on 1/21/16.
//

#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include "../distribution/Distribution.h"
#include "../communication/CommunicationHandler.h"
#include <iostream>

#include "../algorithm/SmirnovAlgorithm_336.h"
#include "../algorithm/SmirnovAlgorithm_363.h"
#include "../algorithm/SmirnovAlgorithm_633.h"
#include "../algorithm/SmirnovAlgorithm.h"

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


int main()
{
    //SmirnovAlgorithm_336<CondensedMatrix> sac;
    //SmirnovAlgorithm<CondensedMatrix>& sa = sac;

    test_template_algorithm();
    return 0;
}
