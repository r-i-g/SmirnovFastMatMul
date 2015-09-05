//
// Created by rong on 9/4/15.
//

#include "../matrix/Matrix.h"
#include "../communication/CommunicationHandler.h"
#include <iostream>
#include <mpi.h>

using std::cout;
using std::endl;

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Communication::CommunicationHandler;

int main() {
    Matrix a(40,1);

    int k=0;
    for (int i = 0; i < 40; ++i) {
        for (int j = 0; j < 1; ++j) {
            a(i,j) = k;
            k++;
        }
    }

    // Under the assumption that we have 40 processors
    CommunicationHandler comm;
    //cout << comm.get_rank() << endl;

    // creating the processor sub_problem
    int pos = comm.get_rank();
    Matrix sub = a.sub_matrix(1,1,0,pos);
    //cout << "in processor " <<  pos << " sending " << sub(0,0) << endl;

    vector<int> nodes;
    for (int l = 0; l < 40; ++l) {
        if(l == pos) {
            continue;
        }
        nodes.push_back(l);
    }
    comm.scatter_matrix(sub, nodes);

    //MPI_Barrier(MPI_COMM_WORLD);

    vector<Matrix> sub_matrices = std::move(comm.receive_sub_matrices(1,1,nodes));

    MPI_Barrier(MPI_COMM_WORLD);

    if(pos == 0) {
        cout << "received matrices from other collaboratores " << endl;
        cout << "Got " << sub_matrices.size() << " matrices" << endl;
        for (int i = 1; i < 40; ++i) {
            cout << sub_matrices[i] << endl;
        }
    }

    MPI_Barrier(MPI_COMM_WORLD);

    return 0;

}