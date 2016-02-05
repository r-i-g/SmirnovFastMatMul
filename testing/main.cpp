#include "./common/common.h"
#include "./matrix/Matrix.h"
#include "./communication/CommunicationHandler.h"
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Communication::CommunicationHandler;
using std::cout;
using std::endl;
int main() {


    CommunicationHandler comm_handler;
    int size = 4;
    int rank = comm_handler.get_rank();
    cout << "our rank is " <<  rank << endl;
    if(rank == 0) {
        // Allocate the matrix
        Matrix mat(size);
        int k=0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                // Setting values to the matrix
                mat(i, j) = k;
                k++;
            }
        }

        cout << "sending matrix " << endl;
        cout << mat << endl;
        // Send information to other processors
        k=1;
        //comm_handler.send_matrix(mat.sub_matrix(2,2,0,0), k);
        for(int i=0; i<2; i++) {
            for (int j = 0; j < 2; ++j) {
                comm_handler.send_matrix(mat.sub_matrix(2,2,i,j), k);
                k++;
            }
        }

    } else {
        // Receiving the matrix
        Matrix mat(2);
        MPI_Recv(mat.get_data(), 4, MPI_DOUBLE, 0, 11, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        cout << " got matrix " << endl;
        cout << mat << endl;
    }

	// Getting a submatrix
	//Matrix sub(mat.sub_matrix(2,2,0,1));
	//cout << sub << endl;
    MPI_Barrier(MPI_COMM_WORLD);

	return 0;
}
