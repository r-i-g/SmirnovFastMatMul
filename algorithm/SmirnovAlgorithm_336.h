//
// Created by rong on 8/18/15.
//

#ifndef FASTMATMUL_SMIRNOVALGORITHM_336_H
#define FASTMATMUL_SMIRNOVALGORITHM_336_H

#include "SmirnovAlgorithm.h"

namespace SmirnovFastMul {
    namespace Computation {

        class SmirnovAlgorithm_336 : public SmirnovAlgorithm {

        public:
            SmirnovAlgorithm_336(int A_row_dim, int A_col_dim, int B_col_dim) : SmirnovAlgorithm(A_row_dim, A_col_dim,
                                                                                                 B_col_dim) { }

        protected:

        private:
            void alpha_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add18(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add19(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add20(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add21(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add22(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add23(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add24(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add25(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add26(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add27(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add28(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add29(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add30(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add31(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add32(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add33(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add34(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add35(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add36(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add37(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add38(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void alpha_add39(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add18(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add19(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add20(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add21(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add22(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add23(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add24(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add25(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add26(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add27(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add28(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add29(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add30(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add31(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add32(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add33(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add34(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add35(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add36(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add37(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add38(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void beta_add39(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void gamma_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);

        };
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_336_H
