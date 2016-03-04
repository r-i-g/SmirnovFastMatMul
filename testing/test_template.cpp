//
// Created by rong on 1/21/16.
//

#include "../matrix/Matrix.h"
#include "../matrix/CondensedMatrix.h"
#include "../distribution/Distribution.h"
//#include "../communication/CommunicationHandler.h"
#include <iostream>

#include "../algorithm/SmirnovAlgorithm_336.h"
#include "../algorithm/SmirnovAlgorithm_363.h"
#include "../algorithm/SmirnovAlgorithm_633.h"
#include "../algorithm/SmirnovAlgorithm.h"

#include "../algorithm/MultiplyMatrices.h"

#include "../algorithm_backup/SmirnovAlgorithm.h"
#include "../algorithm_backup/SmirnovAlgorithm_336.h"
#include "../algorithm_backup/SmirnovAlgorithm_363.h"

using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::CondensedMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Computation::SmirnovAlgorithm;
using SmirnovFastMul::Computation::SmirnovAlgorithm_336;
using SmirnovFastMul::Computation::SmirnovAlgorithm_363;
using SmirnovFastMul::Computation::SmirnovAlgorithm_633;
using SmirnovFastMul::Computation::MultiplyMatrices;

/******/
/*


void test_template_sub_matrices() {
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa1;
    auto sub_matrices = sa1.create_sub_matrices(3,3,cm);
    for (int i = 0; i < 3; ++i) {
        cout << sub_matrices[i] << endl;
    }
    // Excpetion because of a copy constructor
    for(auto matrix: sub_matrices) {
        cout << matrix << endl;
    }
}

void test_submatrix() {
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    CondensedMatrix cm2 = cm.sub_matrix(2,2,0,0);
    cout << cm << endl;
    cout << cm2 << endl;
}

void test_template_algorithm_condensed() {
    // Creating a condensed matrix
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);

    SmirnovAlgorithm_336<Matrix> sa1;
    auto alpha1 = sa1.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha1[i] << endl;
    }

    cout << "condensed alphas" << endl;
    cout << "the condensed matrix" << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa2;
    auto alpha2 = sa2.calculate_alpha(cm);
    for (int i = 0; i < 3; ++i) {
        cout << alpha2[i] << endl;
    }

    Matrix matrix2(12);
    matrix2.init_range();

    auto alpha2 = sa1.calculate_alpha(matrix2);
    for (int i = 0; i < 3; ++i) {
        cout << alpha2[i] << endl;
    }
    cout << "test relative positions" << endl;
    DistributionHandler dh2(0,4,4);
    CondensedMatrix cm2 = dh2.condensed_distributed_matrix(matrix2,1);
    cout << cm2 << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa3;

    cout << __LINE__ << endl;
    auto&& alpha3 = sa3.calculate_alpha(cm2);
    for (int i = 0; i < 3; ++i) {
        cout << alpha3[i] << endl;
    }
}

void test_template_algorithm() {
    SmirnovAlgorithm_336<Matrix> sac;
    Matrix matrix(6);
    matrix.init_range();
    auto alpha = sac.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha[i] << endl;
    }

    SmirnovFastMulBU::Computation::SmirnovAlgorithm_336 alg;
    auto alpha2 = alg.calculate_alpha(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << alpha2[i] << endl;
    }

    SmirnovAlgorithm_363<Matrix> sac2;
    auto beta1 = sac2.calculate_beta(matrix);
    cout << "beta" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << beta1[i] << endl;
    }

    SmirnovFastMulBU::Computation::SmirnovAlgorithm_363 alg2;
    auto beta2 = alg2.calculate_beta(matrix);
    for (int i = 0; i < 3; ++i) {
        cout << beta2[i] << endl;
    }
    //SmirnovAlgorithm_633<Matrix> sac3;

    // Testing condensed algorithm
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa1;
    auto sub_matrices = sa1.calculate_alpha(cm);
    for(const auto& sub_matrix: sub_matrices) {
        cout << sub_matrix << endl;
    }
}

void test_template_sub_matrices() {
    Matrix matrix(6);
    matrix.init_range();

    DistributionHandler dh(0,4,4);
    CondensedMatrix cm = dh.condensed_distributed_matrix(matrix,1);
    cout << cm << endl;
    SmirnovAlgorithm_336<CondensedMatrix> sa1;
    auto sub_matrices = sa1.create_sub_matrices(3,3,cm);

    // Excpetion because of a copy constructor
    for(const auto& matrix: sub_matrices) {
        cout << matrix << endl;
    }
}

void test_template_sending() {
    Matrix matrix(6);
    matrix.init_range();
    SmirnovAlgorithm_336<CondensedMatrix> alg;
    CommunicationHandler<CondensedMatrix> comm_handler;

    if( comm_handler.get_rank() == 0) {
        SmirnovAlgorithm_336<Matrix> alg2;
        cout << alg2.calculate_alpha(matrix)[1] << endl;

        DistributionHandler dh1(0, 4, 4);
        CondensedMatrix a1 = dh1.condensed_distributed_matrix(matrix, 1);
        vector <CondensedMatrix> alpha1 = alg.calculate_alpha(a1);
        cout << alpha1[1] << endl;
        vector <CondensedMatrix> temp1;
        temp1.push_back(alpha1[1]);
        cout << temp1[0] << endl;
        comm_handler.send_receive(temp1, alpha1, 1, 1, 3);
        cout << temp1[0] << endl;
    } else if (comm_handler.get_rank() == 3){
        DistributionHandler dh2(3, 4, 4);
        CondensedMatrix a2 = dh2.condensed_distributed_matrix(matrix, 1);
        vector <CondensedMatrix> alpha2 = alg.calculate_alpha(a2);
        cout << alpha2[1] << endl;
        vector <CondensedMatrix> temp2;
        temp2.push_back(alpha2[1]);
        //cout << temp2[0] << endl;
        comm_handler.send_receive(temp2, alpha2, 1, 1, 0);
        cout << "from process 1 "<< temp2[0] << endl;
    }

    comm_handler.barrier();

}

void test_bfs() {
    Matrix a(54);
    Matrix b(54);
    Matrix c(54);
    Matrix test_result(54);

    // Initializing the matrices
    a.init(2);
    b.init(3);
    test_result.init(324);

    MultiplyMatrices<Matrix> alg;
    alg.bfs(a,b,c,2,1);
    //CommunicationHandler<Matrix> ch;
}

void test_template_multiplication() {

    Matrix a(54);
    Matrix b(54);
    Matrix c(54);
    Matrix test_result(54);

    // Initializing the matrices
    a.init(2);
    b.init(3);
    test_result.init(324);



    MultiplyMatrices<Matrix> alg;
    alg.dfs(a,b,c,2,0);

    cout << "test matrix" << endl;
    if(test_result != c) {
        cout << "error with dfs" << endl;
    } else {
        cout << "success with dfs" << endl;
    }

    cout << "test condensed" << endl;
    // TODO solve the issue with condensedmatrix in dfs
    MultiplyMatrices<CondensedMatrix> alg2;
    CondensedMatrix a2(54,54);
    CondensedMatrix b2(54,54);
    CondensedMatrix c2(54,54);

    a2.init(2);
    b2.init(3);

    alg2.dfs(a2,b2,c2,2,0);
    cout << c2 << endl;
    if(test_result != c2) {
        cout << "error with dfs" << endl;
    } else {
        cout << "success with dfs" << endl;
    }
}

void test_distribution() {

    CommunicationHandler<CondensedMatrix> comm_handler;
    DistributionHandler dh(comm_handler.get_rank(), 4, 2);
    MultiplyMatrices<CondensedMatrix> alg(dh);

    Matrix mat(6);
    mat.init_range();
    if(comm_handler.get_rank() == 0) {
        cout << mat << endl;
    }

    CondensedMatrix a = dh.condensed_distributed_matrix(mat,1);
    vector<CondensedMatrix> alpha = alg.test_distribution_alpha(a,2,0,20);
    int start_index = dh.sub_problem_start(2,20);


    if(comm_handler.get_rank() == 1) {
        SmirnovAlgorithm_336<Matrix> alg2;
        vector<Matrix> alpha2 = alg2.calculate_alpha(mat);
        for(int i = start_index, j=0; i < start_index + 3; j++, i++) {
            cout << "Printing the matrix" << endl;
            cout << alpha2[i] << endl;

            cout << "Printing the condensed matrix" << endl;
            cout <<  alpha[j] << endl;
        }
    }

}*/

void test_bfs() {
    CommunicationHandler<CondensedMatrix> comm_handler;
    DistributionHandler dh(comm_handler.get_rank(), 4, 2);
    MultiplyMatrices<CondensedMatrix> alg(dh);

    Matrix mat_a(18,36);
    mat_a.init_range();
    Matrix mat_b(36);
    mat_b.init_range();

    Matrix mat_c(18,36);
    CondensedMatrix a = dh.condensed_distributed_matrix(mat_a,1);
    CondensedMatrix b = dh.condensed_distributed_matrix(mat_b,1);
    CondensedMatrix c = dh.condensed_distributed_matrix(mat_c,1);

    if( comm_handler.get_rank() == 1) {
        cout << "a matrix " << endl;
        cout << a << endl;
        cout << "b matrix " << endl;
        cout << b << endl;
    }

    alg.bfs(a,b,c,2,20);
    if( comm_handler.get_rank() == 0) {
        //MultiplyMatrices<Matrix> alg2;
        //Matrix c2(18,36);
        //alg2.dfs(mat_a,mat_b,c2,2,0);

        //cout << "Regular multiplication is"<< endl;
        //cout <<std::fixed << c2 << endl;

        cout << "CAPS multiplication is" << endl;
        cout <<std::fixed << c << endl;
    }
    else if (comm_handler.get_rank() == 1) {
        cout << "CAPS multiplication is from rank 1" << endl;
        cout <<std::fixed << c << endl;
    }
    else if (comm_handler.get_rank() == 2) {
        cout << "CAPS multiplication is from rank 2" << endl;
        cout <<std::fixed << c << endl;
    }
}

 /*
void test_bfs_minimized() {
    CommunicationHandler<CondensedMatrix> comm_handler;
    DistributionHandler dh(comm_handler.get_rank(), 4, 2);
    MultiplyMatrices<CondensedMatrix> alg(dh);

    Matrix mat_a(6);
    mat_a.init_range();
    Matrix mat_b(6,12);
    mat_b.init_range();

    Matrix mat_c(6,12);
    CondensedMatrix a = dh.condensed_distributed_matrix(mat_a,1);
    CondensedMatrix b = dh.condensed_distributed_matrix(mat_b,1);
    CondensedMatrix c = dh.condensed_distributed_matrix(mat_c,1);

    if( comm_handler.get_rank() == 0) {
        cout << "a matrix " << endl;
        cout << a << endl;
        cout << "b matrix " << endl;
        cout << b << endl;
    }

    alg.bfs(a,b,c,1,20);
    if( comm_handler.get_rank() == 0) {
        //MultiplyMatrices<Matrix> alg2;
        //Matrix c2(18,36);
        //alg2.dfs(mat_a,mat_b,c2,2,0);

        //cout << "Regular multiplication is"<< endl;
        //cout <<std::fixed << c2 << endl;

        cout << "CAPS multiplication is" << endl;
        cout <<std::fixed << c << endl;
    }
    else if (comm_handler.get_rank() == 1) {
        cout << "CAPS multiplication is from rank 1" << endl;
        cout <<std::fixed << c << endl;
    }
}

 /*
void test_alpha() {
    CommunicationHandler<CondensedMatrix> comm_handler;
    DistributionHandler dh(comm_handler.get_rank(), 4, 2);
    SmirnovAlgorithm_336<CondensedMatrix> alg;

    Matrix mat_a(18,36);
    mat_a.init(2);
    Matrix mat_b(36);
    mat_b.init(3);

    //Matrix mat_c(18,36);
    CondensedMatrix a = dh.condensed_distributed_matrix(mat_a,1);
    CondensedMatrix b = dh.condensed_distributed_matrix(mat_b,1);

    auto sub_a = alg.create_sub_matrices(3,3,a);
    cout << a << endl;
    for (int i = 0; i < 5; ++i) {
        cout << sub_a[i] << endl;
    }

    //CondensedMatrix c = dh.condensed_distributed_matrix(mat_c,1);
    vector<CondensedMatrix> alpha = alg.calculate_alpha(a);
    vector<CondensedMatrix> beta = alg.calculate_beta(b);
    for (int i = 0; i < 5; ++i) {
        cout << alpha[i] << endl;
        cout << beta[i] << endl;
    }
}

void test_dfs() {
    MultiplyMatrices<Matrix> alg2;
    Matrix mat_a(9,18);
    mat_a.init_range();
    Matrix mat_b(18);
    mat_b.init_range();

    Matrix mat_c(9,18);
    //alg2.dfs(mat_a,mat_b,c2,2,0);
    //cout << c2 << endl;
    alg2.local_multiplication(mat_a,mat_b,mat_c);
    cout << std::fixed << mat_c << endl;
    alg2.dfs(mat_a, mat_b,mat_c,2,0);
    cout << std::fixed << mat_c << endl;

}*/

int main()
{
    //SmirnovAlgorithm_336<CondensedMatrix> sac;
    //SmirnovAlgorithm<CondensedMatrix>& sa = sac;

    //test_template_algorithm();
    //test_template_multiplication();
    //test_template_algorithm_condensed();
    //test_submatrix();
    //test_template_sub_matrices();
    //test_template_sending();
    //test_template_sub_matrices();
    //test_distribution();
    //test_bfs_minimized();
    //test_alpha();
    //test_dfs();
    test_bfs();
    return 0;
}
