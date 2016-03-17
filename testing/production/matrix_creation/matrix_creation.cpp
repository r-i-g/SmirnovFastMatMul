//
// Created by rig on 10/03/16.
//

#include "matrix_creation.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::stringstream;
using std::stoi;
using std::vector;

template <typename T>
vector<T> tokenize_row(const string& line) {
    vector<T> tokens;
    stringstream ss(line);
    string token;
    while (getline(ss, token, ' ')) {
        tokens.push_back(stoi(token));
    }

    return tokens;
}

Matrix matrix_reader(ifstream& file, const MatrixDimensions& dimensions) {
    Matrix matrix(dimensions.row_dim, dimensions.col_dim);

    string row;
    // Reading the content of the matrix from the file
    for (int i = 0; i < dimensions.row_dim; ++i) {
        getline(file, row);
        vector<double> columns = tokenize_row<double>(row);
        for (int j = 0; j < dimensions.col_dim; ++j) {
            matrix(i,j) = columns[j];
        }
    }

    return matrix;
}

MatrixDimensions::MatrixDimensions(ifstream& file) {

    string line;
    getline(file, line);
    //cout << "got line " << line << endl;

    // getting the tokens
    vector<int> dimensions = tokenize_row<int>(line);

    row_dim = dimensions[0];
    col_dim = dimensions[1];
    //cout << "row dim:" << row_dim << " col dim:" << col_dim << endl;
}