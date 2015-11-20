//
// Created by rong on 11/13/15.
//

#include "../distribution/Distribution.h"

using SmirnovFastMul::Distribution::DistributionHandler;

int main() {

    // Distributing the matrices between the processors
    DistributionHandler dh;

    Matrix a(54*40);
    Matrix b(54*40);
    Matrix c(54*40);

    dh.distribute_matrix(a,1);
    dh.distribute_matrix(b,1);

    
    return  0;
}