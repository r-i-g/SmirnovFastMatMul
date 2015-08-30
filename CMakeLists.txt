cmake_minimum_required(VERSION 3.2)
project(FastMatMul)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp testing/test_move_ctor.cpp testing/test_move_ctor.h testing/test_multiplication_363.cpp testing/test_multiplication_363.h testing/test_dfs.cpp testing/test_dfs.h)
add_executable(FastMatMul ${SOURCE_FILES} communication/CommunicationHandler.cpp algorithm/SmirnovAlgorithm.cpp algorithm/SmirnovAlgorithm.h algorithm/MultiplyMatrices.cpp algorithm/MultiplyMatrices.h algorithm/SmirnovAlgorithm_336.cpp algorithm/SmirnovAlgorithm_336.h algorithm/SmirnovAlgorithm_363.cpp algorithm/SmirnovAlgorithm_363.h algorithm/SmirnovAlgorithm_633.cpp algorithm/SmirnovAlgorithm_633.h testing/test_multiplication.h testing/test_multiplication.cpp)