//
// Created by rig on 24/03/16.
//

#include "Measurements.h"
#include <sys/time.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using SmirnovFastMul::Computation::Measurements;

void Measurements::startTimer(TimerType type) {
    m_timers[type] -= readTimer();
}

void Measurements::endTimer(TimerType type) {
    m_timers[type] += readTimer();
}

void Measurements::increaseAdditions(long long n) {
    m_additions += n;
}

void Measurements::increaseMultiplications(long long n) {
    m_multiplications += n;
}

void Measurements::increaseMessages(long long n) {
    m_messages += n;
}

void Measurements::increaseWords(long long n) {
    m_words += n;
}

void Measurements::printTimers() {
    printf("Time spent communicating: %f (%f+%f), on additions: %f, on multiplications %f, on local reording %f (sum %f)\n",
           m_timers[COMM]+m_timers[COMM_SUMMA],
           m_timers[COMM],
           m_timers[COMM_SUMMA],
           m_timers[ADD],
           m_timers[MUL],
           m_timers[REARRANGE],
           m_timers[COMM] + m_timers[COMM_SUMMA] + m_timers[ADD] + m_timers[MUL] + m_timers[REARRANGE]);
}

void Measurements::printTimer(TimerType type) {
    printf("Elapsed time for timer is %f\n", m_timers[type]);
}

void Measurements::printStatistics() {
    long long flops = m_additions+m_multiplications;
    printf("flops=%lld (%lld+%lld) messages sent+received=%lld bytes sent+received=%lld\n",
           flops,
           m_additions-m_multiplications,
           2*m_multiplications,
           m_messages, m_words);
}

double Measurements::readTimer() {

    static bool initialized = false;
    static struct timespec start;
    struct timespec end;

    if( !initialized ) {
        clock_gettime(CLOCK_MONOTONIC, &start);
        initialized = true;
    }
    clock_gettime(CLOCK_MONOTONIC, &end);

    return (end.tv_sec - start.tv_sec) + 1.0e-6 * round((end.tv_nsec - start.tv_nsec) / 1.0e6);

    // The usage of gettimeofday is discouraged since its not accurate;
    /*static bool initialized = false;
    static struct timeval start;
    struct timeval end;
    if( !initialized )
    {
        gettimeofday( &start, NULL );
        initialized = true;
    }

    gettimeofday( &end, NULL );

    return (end.tv_sec - start.tv_sec) + 1.0e-6 * (end.tv_usec - start.tv_usec);*/
}
