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
    Matrix a(49);

    a.init_range();

    // TODO to handle the case of double initalization and release
    DistributionHandler dh;
    Matrix b = dh.distribute_matrix(a, 1);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 0) {
        cout << b << endl;
    }

   // test_distribution_to_0();
    MPI_Barrier(MPI_COMM_WORLD);

    return 0;

}