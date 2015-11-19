//
// Created by rong on 11/13/15.
//

#ifndef FASTMATMUL_DISTRIBUTION_H
#define FASTMATMUL_DISTRIBUTION_H

#include "../matrix/Matrix.h"
#include "CommunicationHandler.h"

using SmirnovFastMul::Computation::Matrix;

namespace SmirnovFastMul {
    namespace Communication {
        class Distribution {
        public:

            Distribution(CommunicationHandler& comm);

            void distribute_matrix(const Matrix& matrix, int block_size);

            void distribute_matrix(const Matrix& matrix, int block_size, int start_processor, int end_processor);

        private:
            CommunicationHandler m_comm;
        };
    }
}


#endif //FASTMATMUL_DISTRIBUTION_H
