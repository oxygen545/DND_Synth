#ifndef AKWF_0731_512_H_
#define AKWF_0731_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0731_512_NUM_CELLS 512
#define AKWF_0731_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0731_512_DATA [] = {3,
8, 14, 19, 23, 29, 33, 39, 44, 48, 53, 59, 64, 68, 73, 79, 84, 88, 95, 98, 105,
109, 114, 119, 125, 127, 122, 117, 111, 106, 102, 97, 91, 86, 81, 75, 71, 65,
62, 56, 51, 46, 40, 35, 31, 26, 21, 15, 10, 6, 1, -5, -6, -6, -5, -6, -6, -5,
-5, -5, -6, -6, -5, -6, -6, -6, -5, -6, -6, -5, -5, -6, -6, -6, -6, -5, -5, -6,
-6, -6, -6, -6, -6, -5, -6, -6, -6, -5, -6, -5, -6, -6, -5, -6, -7, -5, -6, -6,
-6, -6, -6, -5, -6, -6, -6, -6, -5, -5, -6, -6, -5, -6, -6, -6, -6, -6, -5, -5,
-6, -6, -5, -5, -6, -6, -6, -5, -6, -6, -6, -5, -5, -5, -6, -6, -5, -6, -6, -6,
-6, -5, -5, -5, -6, -5, -6, -6, -5, -6, -5, -6, -5, -6, -6, -5, -5, -5, -5, -5,
-4, -3, -4, -4, -4, -3, -2, -3, -3, -3, -3, -2, -2, -1, -1, -1, 0, -1, 0, 0, 0,
1, 0, -1, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3, -3, -4, -4, -5, -4,
-4, -5, -6, -5, -5, -6, -6, -5, -5, -5, -6, -6, -6, -6, -6, -5, -6, -6, -6, -5,
-6, -6, -5, -5, -5, -5, -6, -6, -6, -6, -7, -6, -6, -6, -6, -5, -5, -6, -6, -6,
-6, -6, -5, -5, -6, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5,
-5, -6, -6, -6, -6, -6, -6, -5, -5, -6, -6, -6, -6, -5, -6, -5, -6, -5, -6, -5,
-6, -6, -6, -6, -5, -5, -6, -6, -6, -5, -7, -8, -10, -11, -11, -13, -14, -15,
-17, -17, -19, -21, -21, -23, -24, -25, -26, -28, -29, -31, -32, -34, -35, -35,
-37, -38, -38, -37, -36, -34, -33, -32, -31, -30, -28, -27, -25, -25, -23, -22,
-20, -19, -19, -16, -15, -14, -13, -11, -10, -10, -8, -7, -5, -5, -5, -6, -5,
-5, -5, -6, -6, -5, -6, -6, -6, -6, -5, -6, -5, -6, -5, -5, -6, -5, -5, -5, -6,
-5, -6, -5, -5, -5, -5, -6, -5, -5, -5, -6, -5, -6, -5, -6, -5, -5, -5, -5, -6,
-6, -5, -5, -6, -5, -5, -6, -5, -6, -5, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5,
-6, -6, -5, -5, -5, -5, -5, -6, -6, -5, -6, -5, -5, -6, -5, -5, -6, -6, -5, -5,
-5, -6, -5, -4, -6, -5, -5, -5, -5, -6, -6, -5, -5, -6, -5, -5, -5, -5, -6, -6,
-5, -6, -5, -5, -6, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4,
-5, -5, -5, -5, -5, -5, -5, -4, -5, -5, -5, -5, -5, -5, -6, -5, -5, -4, -4, -5,
-5, -6, -5, -5, -5, -6, -6, -5, -5, -6, -5, -6, -5, -6, -5, -6, -5, -5, -5, -6,
-5, -4, -6, -4, 0, };

#endif /* AKWF_0731_512_H_ */
