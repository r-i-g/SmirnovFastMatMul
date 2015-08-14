#include "./common/common.h"
#include "./matrix/Matrix.h"
#include <iostream>

using SmirnovFastMul::Computation::Matrix;
using std::cout;
using std::endl;

int main() {

	// Creating a 3X3 matrix
	Matrix mat(3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			// Setting values to the matrix
			mat(i, j) = i;
		}
	}
	cout << mat << endl;

	// Getting a submatrix
	Matrix sub(mat.sub_matrix(2,2,0,1));
	cout << sub << endl;

	return 0;
}
