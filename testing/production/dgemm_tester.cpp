//
// Created by rig on 17/06/16.
//

#include "utils/command_line_parser.h"
#include "utils/dgemm_utils.h"
#include "matrix_creation/matrix_creation.h"
#include "../../measurement/Measurements.h"
#include "../../matrix/Matrix.h"

#include <iostream>
#include <string>
#include <fstream>

using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::TimerType;

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

/*
 * Reading contents of matrices to multiply using the dgemm routine and outputting the relevant statistics
 */
int main(int argc, char* argv[]) {

    // Read the parameters from the command line
    string in_file = read_string( argc, argv, "-i");
    string compare_file = read_string( argc, argv, "-c");

    ifstream file (in_file);
    ifstream to_compare_file (compare_file);
    cout << "got the following in file " << in_file << endl;
    cout << "got the following compare file " << compare_file << endl;

    MatrixDimensions A_dim = MatrixDimensions(file);
    MatrixDimensions B_dim = MatrixDimensions(file);
    Matrix C(A_dim.row_dim, B_dim.col_dim);

    Matrix A = matrix_reader(file, A_dim);
    Matrix B = matrix_reader(file, B_dim);

    cout << "Multiplying the matrices " << endl;
    Measurements& m = Measurements::getMeasurementLogger();

    m.startTimer(TimerType::TIME);
    dgemm_rowmajor(A,B,C);
    m.endTimer(TimerType::TIME);


    // Printing the timing statistics
    m.printTimer(TimerType::TIME);
    if (compare_file == "") {
        return 0;
    }

    // Reading the comparison matrix
    MatrixDimensions dimensions;
    dimensions.row_dim = A_dim.row_dim;
    dimensions.col_dim = B_dim.col_dim;
    Matrix to_compare = matrix_reader(to_compare_file, dimensions);
    if (to_compare == C) {
        cout << "Matrices are the same" << endl;
    } else {
        cout << "Matrices aren't the same" << endl;
    }

    return 0;
}