//
// Created by rong on 9/4/15.
//

#include "../matrix/Matrix.h"
//#include "../communication/CommunicationHandler.h"
#include "../distribution/Distribution.h"
#include <iostream>
#include <mpi.h>

using std::cout;
using std::endl;

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Distribution::DistributionHandler;


int main() {
    Matrix a(3);

    a.init_range();

    cout << a << endl;

    CommunicationHandler comm;


   // test_distribution_to_0();

    return 0;

}