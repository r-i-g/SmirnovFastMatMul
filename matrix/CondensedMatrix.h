//
// Created by rong on 1/1/16.
//

#ifndef FASTMATMUL_CONDENSEDMATRIX_H
#define FASTMATMUL_CONDENSEDMATRIX_H

#include "Matrix.h"

namespace SmirnovFastMul {
    using Communication::ArrayType;
    namespace Computation {
        /**
         * This matrix is a representation of a sparse matrix. The values stored in the matrix are apart by a constant
         * factor.
         */
        class CondensedMatrix : public Matrix {
        public:

            //
            CondensedMatrix(int containing_n, int containing_m, int n, int m);
            CondensedMatrix(int containing_n, int containing_m, int n=0);

            /**
             * Inserts the matrix_value at positions i,j of the represented matrix
             */
            void condense(double matrix_value, int condense_factor, int i, int j);

            /**
             * Merging two matrices together while keeping the sparse representation.
             * The order of the merge is determined by the inserted positions in the matrices
             */
            void merge(CondensedMatrix& mat);

            // Returns the linear positions of the inserted values. The representation is row major.
            const int* get_positions() const;

            // Returns the first column in the represented sparse matrix
            int start_col();
            // Similarly, returns the last column in the represented sparse matrix
            int end_col();

        protected:
            int m_containing_n;
            int m_containing_m;

            // Holds the positions of the entries as if we had a large continues array
            int* m_positions;
        };
    }
}

#endif //FASTMATMUL_CONDENSEDMATRIX_H
