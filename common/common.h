#ifndef _COMMON_
#define _COMMON_

#include <stdexcept>
#include <sstream>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

using std::stringstream;
using std::range_error;

typedef unsigned int uint32;
//#define NULL 0

#define SMIRNOV_SUB_PROBLEMS 40

#define throw_range_error(message) \
do \
{ \
	stringstream ss; \
	ss << message; \
	throw range_error(ss.str()); \
} while (0); \


# define ROOTp(rank) 0 == rank

static void wait_for_debugger(int rank)
{
    if( getenv("TJF_MPI_DEBUG") != NULL && ROOTp(rank) ) {
        volatile int i = 0;
        fprintf(stderr, "pid %ld waiting for debugger \n", (long) getpid());
        while (i == 0) { /* change ’i’ in the debugger */ }
    }
}

#endif

