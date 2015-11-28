//
// Created by rong on 11/13/15.
//

//#include "../communication/CommunicationHandler.h"
#include "../distribution/Distribution.h"
#include "../matrix/Matrix.h"
#include "../algorithm/MultiplyMatrices.h"
#include <iostream>

using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::MultiplyMatrices;

using std::cout;
using std::endl;

void test_matrix_addition() {
    Matrix a(3);
    a.init(3);

    Matrix b(3);
    b.init(3);

    Matrix c(3);
    c.init(6);

    a += b;

    if (a == c) {
        cout << "Matrix Addition: True" << endl;
    } else {
        cout << "Matrix Addition: False" << endl;
    }
}

void test_distribution() {
    DistributionHandler dh(0, 49, 7);
    int target = dh.target_processor(1, 2, 1);

    if(target != 7) {
        cout << "Distribution: False " << __LINE__  << endl;
        return;
    }

    target = dh.target_processor(2,2,1);
    if(target != 14 ) {
        cout << "Distribution: False " << __LINE__  << endl;
        return;
    }

    DistributionHandler dh1(0, 100, 10);
    target = dh1.target_processor(4,2,4);
    if(target != 10) {
        cout << "Distribution: False " << target << " "<< __LINE__  << endl;
        return;
    }
    target = dh1.target_processor(5,2,4);
    if(target != 10) {
        cout << "Distribution: False " << __LINE__  << endl;
        return;
    }

    DistributionHandler dh2(3, 100, 10);
    target = dh2.target_processor(3,2,4);
    if(target != 3) {
        cout << "Distribution: False " << target << " "<< __LINE__  << endl;
        return;
    }

    cout << "Distribution: True" << endl;
}

void test_sub_problem_assignment() {
    DistributionHandler dh(3, 49, 7);
    int sub_start = dh.sub_problem_start(2, 1);
    int sub_end = dh.sub_problem_end(2,1);
    if (sub_start != 0 || sub_end != 0) {
        cout << "Sub problem: False" << endl;
        return;
    }

    sub_start = dh.sub_problem_start(1,1);
    sub_end = dh.sub_problem_end(1,1);
    if (sub_start != 3 || sub_end != 3) {
        cout << "Sub problem: False" << endl;
        return;
    }

    DistributionHandler dh2(3, 100, 10);
    sub_start = dh2.sub_problem_start(2, 4);
    sub_end = dh2.sub_problem_end(2,4);
    if (sub_start != 0 || sub_end != 3) {
        cout << "Sub problem: False" << __LINE__  << endl;
        return;
    }

    DistributionHandler dh3(10, 100, 10);
    sub_start = dh3.sub_problem_start(2, 4);
    sub_end = dh3.sub_problem_end(2,4);
    if (sub_start != 4 || sub_end != 7) {
        cout << "Sub problem: False" << " " << sub_start << " " << sub_end << " " << __LINE__ << endl;
        return;
    }

    DistributionHandler dh4(40, 1600, 40);
    sub_start = dh4.sub_problem_start(2, 1);
    sub_end = dh4.sub_problem_end(2,1);
    if (sub_start != 1 || sub_end != 1) {
        cout << "Sub problem: False" << __LINE__  << endl;
        return;
    }

    cout << "Sub problem: True" << endl;
    //cout << sub_start << sub_end << endl;
}

void test_bfs() {
    Matrix a(54);
    Matrix b(54);

    Matrix c(54);


    a.init(2);
    b.init(3);

    MultiplyMatrices alg;
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    alg.bfs(a,b,c,2,4);
    if( 0 == rank) {
        cout << c << endl;
    }

    MPI_Barrier(MPI_COMM_WORLD);
}

int main() {

    //test_matrix_addition();
    //test_distribution();
    //test_sub_problem_assignment();
    test_bfs();

    return  0;
}