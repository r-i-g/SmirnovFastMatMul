cmake_minimum_required(VERSION 3.2)
project(FastMatMul)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES testing/main.cpp testing/test_multiplication_363.cpp testing/test_dfs.cpp testing/test_distribution.cpp testing/test_bfs.cpp)
add_executable(FastMatMul ${SOURCE_FILES} communication/CommunicationHandler.cpp algorithm/SmirnovAlgorithm.cpp algorithm/SmirnovAlgorithm.h algorithm/MultiplyMatrices.cpp algorithm/MultiplyMatrices.h algorithm/SmirnovAlgorithm_336.cpp algorithm/SmirnovAlgorithm_336.h algorithm/SmirnovAlgorithm_363.cpp algorithm/SmirnovAlgorithm_363.h algorithm/SmirnovAlgorithm_633.cpp algorithm/SmirnovAlgorithm_633.h testing/test_multiplication.h testing/test_multiplication.cpp communication/Distribution.cpp communication/Distribution.h testing/test_smirnov_distribution.h testing/test_dist_smir.cpp matrix/CondensedMatrix.h matrix/CondensedMatrix.cpp matrix/CondensedMatrix.h testing/test_condesned.h testing/test_condensed.cpp algorithmTesting/AlgorithmEntrance.h testing/test_alg_entrance.h testing/test_alg_entrance.cpp algorithmTesting/AlgTestA.h algorithmTesting/SmirnovAlgorithmTempalte.h testing/test_template.h testing/test_template.cpp)