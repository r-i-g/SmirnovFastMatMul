//
// Created by rong on 1/1/16.
//

#include "PositionalMatrix.h"
#include "../distribution/Distribution.h"
#include "../communication/CommunicationHandler.h"
#include "../algorithm/SmirnovAlgorithm_336.h"
#include "../algorithm/SmirnovAlgorithm.h"
#include <iostream>

using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Computation::SmirnovAlgorithm;

using std::cout;
using std::endl;

/*
void test_condense() {
    // Original matrix is 4X4 and represent a 2X2 from it
    Matrix matrix(4);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    PositionalMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;

    DistributionHandler dh2(1,4,4);
    PositionalMatrix cm2 = dh2.condensed_distributed_matrix(matrix,1);
    cout << cm2 << endl;

}

void test_merge() {
    Matrix matrix(4);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    PositionalMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    DistributionHandler dh2(1,4,4);
    PositionalMatrix cm2 = dh2.condensed_distributed_matrix(matrix,1);

    cm.merge(cm2);
    cout << cm << endl;

    DistributionHandler dh3(2,4,4);
    cm = dh.condensed_distributed_matrix(matrix,1);
    PositionalMatrix cm3 = dh3.condensed_distributed_matrix(matrix,1);
    cm.merge(cm3);
    cout << cm << endl;
}

void test_merge_send_receive() {

    Matrix matrix(4);
    matrix.init_range();

    CommunicationHandler ch;
    int rank = ch.get_rank();

    DistributionHandler dh(rank,4,4);
    PositionalMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    MPI_Barrier(MPI_COMM_WORLD);
    if(rank == 0 ) {
        // Send the data
        //cout << "From processor " << rank << " before send we have the following matrix \n" << cm << endl;
        ch.send_matrix(cm, 1);
    } else {
        cout << "From processor " << rank << " before send we have the following matrix \n" << cm << endl;
        // Receive the data
        PositionalMatrix cm2 = ch.receive_matrix(matrix.get_col_dimension(), matrix.get_col_dimension(),
                                                2,2,0);
        cout << "The matrix received is \n" << cm2 << endl;
        //cm.merge(cm2);
        //cout << "The merged matrix is \n" << cm << endl;
    }

    MPI_Barrier(MPI_COMM_WORLD);
}*/

void test_condensed_sub_matrix() {
    Matrix matrix(4);
    matrix.init_range();

    CommunicationHandler<PositionalMatrix> ch;
    int rank = ch.get_rank();

    DistributionHandler dh(0,4,4);
    PositionalMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    cout << cm << endl;

    PositionalMatrix cm2 = cm.sub_matrix(3,1,0,0);
    cout << cm2 << endl;
    cout << cm2.position_len() << endl;

    //PositionalMatrix cm3 = cm3.sub_matrix();
}


/*
void test_changes_to_inner_algorithm() {
    Matrix matrix(12);
    matrix.init_range();

    SmirnovAlgorithm alg = SmirnovFastMul::Computation::SmirnovAlgorithm_336();
    vector<Matrix> alpha = alg.calculate_alpha(matrix);

    cout << "Original sub matrix len:" << alpha.size() << endl;

    CommunicationHandler ch;
    int rank = ch.get_rank();

    DistributionHandler dh(rank,4,4);
    PositionalMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    vector<PositionalMatrix> alpha2 = alg.calculate_alpha(cm);

    for (int i = 0; i < alpha.size(); ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                if(alpha2[i].is_contained(j,k)) {
                    if( alpha2[i](i,j) != alpha[i](i,j)) {
                        cout << "difference in matrices " << endl;
                        cout << alpha2[i] << endl;
                        cout << alpha[i](i,j) << endl;
                    }
                }
            }
        }
    }

}*/

int main() {
    //PositionalMatrix cm(4,4,2);
    //cm.init_range();
    //cout << cm << endl;
    //test_condense();
    //test_merge();
    //test_merge_send_receive();
    test_condensed_sub_matrix();
    //test_changes_to_inner_algorithm();
    return 0;
}
