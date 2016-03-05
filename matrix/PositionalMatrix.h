//
// Created by rong on 1/1/16.
//

#ifndef FASTMATMUL_PositionalMatrix_H
#define FASTMATMUL_PositionalMatrix_H

#include "Matrix.h"
#include <iostream>

using std::cout;
using std::endl;

namespace SmirnovFastMul {

    namespace Computation {
        /**
         * This matrix holds only the data that is actually in the matrix and its coordinates inside the matrix
         */
        class PositionalMatrix : public Matrix {
        public:

            PositionalMatrix(int containing_n, int containing_m, int condense_factor, int* positions, Matrix&& matrix);
            // deprecated
            PositionalMatrix(int containing_n, int containing_m, int n, int m);
            // deprecated
            //PositionalMatrix(int containing_n, int containing_m, int n=0);
            PositionalMatrix(int containing_n, int containing_m, int condense_factor=1);
            PositionalMatrix() : PositionalMatrix(0,0,1){}

            // c-tor does deep copy
            PositionalMatrix(const PositionalMatrix& that);

            // move constructor
            PositionalMatrix(PositionalMatrix&& that);
            PositionalMatrix& operator=(PositionalMatrix&& that) {
                //cout << "In assignment operator in condensed matrix" << endl;
                swap(*this, that);
                return *this;
            }

            virtual ~PositionalMatrix();

            /**
             * Inserts the matrix_value at positions i,j of the represented matrix
             */
            // deprecated
            void condense(double matrix_value, int condense_factor, int i, int j);

            /**
             * Creates a condensed sub matrix representation of the specified sub matrix
             * @num_rows - Of the actual elements in the matrix
             * @num_col - Of the actual elements in the matrix
             * @start_row - ""
             * @start_col - ""
             */
            PositionalMatrix sub_matrix(int num_rows, int num_col, int start_row, int start_col);

            /**
             * Merging two matrices together while keeping the sparse representation.
             * The order of the merge is determined by the inserted positions in the matrices
             */
            void merge(const PositionalMatrix& mat);

            // Returns the linear positions of the inserted values. The representation is row major.
            int* get_positions() const;

            int get_positions(int i) const;

            int* get_positions(int i, int j) const;

            int position_len() const;

            // Sets the position array containing the elements represented by the class
            void set_positions();

            int get_condense_factor() const;

            int get_containing_row() const {
                return m_containing_n;
            }

            int get_containing_column() const {
                return m_containing_m;
            }

            PositionalMatrix empty_clone() const;

            friend std::ostream& operator<<(std::ostream& os, const PositionalMatrix& mat) {
                // TODO need to fix the position print to print a matrix instead of a row
                if (mat.get_condense_factor() != 1) {
                    const Matrix &matrix = dynamic_cast<const Matrix &>(mat);
                    for (int i = 0; i < matrix.get_row_dimension(); ++i) {
                        for (int j = 0; j < matrix.get_col_dimension(); ++j) {
                            os << *(mat.get_positions(i, j)) << " ";
                        }
                    }
                    os << endl;
                }

                os << dynamic_cast<const Matrix&>(mat) << endl;

            }

            friend void swap(PositionalMatrix& first, PositionalMatrix& second) {
                // cout << "In swap freind function in condensed matrix" << endl;
                using std::swap;
                swap(static_cast<Matrix&>(first), static_cast<Matrix&>(second));
                swap(first.m_condense_factor, second.m_condense_factor);
                swap(first.m_containing_n, second.m_containing_n);
                swap(first.m_containing_m, second.m_containing_m);
                swap(first.m_positions, second.m_positions);
            }

            friend PositionalMatrix& operator+= (PositionalMatrix& first, const PositionalMatrix& second) {

                first.merge(second);
                return first;
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

#endif //FASTMATMUL_PositionalMatrix_H
