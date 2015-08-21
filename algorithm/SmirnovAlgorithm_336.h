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
            void SmirnovAlgorithm_336::alpha_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add18(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add19(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add20(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add21(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add22(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add23(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add24(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add25(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add26(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add27(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add28(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add29(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add30(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add31(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add32(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add33(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add34(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add35(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add36(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add37(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add38(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::alpha_add39(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add18(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add19(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add20(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add21(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add22(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add23(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add24(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add25(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add26(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add27(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add28(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add29(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add30(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add31(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add32(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add33(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add34(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add35(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add36(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add37(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add38(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::beta_add39(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add0(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add1(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add2(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add3(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add4(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add5(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add6(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add7(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add8(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add9(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add10(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add11(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add12(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add13(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add14(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add15(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add16(std::vector<Matrix>& sub_matrices, MatrixPtr& out);
            void SmirnovAlgorithm_336::gamma_add17(std::vector<Matrix>& sub_matrices, MatrixPtr& out);

        };
    }
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_336_H
