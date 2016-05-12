//
// Created by rig on 25/03/16.
//

#include "../measurement/Measurements.h"
#include <unistd.h>

using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::TimerType;

void basic_usage() {
    Measurements m = Measurements::getMeasurementLogger();

    m.startTimer(TimerType::COMM);
    usleep(3000);
    m.endTimer(TimerType::COMM);
    m.printTimers();

    m.increaseMessages(10);
    m.printStatistics();
}

int main() {

    basic_usage();
    return 0;
}