//
// Created by rong on 8/29/15.
//

#include "../matrix/Matrix.h"
#include "../algorithm/SmirnovAlgorithm_363.h"
#include <vector>
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MatrixPtr;
using SmirnovFastMul::Computation::SmirnovAlgorithm_363;
using std::vector;
using std::cout;
using std::endl;


int main() {

    Matrix a(3,6);
    Matrix b(6,3);

    for (int i = 0; i < 3; ++i) {
        for(int j=0; j<6; j++) {
            a(i,j) = 3;
        }
    }

    for (int i = 0; i < 6; ++i) {
        for(int j=0; j<3; j++) {
            b(i,j) = 2;
        }
    }

    SmirnovAlgorithm_363 alg;
    vector<MatrixPtr> alpha;
    alpha.reserve(40);
    vector<MatrixPtr> beta;
    beta.reserve(40);

    //std::cout<< a.get_data() << std::endl;
    alg.calculate_alpha(a);
    alg.calculate_beta(b);

    Matrix c(3);
    vector<Matrix> sub_matrices;
    sub_matrices.reserve(40);
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
    alg.calculate_c(sub_matrices, c);
    cout << c << endl;

    return 0;
}