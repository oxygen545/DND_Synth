#ifndef AKWF_1510_512_H_
#define AKWF_1510_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1510_512_NUM_CELLS 512
#define AKWF_1510_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1510_512_DATA [] =
{20, 27, 25, 27, 25, 26, 25, 26, 26, 26, 25, 27, 24, 28, 23, 40, 54, 49, 52, 51,
49, 66, 80, 74, 79, 75, 79, 75, 79, 74, 82, 104, 102, 103, 102, 103, 103, 103,
103, 102, 103, 102, 102, 102, 103, 102, 102, 102, 102, 102, 102, 102, 102, 102,
102, 103, 102, 102, 102, 103, 103, 103, 101, 103, 102, 103, 102, 103, 102, 104,
99, 110, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 103, 102, 102, 102,
102, 102, 103, 101, 105, 84, 74, 78, 77, 77, 76, 76, 78, 75, 79, 65, 48, 54, 51,
52, 50, 51, 51, 50, 53, 49, 54, 37, 22, 27, 25, 26, 25, 26, 26, 26, 26, 26, 25,
26, 25, 25, 25, 27, 25, 28, 6, -2, 1, -2, 0, -2, 0, -1, 1, 0, 0, 0, 1, 0, 1, -1,
1, -1, 2, -1, 3, -11, -29, -24, -27, -25, -27, -25, -27, -25, -26, -25, -26,
-26, -25, -25, -26, -26, -25, -25, -25, -26, -26, -27, -26, -26, -25, -25, -25,
-26, -25, -26, -26, -26, -26, -25, -26, -25, -25, -25, -26, -25, -26, -25, -25,
-26, -25, -26, -25, -26, -25, -26, -26, -26, -25, -26, -25, -26, -24, -26, -24,
-26, -25, -26, -25, -26, -25, -26, -48, -54, -41, -24, -26, -25, -25, -25, -26,
-26, -25, -26, -25, -26, -25, -26, -25, -26, -25, -26, -24, -26, -25, -26, -25,
-26, -24, -26, -25, -3, 1, 0, 1, -1, 1, -1, 1, -1, 0, -1, 2, 24, 26, 24, 27, 26,
26, 25, 27, 25, 27, 25, 26, 25, 26, 25, 26, 25, 26, 25, 26, 25, 26, 25, 25, 27,
22, 40, 55, 48, 27, 24, 27, 25, 27, 25, 26, 25, 26, 25, 25, 26, 26, 26, 26, 25,
25, 25, 25, 25, 25, 26, 26, 26, 25, 26, 26, 25, 25, 25, 25, 25, 26, 26, 25, 25,
26, 25, 26, 25, 26, 26, 26, 26, 25, 25, 26, 26, 26, 25, 26, 26, 26, 26, 26, 25,
25, 26, 25, 26, 25, 27, 25, 27, 24, 29, 12, -3, 1, -1, 0, 0, 1, 0, 1, 0, 0, -1,
0, 0, 1, -1, 1, -1, 1, -1, 2, -6, -28, -25, -26, -26, -26, -26, -25, -26, -26,
-26, -26, -26, -25, -25, -26, -25, -27, -23, -37, -55, -50, -53, -50, -51, -51,
-51, -52, -50, -53, -47, -66, -79, -75, -77, -77, -76, -77, -76, -78, -74, -84,
-105, -101, -103, -102, -103, -103, -102, -104, -101, -126, -128, -127, -128,
-127, -128, -128, -128, -126, -128, -110, -99, -104, -101, -103, -102, -103,
-103, -102, -102, -103, -101, -102, -103, -103, -102, -102, -103, -102, -102,
-102, -103, -102, -102, -103, -103, -102, -102, -102, -103, -102, -103, -103,
-102, -102, -102, -103, -101, -102, -102, -104, -83, -74, -78, -75, -78, -75,
-79, -74, -81, -66, -50, -51, -52, -50, -53, -42, -22, -27, -24, -27, -25, -26,
-25, -26, -25, -27, -25, -26, -25, -27, -24, 0, 0, };

#endif /* AKWF_1510_512_H_ */