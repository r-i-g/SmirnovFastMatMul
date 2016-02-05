//
// Created by rong on 8/18/15.
//

#include "SmirnovAlgorithm_363.h"
using SmirnovFastMulBU::Computation::AlgorithmEntrance;

void alpha_add0_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] +1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void alpha_add1_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add2_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] +1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] -0.125 * data12[i * stride12 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j];
        }
    }
}
void alpha_add3_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] +1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] -1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void alpha_add4_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] -1 * data7[i * stride7 + j] -1 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add5_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] -1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] +1 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add6_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data7[i * stride7 + j] +1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] +0.125 * data12[i * stride12 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j];
        }
    }
}
void alpha_add7_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +1 * data13[i * stride13 + j] -1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void alpha_add8_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] -1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] -0.125 * data12[i * stride12 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j];
        }
    }
}
void alpha_add9_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] +1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -1 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add10_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data3[i * stride3 + j] +0.125 * data4[i * stride4 + j] -1 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add11_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] -0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data16[i * stride16 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add12_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] -1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +1 * data13[i * stride13 + j] +1 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void alpha_add13_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] +0.125 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data7[i * stride7 + j] +1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] -0.125 * data12[i * stride12 + j] -1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j];
        }
    }
}
void alpha_add14_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data3[i * stride3 + j] +0.125 * data4[i * stride4 + j] +1 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add15_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data16[i * stride16 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add16_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -0.125 * data4[i * stride4 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] +1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add17_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data10[i * stride10 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add18_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +0.125 * data4[i * stride4 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] -1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add19_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data10[i * stride10 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add20_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -0.125 * data4[i * stride4 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] +1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add21_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -0.125 * data4[i * stride4 + j] -0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] +1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add22_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add23_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data9[i * stride9 + j] -1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add24_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add25_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data10[i * stride10 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add26_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add27_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add28_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j] +1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add29_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] -0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add30_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data9[i * stride9 + j] +1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] -0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add31_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data9[i * stride9 + j] -1 * data11[i * stride11 + j] +0.125 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] +0.125 * data16[i * stride16 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add32_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add33_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +0.125 * data4[i * stride4 + j] +0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] -1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add34_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add35_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -0.125 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data10[i * stride10 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add36_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +0.125 * data4[i * stride4 + j] +0.125 * data6[i * stride6 + j] -1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add37_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +0.125 * data4[i * stride4 + j] -0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] +0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void alpha_add38_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -0.125 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j];
        }
    }
}
void alpha_add39_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +0.125 * data0[i * stride0 + j] +0.125 * data4[i * stride4 + j] -0.125 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] -0.125 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data15[i * stride15 + j] -1 * data17[i * stride17 + j];
        }
    }
}
void beta_add0_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add1_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add2_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add3_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] -0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add4_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add5_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add6_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add7_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] +0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] -0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add8_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] -0.125 * data10[i * stride10 + j] -1 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add9_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] -0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add10_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add11_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] +0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] -0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add12_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add13_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] +0.125 * data10[i * stride10 + j] +1 * data14[i * stride14 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add14_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add15_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] +0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add16_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add17_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] -0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add18_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add19_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add20_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add21_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] -0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add22_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add23_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add24_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add25_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] -0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add26_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add27_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add28_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add29_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add30_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] +0.125 * data11[i * stride11 + j] -1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add31_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride2 = sub_matrices.at(2).get_stride();
    const double* data2 = sub_matrices.at(2).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data2[i * stride2 + j] -0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data14[i * stride14 + j] +0.125 * data15[i * stride15 + j] -0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add32_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add33_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] +0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add34_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] +0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add35_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -0.125 * data4[i * stride4 + j] -0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] -0.125 * data8[i * stride8 + j] -0.125 * data10[i * stride10 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add36_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] -0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add37_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void beta_add38_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride4 = sub_matrices.at(4).get_stride();
    const double* data4 = sub_matrices.at(4).get_data();
    const int stride5 = sub_matrices.at(5).get_stride();
    const double* data5 = sub_matrices.at(5).get_data();
    const int stride7 = sub_matrices.at(7).get_stride();
    const double* data7 = sub_matrices.at(7).get_data();
    const int stride8 = sub_matrices.at(8).get_stride();
    const double* data8 = sub_matrices.at(8).get_data();
    const int stride10 = sub_matrices.at(10).get_stride();
    const double* data10 = sub_matrices.at(10).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride16 = sub_matrices.at(16).get_stride();
    const double* data16 = sub_matrices.at(16).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +0.125 * data4[i * stride4 + j] +0.125 * data5[i * stride5 + j] +0.125 * data7[i * stride7 + j] +0.125 * data8[i * stride8 + j] -0.125 * data10[i * stride10 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +0.125 * data16[i * stride16 + j];
        }
    }
}
void beta_add39_363(std::vector<Matrix>& sub_matrices, Matrix& out){
    const int stride0 = sub_matrices.at(0).get_stride();
    const double* data0 = sub_matrices.at(0).get_data();
    const int stride1 = sub_matrices.at(1).get_stride();
    const double* data1 = sub_matrices.at(1).get_data();
    const int stride3 = sub_matrices.at(3).get_stride();
    const double* data3 = sub_matrices.at(3).get_data();
    const int stride6 = sub_matrices.at(6).get_stride();
    const double* data6 = sub_matrices.at(6).get_data();
    const int stride9 = sub_matrices.at(9).get_stride();
    const double* data9 = sub_matrices.at(9).get_data();
    const int stride11 = sub_matrices.at(11).get_stride();
    const double* data11 = sub_matrices.at(11).get_data();
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +0.125 * data3[i * stride3 + j] +0.125 * data6[i * stride6 + j] -0.125 * data9[i * stride9 + j] -0.125 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +0.125 * data15[i * stride15 + j] +0.125 * data17[i * stride17 + j];
        }
    }
}
void gamma_add0_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride17 = sub_matrices.at(17).get_stride();
    const double* data17 = sub_matrices.at(17).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] -1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +1 * data17[i * stride17 + j] -1 * data20[i * stride20 + j] -1 * data21[i * stride21 + j] -1 * data24[i * stride24 + j] +1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] +1 * data31[i * stride31 + j] +1 * data32[i * stride32 + j] +1 * data33[i * stride33 + j] +1 * data35[i * stride35 + j] -1 * data39[i * stride39 + j];
        }
    }
}
void gamma_add1_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data17[i * stride17 + j] +1 * data19[i * stride19 + j] +1 * data24[i * stride24 + j] -1 * data25[i * stride25 + j] -1 * data32[i * stride32 + j] +1 * data34[i * stride34 + j] +1 * data35[i * stride35 + j] -1 * data38[i * stride38 + j];
        }
    }
}
void gamma_add2_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] -1 * data15[i * stride15 + j] +1 * data19[i * stride19 + j] +1 * data20[i * stride20 + j] -1 * data21[i * stride21 + j] +1 * data25[i * stride25 + j] +1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] -1 * data28[i * stride28 + j] -1 * data31[i * stride31 + j] -1 * data33[i * stride33 + j] -1 * data34[i * stride34 + j] -1 * data38[i * stride38 + j] -1 * data39[i * stride39 + j];
        }
    }
}
void gamma_add3_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data16[i * stride16 + j] -1 * data18[i * stride18 + j] +1 * data20[i * stride20 + j] -1 * data21[i * stride21 + j] +1 * data33[i * stride33 + j] -1 * data36[i * stride36 + j] -1 * data37[i * stride37 + j] +1 * data39[i * stride39 + j];
        }
    }
}
void gamma_add4_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] +1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] -1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] +1 * data18[i * stride18 + j] +1 * data19[i * stride19 + j] -1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] +1 * data25[i * stride25 + j] +1 * data29[i * stride29 + j] -1 * data30[i * stride30 + j] +1 * data34[i * stride34 + j] +1 * data36[i * stride36 + j] -1 * data37[i * stride37 + j] +1 * data38[i * stride38 + j];
        }
    }
}
void gamma_add5_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride12 = sub_matrices.at(12).get_stride();
    const double* data12 = sub_matrices.at(12).get_data();
    const int stride13 = sub_matrices.at(13).get_stride();
    const double* data13 = sub_matrices.at(13).get_data();
    const int stride14 = sub_matrices.at(14).get_stride();
    const double* data14 = sub_matrices.at(14).get_data();
    const int stride15 = sub_matrices.at(15).get_stride();
    const double* data15 = sub_matrices.at(15).get_data();
    const int stride19 = sub_matrices.at(19).get_stride();
    const double* data19 = sub_matrices.at(19).get_data();
    const int stride20 = sub_matrices.at(20).get_stride();
    const double* data20 = sub_matrices.at(20).get_data();
    const int stride21 = sub_matrices.at(21).get_stride();
    const double* data21 = sub_matrices.at(21).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride25 = sub_matrices.at(25).get_stride();
    const double* data25 = sub_matrices.at(25).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride33 = sub_matrices.at(33).get_stride();
    const double* data33 = sub_matrices.at(33).get_data();
    const int stride34 = sub_matrices.at(34).get_stride();
    const double* data34 = sub_matrices.at(34).get_data();
    const int stride38 = sub_matrices.at(38).get_stride();
    const double* data38 = sub_matrices.at(38).get_data();
    const int stride39 = sub_matrices.at(39).get_stride();
    const double* data39 = sub_matrices.at(39).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] -1 * data2[i * stride2 + j] -1 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] -1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] +1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] +1 * data19[i * stride19 + j] -1 * data20[i * stride20 + j] -1 * data21[i * stride21 + j] +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data25[i * stride25 + j] -1 * data29[i * stride29 + j] -1 * data30[i * stride30 + j] -1 * data33[i * stride33 + j] -1 * data34[i * stride34 + j] +1 * data38[i * stride38 + j] +1 * data39[i * stride39 + j];
        }
    }
}
void gamma_add6_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride26 = sub_matrices.at(26).get_stride();
    const double* data26 = sub_matrices.at(26).get_data();
    const int stride27 = sub_matrices.at(27).get_stride();
    const double* data27 = sub_matrices.at(27).get_data();
    const int stride28 = sub_matrices.at(28).get_stride();
    const double* data28 = sub_matrices.at(28).get_data();
    const int stride31 = sub_matrices.at(31).get_stride();
    const double* data31 = sub_matrices.at(31).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  -1 * data0[i * stride0 + j] -1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] -1 * data5[i * stride5 + j] -1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] +1 * data8[i * stride8 + j] +1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] +1 * data11[i * stride11 + j] -1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] -1 * data17[i * stride17 + j] -1 * data18[i * stride18 + j] +1 * data24[i * stride24 + j] -1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] +1 * data28[i * stride28 + j] -1 * data31[i * stride31 + j] +1 * data32[i * stride32 + j] +1 * data35[i * stride35 + j] +1 * data36[i * stride36 + j] +1 * data37[i * stride37 + j];
        }
    }
}
void gamma_add7_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride18 = sub_matrices.at(18).get_stride();
    const double* data18 = sub_matrices.at(18).get_data();
    const int stride22 = sub_matrices.at(22).get_stride();
    const double* data22 = sub_matrices.at(22).get_data();
    const int stride23 = sub_matrices.at(23).get_stride();
    const double* data23 = sub_matrices.at(23).get_data();
    const int stride24 = sub_matrices.at(24).get_stride();
    const double* data24 = sub_matrices.at(24).get_data();
    const int stride29 = sub_matrices.at(29).get_stride();
    const double* data29 = sub_matrices.at(29).get_data();
    const int stride30 = sub_matrices.at(30).get_stride();
    const double* data30 = sub_matrices.at(30).get_data();
    const int stride32 = sub_matrices.at(32).get_stride();
    const double* data32 = sub_matrices.at(32).get_data();
    const int stride35 = sub_matrices.at(35).get_stride();
    const double* data35 = sub_matrices.at(35).get_data();
    const int stride36 = sub_matrices.at(36).get_stride();
    const double* data36 = sub_matrices.at(36).get_data();
    const int stride37 = sub_matrices.at(37).get_stride();
    const double* data37 = sub_matrices.at(37).get_data();
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data0[i * stride0 + j] +1 * data1[i * stride1 + j] +1 * data2[i * stride2 + j] +1 * data3[i * stride3 + j] -1 * data4[i * stride4 + j] +1 * data5[i * stride5 + j] +1 * data6[i * stride6 + j] +1 * data7[i * stride7 + j] -1 * data8[i * stride8 + j] -1 * data9[i * stride9 + j] +1 * data10[i * stride10 + j] -1 * data11[i * stride11 + j] +1 * data12[i * stride12 + j] -1 * data13[i * stride13 + j] +1 * data14[i * stride14 + j] +1 * data15[i * stride15 + j] -1 * data16[i * stride16 + j] -1 * data17[i * stride17 + j] +1 * data18[i * stride18 + j] -1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data24[i * stride24 + j] -1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] -1 * data32[i * stride32 + j] +1 * data35[i * stride35 + j] -1 * data36[i * stride36 + j] +1 * data37[i * stride37 + j];
        }
    }
}
void gamma_add8_363(std::vector<Matrix>& sub_matrices, Matrix& out){
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
    const int stride_out = out.get_stride();
    double* data_out = out.get_data();
    for (int i = 0; i < out.get_row_dimension(); i++) {
        for (int j = 0; j < out.get_col_dimension(); j++) {
            data_out[i * stride_out + j] =  +1 * data22[i * stride22 + j] -1 * data23[i * stride23 + j] -1 * data26[i * stride26 + j] -1 * data27[i * stride27 + j] -1 * data28[i * stride28 + j] +1 * data29[i * stride29 + j] +1 * data30[i * stride30 + j] +1 * data31[i * stride31 + j];
        }
    }
}
SmirnovFastMulBU::Computation::SmirnovAlgorithm_363::SmirnovAlgorithm_363() : SmirnovFastMulBU::Computation::SmirnovAlgorithm(3,6,3){
    add_alpha_entrance((AlgorithmEntrance)&alpha_add0_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add0_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add1_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add1_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add2_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add2_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add3_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add3_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add4_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add4_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add5_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add5_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add6_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add6_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add7_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add7_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add8_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add8_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add9_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add9_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add10_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add10_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add11_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add11_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add12_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add12_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add13_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add13_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add14_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add14_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add15_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add15_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add16_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add16_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add17_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add17_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add18_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add18_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add19_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add19_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add20_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add20_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add21_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add21_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add22_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add22_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add23_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add23_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add24_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add24_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add25_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add25_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add26_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add26_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add27_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add27_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add28_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add28_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add29_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add29_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add30_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add30_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add31_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add31_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add32_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add32_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add33_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add33_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add34_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add34_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add35_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add35_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add36_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add36_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add37_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add37_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add38_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add38_363);
    add_alpha_entrance((AlgorithmEntrance)&alpha_add39_363);
    add_beta_entrance((AlgorithmEntrance)&beta_add39_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add0_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add1_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add2_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add3_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add4_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add5_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add6_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add7_363);
    add_gamma_entrance((AlgorithmEntrance)&gamma_add8_363);
}
