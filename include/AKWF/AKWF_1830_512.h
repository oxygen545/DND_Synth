#ifndef AKWF_1830_512_H_
#define AKWF_1830_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1830_512_NUM_CELLS 512
#define AKWF_1830_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1830_512_DATA [] =
{12, 33, 50, 68, 81, 91, 99, 106, 109, 111, 111, 111, 108, 105, 102, 99, 95, 91,
87, 84, 81, 76, 73, 69, 67, 62, 60, 56, 54, 51, 48, 47, 44, 43, 40, 38, 36, 35,
34, 31, 30, 29, 27, 26, 24, 23, 23, 21, 20, 19, 18, 17, 16, 15, 14, 13, 13, 12,
11, 11, 9, 9, 9, 9, 7, 7, 6, 6, 6, 5, 5, 4, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 0, -1,
-1, -1, -1, -2, -2, -2, -2, -2, -3, -2, -3, -4, -3, -3, -3, -3, -4, -4, -5, -4,
-4, -4, -4, -5, -4, -4, -5, -6, -6, -5, -5, -6, -5, -5, -6, -5, -6, -5, -6, -7,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -6, -6, -6, -6, -6, -6, -7, -7, -6, -6,
-7, -6, -6, -7, -7, -6, -6, -7, -7, -6, -6, -6, -7, -6, -6, -6, -6, -6, -7, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -7, -5, -6, -6, -5, -5, -6,
-5, -5, -5, -5, -6, -6, -5, -5, -5, -5, -5, -6, -5, -5, -6, -5, -5, -6, -5, -6,
-5, -4, -5, -4, -5, -5, -4, -4, -5, -4, -5, -4, -3, -5, -4, -4, -4, -3, -3, -3,
-3, -3, -4, -4, -3, -3, -4, -2, -3, -3, -3, -3, -3, -2, -2, -2, -3, -2, -3, -2,
-2, -2, -2, -2, -1, -2, -3, -2, -2, -3, -1, -1, -1, -1, -2, -1, -1, 0, 0, -1,
-1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2,
2, 3, 2, 2, 3, 2, 3, 2, 2, 3, 2, 3, 2, 3, 3, 2, 4, 3, 3, 4, 3, 4, 3, 4, 4, 4, 4,
3, 4, 5, 4, 5, 4, 5, 4, 4, 5, 5, 5, 5, 6, 5, 6, 6, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7,
8, 8, 7, 8, 7, 8, 8, 7, 8, 8, 8, 8, 9, 9, 8, 10, 10, 10, 9, 10, 10, 11, 10, 10,
11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 16, 16, 17, 17, 17, 18, 19, 19,
19, 20, 21, 21, 22, 22, 24, 25, 26, 26, 27, 29, 30, 31, 32, 33, 35, 35, 38, 38,
41, 42, 44, 46, 48, 50, 54, 56, 57, 59, 60, 61, 61, 60, 57, 52, 45, 35, 22, 5,
-11, -30, -50, -67, -83, -97, -108, -117, -123, -126, -128, -128, -126, -124,
-122, -119, -115, -111, -107, -103, -100, -94, -92, -87, -83, -79, -77, -74,
-70, -68, -67, -66, -65, -65, -66, -67, -68, -69, -70, -72, -72, -74, -76, -77,
-79, -81, -82, -83, -84, -83, -83, -80, -76, -69, -61, -47, -33, -14, 0, };

#endif /* AKWF_1830_512_H_ */