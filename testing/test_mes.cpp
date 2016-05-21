//
// Created by rig on 25/03/16.
//

#include "../measurement/Measurements.h"
#include <unistd.h>

using SmirnovFastMul::Computation::Measurements;
using SmirnovFastMul::Computation::TimerType;

void basic_usage() {
    Measurements &m = Measurements::getMeasurementLogger();

    m.startTimer(TimerType::COMM);
    usleep(3000);
    m.endTimer(TimerType::COMM);
    m.printTimers();

    m.increaseMessages(10);
    m.printStatistics();
}

void test_static_usage() {

    Measurements &m1 = Measurements::getMeasurementLogger();
    Measurements &m2 = Measurements::getMeasurementLogger();

    m1.startTimer(TimerType::COMM);
    usleep(3000);
    m1.endTimer(TimerType::COMM);
    m1.printTimers();

    m2.startTimer(TimerType::COMM);
    usleep(3000);
    m2.endTimer(TimerType::COMM);
    m2.printTimers();
}

int main() {

    basic_usage();
    test_static_usage();
    return 0;
}