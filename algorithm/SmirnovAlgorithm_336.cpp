//
// Created by rong on 8/18/15.
//

#include "SmirnovAlgorithm_336.h"
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add0(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add1(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add2(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add3(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add4(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add5(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add6(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add7(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add8(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add9(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add10(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add11(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add12(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add13(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add14(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add15(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add16(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add17(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add18(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add19(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add20(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add21(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] -1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add22(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add23(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add24(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add25(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add26(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data6[i * stride6 + j] -1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add27(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] -1 * data6[i * stride6 + j] -1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add28(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data6[i * stride6 + j] -1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add29(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add30(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add31(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] -1 * data6[i * stride6 + j] +1 * data8[i * stride8 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add32(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add33(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add34(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add35(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add36(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add37(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add38(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add39(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +1 * data5[i * stride5 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add0(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data1[i * stride1 + j] +1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] +0.125 * data14[i * stride14 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add1(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] +0.125 * data7[i * stride7 + j] +1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] -0.125 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add2(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data2[i * stride2 + j] -0.125 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data9[i * stride9 + j] -0.125 * data13[i * stride13 + j] +1 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add3(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data1[i * stride1 + j] -1 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -0.125 * data14[i * stride14 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add4(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] +0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -0.125 * data7[i * stride7 + j] +1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add5(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -0.125 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +1 * data6[i * stride6 + j] +0.125 * data8[i * stride8 + j] +0.125 * data11[i * stride11 + j] -0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] -1 * data16[i * stride16 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add6(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data2[i * stride2 + j] +0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -0.125 * data7[i * stride7 + j] +0.125 * data9[i * stride9 + j] -0.125 * data13[i * stride13 + j] +1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add7(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data1[i * stride1 + j] -1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] -0.125 * data14[i * stride14 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add8(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -0.125 * data2[i * stride2 + j] -0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] -0.125 * data9[i * stride9 + j] -0.125 * data13[i * stride13 + j] -1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add9(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] +1 * data6[i * stride6 + j] -0.125 * data8[i * stride8 + j] -0.125 * data11[i * stride11 + j] -0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add10(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] -1 * data6[i * stride6 + j] +0.125 * data8[i * stride8 + j] -0.125 * data11[i * stride11 + j] -0.125 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add11(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +0.125 * data7[i * stride7 + j] -1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add12(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data1[i * stride1 + j] -1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -0.125 * data14[i * stride14 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add13(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +0.125 * data2[i * stride2 + j] -0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data9[i * stride9 + j] +0.125 * data13[i * stride13 + j] +1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add14(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +1 * data6[i * stride6 + j] +0.125 * data8[i * stride8 + j] -0.125 * data11[i * stride11 + j] +0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add15(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +0.125 * data7[i * stride7 + j] +1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add16(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data10[i * stride10 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add17(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add18(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] +0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add19(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data4[i * stride4 + j] +1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add20(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data10[i * stride10 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add21(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -0.125 * data1[i * stride1 + j] -0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add22(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add23(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] -0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add24(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add25(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data4[i * stride4 + j] +1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add26(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add27(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +1 * data12[i * stride12 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add28(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add29(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add30(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +1 * data12[i * stride12 + j] -0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add31(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data3[i * stride3 + j] +0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +1 * data12[i * stride12 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add32(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data4[i * stride4 + j] +1 * data6[i * stride6 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add33(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] +0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add34(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add35(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] -0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] -0.125 * data11[i * stride11 + j] -0.125 * data13[i * stride13 + j] -0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add36(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] -0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add37(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add38(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +0.125 * data11[i * stride11 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add39(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data10[i * stride10 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add0(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] +0.125 * data7[i * stride7 + j] -0.125 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] -0.125 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j] +0.125 * data18[i * stride18 + j] +0.125 * data19[i * stride19 + j] -0.125 * data20[i * stride20 + j] -0.125 * data21[i * stride21 + j] -0.125 * data24[i * stride24 + j] -0.125 * data25[i * stride25 + j] -0.125 * data32[i * stride32 + j] +0.125 * data33[i * stride33 + j] -0.125 * data34[i * stride34 + j] -0.125 * data35[i * stride35 + j] +0.125 * data36[i * stride36 + j] +0.125 * data37[i * stride37 + j] +0.125 * data38[i * stride38 + j] +0.125 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add1(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data3[i * stride3 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] -1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] -1 * data14[i * stride14 + j] +1 * data17[i * stride17 + j] +1 * data19[i * stride19 + j] +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data24[i * stride24 + j] -1 * data25[i * stride25 + j] +1 * data26[i * stride26 + j] +1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] -1 * data31[i * stride31 + j] +1 * data32[i * stride32 + j] +1 * data34[i * stride34 + j] -1 * data35[i * stride35 + j] -1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add2(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +1 * data8[i * stride8 + j] -1 * data11[i * stride11 + j] -1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j] +1 * data19[i * stride19 + j] +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] +1 * data24[i * stride24 + j] -1 * data25[i * stride25 + j] +1 * data26[i * stride26 + j] +1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] -1 * data31[i * stride31 + j] -1 * data32[i * stride32 + j] +1 * data34[i * stride34 + j] +1 * data35[i * stride35 + j] -1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add3(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j] +1 * data19[i * stride19 + j] +1 * data24[i * stride24 + j] +1 * data25[i * stride25 + j] -1 * data32[i * stride32 + j] +1 * data34[i * stride34 + j] -1 * data35[i * stride35 + j] +1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add4(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] -0.125 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] -0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j] +0.125 * data18[i * stride18 + j] -0.125 * data19[i * stride19 + j] -0.125 * data20[i * stride20 + j] -0.125 * data21[i * stride21 + j] -0.125 * data24[i * stride24 + j] +0.125 * data25[i * stride25 + j] -0.125 * data32[i * stride32 + j] +0.125 * data33[i * stride33 + j] +0.125 * data34[i * stride34 + j] -0.125 * data35[i * stride35 + j] +0.125 * data36[i * stride36 + j] +0.125 * data37[i * stride37 + j] -0.125 * data38[i * stride38 + j] +0.125 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add5(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data17[i * stride17 + j] -1 * data19[i * stride19 + j] +1 * data24[i * stride24 + j] -1 * data25[i * stride25 + j] -1 * data32[i * stride32 + j] -1 * data34[i * stride34 + j] -1 * data35[i * stride35 + j] -1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add6(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data4[i * stride4 + j] -0.125 * data7[i * stride7 + j] -0.125 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] +0.125 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j] +0.125 * data17[i * stride17 + j] +0.125 * data18[i * stride18 + j] +0.125 * data19[i * stride19 + j] +0.125 * data20[i * stride20 + j] -0.125 * data21[i * stride21 + j] -0.125 * data24[i * stride24 + j] +0.125 * data25[i * stride25 + j] -0.125 * data32[i * stride32 + j] +0.125 * data33[i * stride33 + j] -0.125 * data34[i * stride34 + j] +0.125 * data35[i * stride35 + j] +0.125 * data36[i * stride36 + j] -0.125 * data37[i * stride37 + j] -0.125 * data38[i * stride38 + j] -0.125 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add7(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] +1 * data8[i * stride8 + j] +1 * data11[i * stride11 + j] +1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] +1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] +1 * data21[i * stride21 + j] +1 * data33[i * stride33 + j] -1 * data36[i * stride36 + j] +1 * data37[i * stride37 + j] +1 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add8(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data3[i * stride3 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] -1 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] +1 * data14[i * stride14 + j] -1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] +1 * data21[i * stride21 + j] +1 * data33[i * stride33 + j] +1 * data36[i * stride36 + j] -1 * data37[i * stride37 + j] +1 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add9(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] -1 * data20[i * stride20 + j] +1 * data21[i * stride21 + j] -1 * data22[i * stride22 + j] +1 * data23[i * stride23 + j] -1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] -1 * data28[i * stride28 + j] -1 * data29[i * stride29 + j] -1 * data30[i * stride30 + j] +1 * data31[i * stride31 + j] +1 * data33[i * stride33 + j] +1 * data36[i * stride36 + j] +1 * data37[i * stride37 + j] -1 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add10(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] +0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] +0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j] -0.125 * data17[i * stride17 + j] -0.125 * data18[i * stride18 + j] -0.125 * data19[i * stride19 + j] +0.125 * data20[i * stride20 + j] -0.125 * data21[i * stride21 + j] +0.125 * data24[i * stride24 + j] -0.125 * data25[i * stride25 + j] +0.125 * data32[i * stride32 + j] +0.125 * data33[i * stride33 + j] +0.125 * data34[i * stride34 + j] -0.125 * data35[i * stride35 + j] -0.125 * data36[i * stride36 + j] +0.125 * data37[i * stride37 + j] +0.125 * data38[i * stride38 + j] -0.125 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add11(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] -1 * data21[i * stride21 + j] +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] +1 * data26[i * stride26 + j] +1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] -1 * data31[i * stride31 + j] -1 * data33[i * stride33 + j] +1 * data36[i * stride36 + j] +1 * data37[i * stride37 + j] +1 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add12(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data2[i * stride2 + j] +0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] -0.125 * data13[i * stride13 + j] +0.125 * data14[i * stride14 + j] +0.125 * data22[i * stride22 + j] +0.125 * data23[i * stride23 + j] +0.125 * data26[i * stride26 + j] -0.125 * data27[i * stride27 + j] +0.125 * data28[i * stride28 + j] -0.125 * data29[i * stride29 + j] +0.125 * data30[i * stride30 + j] +0.125 * data31[i * stride31 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add13(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data3[i * stride3 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] +1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] +1 * data14[i * stride14 + j] -1 * data17[i * stride17 + j] -1 * data19[i * stride19 + j] +1 * data22[i * stride22 + j] +1 * data23[i * stride23 + j] +1 * data24[i * stride24 + j] -1 * data25[i * stride25 + j] -1 * data26[i * stride26 + j] +1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] -1 * data30[i * stride30 + j] +1 * data31[i * stride31 + j] +1 * data32[i * stride32 + j] +1 * data34[i * stride34 + j] -1 * data35[i * stride35 + j] +1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add14(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data4[i * stride4 + j] -1 * data6[i * stride6 + j] -1 * data8[i * stride8 + j] -1 * data11[i * stride11 + j] -1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j] +1 * data19[i * stride19 + j] -1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data24[i * stride24 + j] +1 * data25[i * stride25 + j] -1 * data26[i * stride26 + j] +1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] -1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] +1 * data31[i * stride31 + j] -1 * data32[i * stride32 + j] -1 * data34[i * stride34 + j] +1 * data35[i * stride35 + j] -1 * data38[i * stride38 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add15(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] +1 * data21[i * stride21 + j] -1 * data22[i * stride22 + j] +1 * data23[i * stride23 + j] -1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] -1 * data31[i * stride31 + j] -1 * data33[i * stride33 + j] -1 * data36[i * stride36 + j] -1 * data37[i * stride37 + j] -1 * data39[i * stride39 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add16(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +0.125 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -0.125 * data7[i * stride7 + j] +0.125 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +0.125 * data15[i * stride15 + j] -0.125 * data22[i * stride22 + j] -0.125 * data23[i * stride23 + j] +0.125 * data26[i * stride26 + j] -0.125 * data27[i * stride27 + j] +0.125 * data28[i * stride28 + j] +0.125 * data29[i * stride29 + j] -0.125 * data30[i * stride30 + j] +0.125 * data31[i * stride31 + j];
        }
    }
}
void SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add17(std::vector<Matrix>& sub_matrices, SmirnovFastMul::Computation::MatrixPtr& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out->get_stride();
    double* data_out = out->get_data();
    for (int i = 0; i < out->get_row_dimension(); i++) {
        for (int j = 0; j < out->get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] +1 * data21[i * stride21 + j] +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] -1 * data29[i * stride29 + j] -1 * data30[i * stride30 + j] -1 * data31[i * stride31 + j] -1 * data33[i * stride33 + j] -1 * data36[i * stride36 + j] -1 * data37[i * stride37 + j] -1 * data39[i * stride39 + j];
        }
    }
}

