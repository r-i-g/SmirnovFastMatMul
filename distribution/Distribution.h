//
// Created by rong on 11/13/15.
//

#ifndef FASTMATMUL_DISTRIBUTION_H
#define FASTMATMUL_DISTRIBUTION_H

#include "../matrix/Matrix.h"
#include "../communication/CommunicationHandler.h"

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Communication::CommunicationHandler;

namespace SmirnovFastMul {
    namespace Distribution {
        class DistributionHandler {
        public:

            DistributionHandler(CommunicationHandler& comm);

            //void distribute_matrix(const Matrix& matrix, int block_size);

            bool are_coordinates_contained(int i, int j, int block_size);

            // Each processor creates a new matrix containing only its entries obtained from the original matrix
            Matrix distribute_matrix(const Matrix& matrix, int block_size);

        private:
            CommunicationHandler m_comm;
        };
    }
}


#endif //FASTMATMUL_DISTRIBUTION_H
