#ifndef _COMMON_
#define _COMMON_

#include <stdexcept>
#include <sstream>

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

#endif

