#ifndef AKWF_saw5bit_512_H_
#define AKWF_saw5bit_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_saw5bit_512_NUM_CELLS 512
#define AKWF_saw5bit_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_saw5bit_512_DATA [] =
{10, 13, 12, 14, 12, 13, 13, 12, 12, 12, 12, 13, 12, 13, 12, 12, 11, 12, 12, 12,
12, 12, 12, 12, 12, 13, 13, 12, 12, 12, 11, 12, 12, 12, 12, 12, 13, 12, 12, 12,
14, 12, 13, 9, 26, 38, 34, 36, 34, 36, 35, 35, 35, 36, 35, 35, 35, 35, 35, 35,
35, 35, 35, 35, 35, 35, 36, 35, 35, 35, 36, 35, 35, 34, 35, 36, 36, 35, 35, 35,
34, 36, 35, 36, 34, 36, 34, 38, 59, 59, 58, 58, 58, 58, 58, 59, 59, 58, 58, 58,
58, 59, 58, 58, 58, 59, 59, 58, 58, 58, 59, 58, 58, 58, 59, 58, 57, 58, 57, 59,
58, 58, 58, 58, 57, 58, 57, 58, 59, 57, 59, 56, 76, 83, 80, 81, 81, 81, 81, 81,
81, 81, 81, 81, 80, 81, 81, 80, 81, 81, 80, 81, 82, 80, 81, 80, 81, 81, 81, 81,
81, 80, 81, 81, 80, 82, 81, 81, 80, 81, 80, 81, 80, 82, 78, 86, 104, 103, 104,
103, 104, 104, 104, 103, 103, 104, 104, 103, 103, 103, 102, 103, 104, 103, 103,
103, 104, 103, 104, 103, 103, 103, 103, 103, 104, 103, 103, 102, 103, 103, 103,
103, 103, 102, 103, 103, 102, 104, 102, 122, 127, 125, 127, 126, 126, 126, 125,
126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 125, 127, 124, 127,
124, 127, 122, 127, 122, 127, 120, 127, 118, 127, 115, 127, 88, -128, -124,
-128, -128, -127, -128, -126, -128, -126, -128, -125, -128, -125, -128, -126,
-128, -126, -128, -126, -128, -127, -128, -127, -128, -127, -128, -128, -128,
-128, -128, -128, -127, -128, -127, -127, -126, -128, -112, -103, -106, -104,
-105, -104, -106, -105, -106, -104, -104, -105, -104, -105, -105, -104, -104,
-105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -104, -105,
-105, -104, -104, -104, -104, -104, -106, -103, -105, -104, -106, -103, -105,
-101, -80, -82, -82, -81, -81, -81, -82, -81, -81, -81, -82, -80, -82, -80, -81,
-81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -81, -82, -81, -81, -80, -81,
-80, -82, -81, -81, -81, -81, -80, -81, -80, -81, -79, -83, -66, -55, -59, -57,
-58, -57, -58, -57, -58, -57, -58, -58, -57, -57, -57, -58, -58, -57, -57, -57,
-57, -57, -58, -58, -57, -57, -57, -57, -58, -57, -57, -58, -57, -58, -57, -58,
-56, -57, -57, -58, -56, -58, -55, -60, -49, -31, -35, -34, -35, -34, -34, -34,
-35, -34, -35, -34, -34, -34, -34, -33, -34, -34, -33, -34, -34, -34, -34, -35,
-34, -34, -34, -33, -34, -33, -34, -34, -35, -34, -34, -33, -34, -33, -34, -34,
-33, -35, -34, -35, -15, -10, -12, -10, -12, -11, -11, -11, -11, -11, -12, -11,
-11, -10, -11, -11, -11, -11, -11, -11, -10, -10, -11, -10, -11, -11, -12, -11,
-10, -11, -11, -11, -11, -11, -12, -11, -11, -10, -11, -11, -12, -10, -12, -7,
};

#endif /* AKWF_saw5bit_512_H_ */