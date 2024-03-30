#ifndef AKWF_0341_512_H_
#define AKWF_0341_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0341_512_NUM_CELLS 512
#define AKWF_0341_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0341_512_DATA [] = {1,
6, 8, 11, 14, 18, 21, 24, 29, 32, 34, 38, 41, 44, 46, 49, 51, 53, 55, 56, 58,
59, 60, 61, 62, 63, 62, 63, 62, 63, 61, 62, 61, 58, 58, 57, 55, 54, 52, 52, 49,
48, 47, 45, 44, 43, 43, 42, 40, 40, 39, 38, 38, 38, 37, 38, 38, 38, 40, 40, 41,
42, 44, 45, 47, 48, 51, 51, 52, 54, 55, 56, 55, 56, 56, 56, 56, 56, 55, 54, 54,
52, 52, 50, 49, 47, 46, 43, 43, 41, 39, 37, 36, 33, 31, 29, 26, 24, 21, 18, 15,
12, 9, 6, 3, 0, -4, -7, -11, -15, -18, -21, -25, -29, -33, -37, -41, -43, -47,
-50, -52, -55, -57, -58, -60, -60, -61, -61, -61, -59, -59, -58, -57, -53, -52,
-49, -46, -45, -41, -39, -35, -32, -29, -25, -22, -19, -16, -12, -9, -5, -2, 1,
4, 7, 10, 14, 17, 19, 22, 25, 27, 28, 30, 32, 33, 36, 37, 38, 39, 41, 41, 41,
42, 43, 43, 43, 43, 43, 43, 42, 42, 42, 41, 41, 40, 40, 40, 40, 39, 39, 39, 39,
38, 38, 37, 36, 35, 34, 33, 32, 31, 29, 27, 25, 23, 22, 20, 17, 15, 12, 9, 9, 6,
3, 2, 0, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -11, -11, -11, -13, -13, -13,
-13, -14, -14, -14, -13, -13, -14, -14, -13, -13, -14, -13, -13, -12, -12, -12,
-10, -9, -8, -6, -4, -2, 0, 2, 6, 8, 11, 13, 17, 20, 24, 26, 29, 32, 34, 38, 41,
42, 44, 47, 48, 50, 51, 52, 53, 53, 54, 54, 54, 54, 54, 54, 53, 51, 50, 48, 47,
45, 44, 42, 39, 37, 35, 32, 31, 28, 25, 23, 20, 18, 17, 14, 12, 11, 8, 7, 5, 3,
2, 1, 1, 0, -2, -2, -3, -2, -3, -3, -3, -2, -3, -2, -3, -2, -3, -4, -5, -5, -7,
-8, -10, -11, -13, -13, -16, -18, -20, -22, -25, -26, -29, -31, -33, -36, -38,
-40, -43, -45, -47, -49, -52, -55, -58, -61, -63, -67, -70, -73, -76, -80, -83,
-86, -89, -92, -95, -99, -102, -105, -109, -111, -115, -117, -119, -123, -123,
-127, -127, -127, -128, -128, -128, -127, -126, -124, -123, -120, -117, -115,
-112, -108, -105, -101, -97, -94, -91, -86, -82, -77, -73, -70, -64, -60, -56,
-51, -48, -44, -39, -35, -31, -26, -23, -20, -16, -13, -10, -7, -4, -2, 0, 3, 5,
7, 9, 11, 12, 13, 16, 16, 17, 19, 19, 18, 20, 20, 20, 20, 20, 20, 20, 21, 20,
20, 21, 21, 20, 21, 20, 20, 20, 20, 19, 18, 17, 16, 16, 14, 12, 11, 9, 7, 4, 4,
1, -1, -4, -5, -7, -8, -10, -13, -13, -14, -15, -16, -18, -17, -19, -19, -19,
-21, -20, -21, -21, -21, -21, -21, -22, -21, -22, -21, -20, -20, -20, -20, -20,
-20, -20, -19, -18, -18, -17, -17, -15, -14, -12, -10, -8, -5, -3, 0, };

#endif /* AKWF_0341_512_H_ */
