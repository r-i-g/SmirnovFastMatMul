//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_336_H
#define FASTMATMUL_SMIRNOVALGORITHM_336_H

#include "SmirnovAlgorithm.h"

namespace SmirnovFastMul {
    namespace Computation {

        class SmirnovAlgorithm_336 : public SmirnovFastMul::Computation::SmirnovAlgorithm {

        public:
            SmirnovAlgorithm_336() : SmirnovAlgorithm(3,3,6) {}

            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_alpha_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_beta_alg();

            virtual vector<std::shared_ptr<AlgorithmEntrance>> get_gamma_alg();

        protected:

        };

        #include "SmirnovAlgorithm_336.tpp"
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_336_H
