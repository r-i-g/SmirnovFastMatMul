//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_633_H
#define FASTMATMUL_SMIRNOVALGORITHM_633_H

#include "SmirnovAlgorithm.h"

namespace SmirnovFastMul {
    namespace Computation {

        template <typename MatrixType>
        class SmirnovAlgorithm_633 : public SmirnovAlgorithm<MatrixType>{

        public:
            SmirnovAlgorithm_633() : SmirnovAlgorithm<MatrixType>(6,3,3) {}

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_alpha_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_beta_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_gamma_alg();
        };

        #include "SmirnovAlgorithm_633.tpp"
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_633_H
