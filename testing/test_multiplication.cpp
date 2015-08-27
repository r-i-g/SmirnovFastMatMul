//
// Created by rong on 8/21/15.
//

#include "test_multiplication.h"
#include "../matrix/Matrix.h"
#include "../algorithm/SmirnovAlgorithm_336.h"
#include <vector>
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MatrixPtr;
using SmirnovFastMul::Computation::SmirnovAlgorithm_336;
using std::vector;
using std::cout;
using std::endl;

int main() {

    Matrix a(3);
    Matrix b(3,6);

    for (int i = 0; i < 3; ++i) {
        for(int j=0; j<3; j++) {
            a(i,j) = 3;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for(int j=0; j<6; j++) {
            b(i,j) = 2;
        }
    }

    SmirnovAlgorithm_336 alg;
    vector<MatrixPtr> alpha;
    vector<MatrixPtr> beta;

    std::cout<< a.get_data() << std::endl;
    alg.calculate_alpha(a, alpha);
    alg.calculate_beta(b, beta);

    cout << "alpha" << endl;
    for (int k = 0; k < 40; ++k) {
        //cout << *(alpha[k]) << endl;
    }
    cout << "beta" << endl;
    for (int l = 0; l < 40; ++l) {
        //cout << *(beta[l]) << endl;
    }

    cout << alpha.size() << endl;
    cout << beta.size() << endl;
    vector<Matrix> sub_matrices;
    for (int m = 0; m < 40; ++m) {
        Matrix sub(1);
        double* data_a = alpha.at(m)->get_data();
        double* data_b = beta.at(m)->get_data();
        double* sub_data = sub.get_data();
        //std::cout << "why??>" << std::endl;
        sub_data[0] = data_a[0] * data_b[0];
        //std::cout << sub_data[0] << std::endl;
        //std::cout << sub.get_data() << std::endl;
        sub_matrices.push_back(std::move(sub));
    }

    Matrix c(3,6);
    cout << "c " << c.get_data() << endl;
    alg.calculate_c(sub_matrices, c);
    cout << c << endl;
    //
    //alg.calculate_c(, c);
    //alg.calculate_c();

    return 0;
}