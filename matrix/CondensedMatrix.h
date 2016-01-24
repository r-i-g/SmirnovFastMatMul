//
// Created by rong on 1/1/16.
//

#ifndef FASTMATMUL_CONDENSEDMATRIX_H
#define FASTMATMUL_CONDENSEDMATRIX_H

#include "Matrix.h"
#include <iostream>

using std::cout;
using std::endl;

namespace SmirnovFastMul {
    using Communication::ArrayType;
    namespace Computation {
        /**
         * This matrix is a representation of a sparse matrix. The values stored in the matrix are apart by a constant
         * factor.
         */
        class CondensedMatrix : public Matrix {
        public:

            CondensedMatrix(int containing_n, int containing_m, int condense_factor, int* positions, Matrix&& matrix);
            // deprecated
            CondensedMatrix(int containing_n, int containing_m, int n, int m);
            // deprecated
            //CondensedMatrix(int containing_n, int containing_m, int n=0);
            CondensedMatrix(int containing_n, int containing_m, int condense_factor);

            CondensedMatrix(const CondensedMatrix& that) {
                // TODO implement
                cout << "in  copy ctor" << endl;
            }

            // move constructor
            CondensedMatrix(CondensedMatrix&& that);
            CondensedMatrix& operator=(CondensedMatrix&& that) {
                swap(*this, that);
                return *this;
            }

            virtual ~CondensedMatrix();

            /**
             * Inserts the matrix_value at positions i,j of the represented matrix
             */
            // deprecated
            void condense(double matrix_value, int condense_factor, int i, int j);

            /**
             * Creates a condensed sub matrix representation of the specified sub matrix
             * @num_rows - Of the contained matrix
             * @num_col - Of the contained matrix
             * @start_row - ""
             * @start_col - ""
             */
            CondensedMatrix sub_matrix(int num_rows, int num_col, int start_row, int start_col);

            bool is_contained(int i, int j);

            /**
             * Merging two matrices together while keeping the sparse representation.
             * The order of the merge is determined by the inserted positions in the matrices
             */
            void merge(CondensedMatrix& mat);

            // Gets the contained matrix row dimension
            int get_row_dimension() const;

            // Gets the contained matrix column dimension
            int get_col_dimension() const;

            // Returns the linear positions of the inserted values. The representation is row major.
            int* get_positions() const;

            int* get_positions(int i, int j) const;

            int position_len() const;

            // Sets the position array containing the elements represented by the class
            void set_positions();

            int get_condense_factor();

            // The indices are 0 based
            // This function is used as a view to the elements represnted
            // TODO need to remove this operators, theres code elsewhere that treats the indices as if they were real
            //const double& operator()(int i, int j) const;
            //double& operator()(int i, int j);

            friend std::ostream& operator<<(std::ostream& os, const CondensedMatrix& mat) {
                const Matrix& matrix = dynamic_cast<const Matrix&>(mat);
                for (int i = 0; i < matrix.get_row_dimension(); ++i) {
                    for (int j = 0; j < matrix.get_col_dimension(); ++j) {
                        os << *(mat.get_positions(i, j)) << " ";
                    }
                }
                os << endl;

                os << dynamic_cast<const Matrix&>(mat) << endl;

            }

            friend void swap(CondensedMatrix& first, CondensedMatrix& second) {
                using std::swap;
                swap(static_cast<Matrix&>(first), static_cast<Matrix&>(second));
                swap(first.m_containing_n, second.m_containing_n);
                swap(first.m_containing_m, second.m_containing_m);
                swap(first.m_positions, second.m_positions);
            }

        protected:
            // Initializes the position array to the value specified
            void init_positions(int value);
            int* sub_position(int num_rows, int num_col, int start_row, int start_col);

            int m_condense_factor;
            int m_containing_n;
            int m_containing_m;

            // Holds the positions of the entries as if we had a large continues array
            int* m_positions;
        };
    }
}

#endif //FASTMATMUL_CONDENSEDMATRIX_H
