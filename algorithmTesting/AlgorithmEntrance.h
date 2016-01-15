//
// Created by rong on 1/14/16.
//

#ifndef FASTMATMUL_ALGORITHMENTRANCE_H
#define FASTMATMUL_ALGORITHMENTRANCE_H

#include <vector>

namespace SmirnovFastMul{
    namespace Computation {

        template <typename MatrixType, typename FunctionT> class Alg {
            Alg(FunctionT f) {}
            MatrixType operator()(std::vector<MatrixType>& sub_matrices) { return f(sub_matrices);}
        };

        // Any time we need to create an algorithm we need to specialize the template
        template <typename MatrixType> class AlgorithmEntrance {



            // Implements an entry in the smirnov algorithm
            MatrixType operator()(std::vector<MatrixType>& sub_matrices);
        };
    }
}

#endif //FASTMATMUL_ALGORITHMENTRANCE_H
