//
// Created by rig on 10/03/16.
//

#ifndef FASTMATMUL_MATRIX_CREATION_H
#define FASTMATMUL_MATRIX_CREATION_H

#include "../../../matrix/Matrix.h"
#include <fstream>

using SmirnovFastMul::Computation::Matrix;
using std::ifstream;

class MatrixDimensions {
public:
    MatrixDimensions() {}
    MatrixDimensions(ifstream& file);

    int row_dim;
    int col_dim;
};

Matrix matrix_reader(ifstream& file, const MatrixDimensions& dimensions);


#endif //FASTMATMUL_MATRIX_CREATION_H
