//
// Created by rong on 8/29/15.
//

#include "../matrix/Matrix.h"
#include "../algorithm/SmirnovAlgorithm_336.h"
#include "../algorithm/MultiplyMatrices.h"
#include <vector>
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MatrixPtr;
using SmirnovFastMul::Computation::SmirnovAlgorithm_336;
using SmirnovFastMatMul::Computation::MultiplyMatrices;
using std::vector;
using std::cout;
using std::endl;

int main() {

    /*Matrix a(6,3);
    Matrix b(3);
    Matrix c(6,3);

    for (int i = 0; i < 6; ++i) {
        for(int j=0; j<3; j++) {
            a(i,j) = 3;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for(int j=0; j<3; j++) {
            b(i,j) = 3;
        }
    }

    MultiplyMatrices m;
    m.dfs(a,b,c,0,2);
    cout << c << endl;*/

    /*Matrix a(18);
    Matrix b(18,9);
    Matrix c(18,9);

    for (int i = 0; i < 18; ++i) {
        for(int j=0; j<18; j++) {
            a(i,j) = 2;
            if (j < 9) {
                b(i, j) = 3;
            }
        }
    }


    MultiplyMatrices m;
    m.dfs(a,b,c,1,1);
    cout << c << endl;*/

    Matrix a(2916);
    Matrix b(2916);
    Matrix c(2916);

    for (int i = 0; i < 2916; ++i) {
        for (int j = 0; j < 2916; ++j) {
            a(i,j) = 2;
            b(i,j) = 3;
        }
    }

    MultiplyMatrices m;
    m.dfs(a,b,c,5,0);
    cout << c << endl;
    //
    //alg.calculate_c(, c);
    //alg.calculate_c();

    return 0;
}