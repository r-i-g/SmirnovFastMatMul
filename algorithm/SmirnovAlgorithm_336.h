//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_336_H
#define FASTMATMUL_SMIRNOVALGORITHM_336_H

#include "SmirnovAlgorithm.h"

namespace SmirnovFastMul {
    namespace Computation {

        template <typename MatrixType>
        class SmirnovAlgorithm_336 : public SmirnovFastMul::Computation::SmirnovAlgorithm<MatrixType> {

        public:
            SmirnovAlgorithm_336() : SmirnovAlgorithm<MatrixType>(3,3,6) {}

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_alpha_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_beta_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance<MatrixType>>> get_gamma_alg();

        protected:

        };

        #include "SmirnovAlgorithm_336.tpp"
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_336_H
