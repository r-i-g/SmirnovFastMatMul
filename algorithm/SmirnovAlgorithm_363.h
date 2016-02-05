//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_363_H
#define FASTMATMUL_SMIRNOVALGORITHM_363_H

#include "SmirnovAlgorithm.h"

namespace SmirnovFastMul {
    namespace Computation {

        template <typename MatrixType>
        class SmirnovAlgorithm_363: public SmirnovFastMul::Computation::SmirnovAlgorithm<MatrixType> {

        public:
            SmirnovAlgorithm_363() : SmirnovAlgorithm<MatrixType>(3,6,3) {}

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_alpha_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_beta_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_gamma_alg();
        };

        #include "SmirnovAlgorithm_363.tpp"
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_363_H
