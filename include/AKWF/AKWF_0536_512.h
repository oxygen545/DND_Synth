#ifndef AKWF_0536_512_H_
#define AKWF_0536_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0536_512_NUM_CELLS 512
#define AKWF_0536_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0536_512_DATA [] =
{22, -17, 22, -47, 22, 79, 46, 37, 10, 2, -15, -17, -26, -24, -28, -23, -25,
-18, -18, -12, -11, -7, -6, -3, -1, 1, 2, 4, 5, 6, 7, 7, 6, 7, 7, 6, 6, 5, 6, 4,
5, 5, 3, 3, 4, 3, 3, 2, 2, 1, 2, 0, 1, 0, 1, 1, 1, -1, -1, -2, -1, -1, -2, -2,
-1, -2, -2, -2, -4, 0, -4, 0, -5, 0, -4, 1, -6, 2, -6, 2, -5, 3, -5, 0, 6, -53,
4, 18, 8, -7, -13, -20, -21, -23, -21, -19, -17, -12, -12, -6, -6, 0, 0, 6, 6,
11, 11, 14, 14, 17, 17, 18, 19, 19, 18, 18, 17, 16, 16, 14, 13, 11, 11, 9, 8, 7,
6, 4, 4, 2, 2, 1, 0, -1, -2, -2, -4, -3, -5, -6, -7, -6, -8, -7, -9, -8, -9, -8,
-10, -9, -9, -8, -8, -8, -8, -8, -7, -8, -6, -7, -4, -7, -2, -6, 0, -5, 1, -4,
2, -3, 4, -4, 8, -7, -35, 71, 64, 44, 27, 8, -2, -16, -16, -24, -20, -25, -19,
-21, -13, -14, -8, -7, -3, -2, 1, 3, 4, 6, 6, 8, 7, 11, 5, 11, 4, 11, 3, 11, 1,
12, -1, 10, 9, -45, -14, -25, -14, -26, -17, -22, -14, -15, -9, -6, -4, 33, -39,
-44, -23, -9, 7, 16, 26, 30, 35, 35, 35, 33, 32, 28, 26, 21, 19, 15, 14, 10, 8,
3, 4, -1, 0, -5, -2, -7, -4, -10, -6, -12, -5, -13, -2, 15, -58, -50, -37, -25,
-12, -6, 4, 5, 11, 10, 11, 8, 9, 6, 6, 3, 4, 0, 0, -1, -1, -2, -2, -2, -3, -3,
-3, -2, -2, -2, -1, 0, 1, 1, 1, 2, 1, 3, 3, 3, 3, 3, 5, 4, 5, 3, 5, 3, 4, 2, 5,
2, 4, 1, 2, 0, 1, 0, 1, 0, 0, 0, -1, -1, -2, 0, -3, 1, -5, 3, -6, 4, -8, 5, -10,
7, -11, 9, 20, -15, -6, -30, -22, -40, 3, -70, -82, -56, -42, -18, -8, 10, 14,
28, 27, 35, 32, 36, 31, 35, 28, 30, 25, 25, 21, 20, 16, 15, 11, 10, 9, 6, 5, 3,
2, 1, 1, -1, -1, -3, -4, -5, -5, -6, -6, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9,
-9, -8, -8, -7, -8, -8, -7, -6, -6, -5, -5, -3, -4, -2, -3, -1, -2, 0, -2, 0, 0,
1, 1, 2, 2, 2, 3, 3, 4, 2, 6, 1, 8, -6, 33, -6, -52, -25, -21, -2, 2, 15, 16,
21, 21, 22, 20, 19, 17, 15, 13, 10, 8, 6, 5, 2, 2, 0, -1, -2, -2, -4, -3, -4,
-4, -5, -5, -4, -4, -4, -4, -3, -3, -3, -4, -2, -2, -1, -1, -1, -1, -1, -2, 0,
-2, -1, -2, -1, -1, -2, -2, -3, -2, -3, -2, -3, 0, -3, 0, -3, -1, -3, 1, -2, 1,
-3, 1, 0, 1, 0, -1, 3, -5, 12, -33, };

#endif /* AKWF_0536_512_H_ */