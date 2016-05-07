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

void test() {
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
}

void test_recursion_level() {
    DistributionHandler dh(0, 64, 4);

    auto f = [](int k) {

        cout << "In level " << k << endl;

        int sub_problem_start = dh.sub_problem_start(k, num_sub_problems);
        int sub_problem_end = dh.sub_problem_end(k, num_sub_problems);
        cout << "Subprblem start is " << sub_problem_start << " and subproblem end is " << sub_problem_end << endl;

        for (int i = 0; i < SMIRNOV_SUB_PROBLEMS / num_sub_problems; ++i) {

            int target_processor = m_distribution_handler.target_processor(i, k);
            cout << "The target processor is " << target_processor << " for problem " << i << endl;

            // There's no need to send ourselves the data
            if (target_processor == m_comm_handler.get_rank()) {
                cout << "No need to send to ourself the problem " << i << endl;
                continue;
            }
        }
    };

    f(3);
    f(2);
    f(1);

}

int main() {

    test_recursion_level();
    return 0;

}