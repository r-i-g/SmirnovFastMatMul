
// Created by rong on 9/10/15.
//

#include "../matrix/Matrix.h"
#include "../algorithm/MultiplyMatrices.h"
//#include "../communication/CommunicationHandler.h"
#include <mpi.h>
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MultiplyMatrices;
using SmirnovFastMul::Communication::CommunicationHandler;
using std::cout;
using std::endl;

int main() {

    Matrix a(54);
    Matrix b(54);
    Matrix c(54);

    a.init(2);
    //cout << a << endl;
    b.init(3);

    MultiplyMatrices alg;

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    cout << rank << endl;

    alg.bfs(a,b,c,1,0,0,79);

    if(rank == 0 ) {
        cout << c << endl;
    }

    MPI_Barrier(MPI_COMM_WORLD);

    return 0;
}

