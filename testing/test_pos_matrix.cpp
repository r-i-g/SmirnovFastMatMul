//
// Created by rig on 23/06/16.
//

#include "../matrix/PositionalMatrix.h"
#include "../matrix/Matrix.h"
#include "../communication/CommunicationHandler.h"
#include "../distribution/Distribution.h"
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Distribution::DistributionHandler;
using std::cout;
using std::endl;

bool compare(int* a, int* b, int size) {
    for (int i = 0; i < size; ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void test_positions() {

    Matrix A(6,6);

    CommunicationHandler<PositionalMatrix> comm_handler;
    DistributionHandler dh(comm_handler.get_rank(), comm_handler.get_num_nodes(), 2, 3);
    PositionalMatrix dist = dh.condensed_distributed_matrix(A,1);

    PositionalMatrix init(6,6,2,3);
    dh.init_owned_positions(init);
    int is_equal = compare(init.get_positions(), dist.get_positions(), 6);
    if (is_equal) {
        cout << "From process " << comm_handler.get_rank() << " we got that the poisiton matrices are the same" << endl;
        if(comm_handler.get_rank() == 2 ) {
            cout << " dist " << dist << endl;
            cout << " init " << init << endl;
        }
    } else {
        cout << "From process " << comm_handler.get_rank() << " we got that the amtrices arent equal" << endl;
        if(comm_handler.get_rank() == 0 ) {
            cout << " dist " << dist << endl;
            cout << " init " << init << endl;
        }
    }
}

int main() {

    test_positions();
    return 0;
}