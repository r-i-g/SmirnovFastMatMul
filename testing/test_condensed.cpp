//
// Created by rong on 1/1/16.
//

#include "../matrix/CondensedMatrix.h"
#include "../distribution/Distribution.h"
#include <iostream>

using SmirnovFastMul::Computation::CondensedMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using std::cout;
using std::endl;

void test_condense() {
    // Original matrix is 4X4 and represent a 2X2 from it
    Matrix matrix(4);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;

    DistributionHandler dh2(1,4,4);
    CondensedMatrix cm2 = dh2.condensed_distributed_matrix(matrix,1);
    cout << cm2 << endl;

}

void test_merge() {
    Matrix matrix(4);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    DistributionHandler dh2(1,4,4);
    CondensedMatrix cm2 = dh2.condensed_distributed_matrix(matrix,1);

    cm.merge(cm2);
    cout << cm << endl;

    DistributionHandler dh3(2,4,4);
    cm = dh.condensed_distributed_matrix(matrix,1);
    CondensedMatrix cm3 = dh3.condensed_distributed_matrix(matrix,1);
    cm.merge(cm3);
    cout << cm << endl;
}

int main() {
    //CondensedMatrix cm(4,4,2);
    //cm.init_range();
    //cout << cm << endl;
    //test_condense();
    test_merge();
    return 0;
}
