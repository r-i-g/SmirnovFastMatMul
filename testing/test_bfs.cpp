
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
    Matrix test_result(54);

    // Initializing the matrices
    a.init(2);
    b.init(3);
    test_result.init(324);

    MultiplyMatrices alg;

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    //cout << rank << endl;

    // Testing with regular sub-processes - meaning each process takes 1 sub-problem
    /*Matrix c1(54);
    alg.bfs(a,b,c1,1,0,0,39);
    if(rank == 1) {
        if(test_result != c1) {
            cout << "error with regular sub problem" << endl;
        } else {
            cout << "success with 1 sub_problem" << endl;
        }
    }

    MPI_Barrier(MPI_COMM_WORLD);*/

    // Testing 2 levels of recursion by making each process work on 4 sub-problems
    Matrix c2(54);
    alg.my_bfs(a,b,c2,2,0,0,99,4);
    if(rank == 1 ) {
        if(test_result != c2) {
            cout << "error with 4 sub-problems" << endl;
            //cout << c2 << endl;
        } else {
            cout << "success with 4 sub_problem" << endl;
        }
    }

    //alg.dfs(a,b,c2,2,0,1);

    MPI_Barrier(MPI_COMM_WORLD);

    return 0;
}

