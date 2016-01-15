//
// Created by rong on 1/14/16.
//

#ifndef FASTMATMUL_ALGTESTA_H
#define FASTMATMUL_ALGTESTA_H

#include "AlgorithmEntrance.h"
#include <vector>
#include <iostream>
#include <functional>

using SmirnovFastMul::Computation::AlgorithmEntrance;
using std::vector;
using std::cout;
using std::endl;


void iterate(vector<std::function<MatrixType(vector<MatrixType>&)>> &algorithm) {
    for(auto alg_entrance : alg) {
        cout << alg_entrance() << endl;
    }
}

vector<AlgorithmEntrance<int>> create() {
    return
}

#endif //FASTMATMUL_ALGTESTA_H
