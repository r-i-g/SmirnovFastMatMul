#ifdef FASTMATMUL_SMIRNOVALGORITHM_363_H
struct alpha_add0_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add1_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add2_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add3_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add4_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add5_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add6_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add7_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add8_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add9_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add10_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add11_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add12_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add13_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add14_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add15_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add16_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add17_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add18_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add19_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add20_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add21_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add22_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add23_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add24_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add25_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add26_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add27_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add28_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add29_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add30_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add31_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add32_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add33_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add34_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add35_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add36_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add37_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add38_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct alpha_add39_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add0_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add1_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add2_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add3_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add4_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add5_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add6_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add7_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add8_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add9_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add10_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add11_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add12_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add13_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add14_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add15_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add16_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add17_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add18_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add19_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add20_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add21_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add22_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add23_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add24_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add25_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add26_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add27_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add28_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add29_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add30_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add31_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add32_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add33_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add34_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add35_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add36_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add37_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add38_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct beta_add39_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add0_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add1_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add2_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add3_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add4_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add5_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add6_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add7_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
struct gamma_add8_363 : public AlgorithmEntrance {
    void operator()(vector<PositionalMatrix>& sub_matrices, PositionalMatrix& out) {
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
};
vector<std::shared_ptr<AlgorithmEntrance>> SmirnovAlgorithm_363::get_alpha_alg() {
    vector<std::shared_ptr<AlgorithmEntrance>> alpha_algorithm;
    alpha_algorithm.push_back(std::make_shared<alpha_add0_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add1_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add2_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add3_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add4_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add5_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add6_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add7_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add8_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add9_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add10_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add11_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add12_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add13_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add14_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add15_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add16_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add17_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add18_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add19_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add20_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add21_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add22_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add23_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add24_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add25_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add26_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add27_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add28_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add29_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add30_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add31_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add32_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add33_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add34_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add35_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add36_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add37_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add38_363>() );
    alpha_algorithm.push_back(std::make_shared<alpha_add39_363>() );
    return alpha_algorithm;
}
vector<std::shared_ptr<AlgorithmEntrance>> SmirnovAlgorithm_363::get_beta_alg() {
    vector<std::shared_ptr<AlgorithmEntrance>> beta_algorithm;
    beta_algorithm.push_back(std::make_shared<beta_add0_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add1_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add2_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add3_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add4_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add5_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add6_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add7_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add8_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add9_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add10_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add11_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add12_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add13_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add14_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add15_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add16_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add17_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add18_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add19_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add20_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add21_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add22_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add23_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add24_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add25_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add26_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add27_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add28_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add29_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add30_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add31_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add32_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add33_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add34_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add35_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add36_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add37_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add38_363>() );
    beta_algorithm.push_back(std::make_shared<beta_add39_363>() );
    return beta_algorithm;
}
vector<std::shared_ptr<AlgorithmEntrance>> SmirnovAlgorithm_363::get_gamma_alg() {
    vector<std::shared_ptr<AlgorithmEntrance>> gamma_algorithm;
    gamma_algorithm.push_back(std::make_shared<gamma_add0_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add1_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add2_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add3_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add4_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add5_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add6_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add7_363>() );
    gamma_algorithm.push_back(std::make_shared<gamma_add8_363>() );
    return gamma_algorithm;
}


#endif //FASTMATMUL_SMIRNOVALGORITHM_363_H