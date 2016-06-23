//
// Created by rig on 23/06/16.
//

#ifndef FASTMATMUL_TEST_DEFS_H
#define FASTMATMUL_TEST_DEFS_H

#include "command_line_parser.h"
#include "../matrix_creation/matrix_creation.h"

#include "../../../matrix/Matrix.h"
#include "../../../matrix/PositionalMatrix.h"
#include "../../../communication/CommunicationHandler.h"
#include "../../../distribution/Distribution.h"
#include "../../../measurement/Measurements.h"
#include "../../../algorithm/MultiplyMatrices.h"
#include "../../../common/common.h"

#include <iostream>
using std::cout;
using std::endl;

using SmirnovFastMul::Communication::CommunicationHandler;
using SmirnovFastMul::Computation::Matrix;
using SmirnovFastMul::Computation::PositionalMatrix;
using SmirnovFastMul::Distribution::DistributionHandler;
using SmirnovFastMul::Computation::MultiplyMatrices;
using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::TimerType;

#define FOR_RANK_0(our_rank) if (our_rank == 0)

#endif //FASTMATMUL_TEST_DEFS_H
