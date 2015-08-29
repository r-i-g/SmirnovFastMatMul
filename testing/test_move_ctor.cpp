//
// Created by rong on 8/28/15.
//

#include "test_move_ctor.h"
#include "../matrix/Matrix.h"
#include "../algorithm/SmirnovAlgorithm_336.h"
#include <iostream>
#include <vector>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::SmirnovAlgorithm_336;
using std::cout;
using std::endl;
using std::vector;

int main() {
    SmirnovAlgorithm_336 alg;
    vector<Matrix> sub_matrices;
    sub_matrices.reserve(40);
    for (int m = 0; m < 40; ++m) {
        Matrix sub(1);
        //std::cout << "why??>" << std::endl;
        double* sub_data = sub.get_data();
        sub_data[0] = m;
        //std::cout << sub_data[0] << std::endl;
        //std::cout << sub.get_data() << std::endl;
        sub_matrices.push_back(std::move(sub));
    }
    for (int m = 0; m < 40; ++m) {
        cout << sub_matrices[m] << endl;
    }
}