//
// Created by rig on 24/03/16.
//

#ifndef FASTMATMUL_MEASURMENTS_H
#define FASTMATMUL_MEASURMENTS_H

#include <memory>

namespace SmirnovFastMul{
    namespace Computation {

        enum TimerType {
            COMM = 0,
            COMM_SUMMA,
            ADD,
            MUL,
            REARRANGE,
            TIME
        };

        /**
         * A singelton for collecting measurements
         */
        class Measurements {
        public:

            static Measurements& getMeasurementLogger() {
                static Measurements s_measurement;
                return s_measurement;
            }

            void startTimer(TimerType type);

            void endTimer(TimerType type);

            void increaseAdditions(long long n);

            void increaseMultiplications(long long n);

            void increaseMessages(long long n);

            void increaseWords(long long n);

            void printTimers();

            void printTimer(TimerType type);

            void printStatistics();

            Measurements(Measurements const&) = delete;
            void operator=(Measurements const&) = delete;

        private:

            Measurements() : m_additions(0), m_multiplications(0), m_messages(0), m_words(0) {}

            double readTimer();

            double m_timers[6] = {0};

            long long m_additions = 0;
            long long m_multiplications = 0;
            long long m_messages = 0;
            long long m_words = 0;
        };
    }
}




#endif //FASTMATMUL_MEASURMENTS_H
