//
// Created by rig on 17/06/16.
//

#include "utils/command_line_parser.h"
#include "utils/dgemm_utils.h"
#include "matrix_creation/matrix_creation.h"
#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

/*
 * Reading contents of matrices to multiply using the dgemm routine and outputting the relevant statistics
 */
int main(int argc, char* argv[]) {

    // Read the parameters from the command line
    string in_file = read_string( argc, argv, "-i", NULL );

    ifstream file (in_file);
    cout << "got the following in file " << in_file << endl;

    MatrixDimensions A_dim = MatrixDimensions(file);
    MatrixDimensions B_dim = MatrixDimensions(file);

    //Matrix A(A_dim.row_dim, A_dim.col_dim);
    //Matrix B(B_dim.row_dim, B_dim.col_dim);
    Matrix C(A_dim.row_dim, B_dim.col_dim);

    Matrix A = matrix_reader(file, A_dim);
    Matrix B = matrix_reader(file, B_dim);

    cout << "Multiplying the matrices " << endl;
    dgemm_rowmajor(A,B,C);
    cout << C << endl;

    return 0;
}