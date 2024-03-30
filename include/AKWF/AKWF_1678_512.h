#ifndef AKWF_1678_512_H_
#define AKWF_1678_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1678_512_NUM_CELLS 512
#define AKWF_1678_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1678_512_DATA [] = {0,
4, 9, 12, 18, 22, 26, 31, 35, 39, 42, 45, 48, 51, 54, 56, 58, 59, 62, 63, 65,
66, 68, 68, 71, 69, 82, 93, 92, 93, 94, 95, 96, 96, 97, 98, 98, 98, 99, 99, 102,
101, 101, 101, 103, 102, 103, 103, 104, 105, 103, 105, 103, 106, 104, 108, 102,
111, 99, 118, 64, -16, 3, -6, 0, -5, -2, -3, -1, -2, -2, -2, -1, -1, -2, -1, -1,
-1, -2, 0, -2, 0, -2, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 1, -1, 1,
-3, 8, 21, 16, 20, 18, 19, 18, 19, 18, 19, 18, 18, 18, 19, 18, 19, 18, 18, 19,
18, 18, 17, 18, 18, 18, 18, 19, 17, 19, 17, 19, 17, 18, 15, 24, 38, 34, 35, 35,
35, 35, 35, 35, 34, 34, 34, 34, 34, 34, 33, 33, 34, 33, 33, 32, 32, 33, 32, 32,
32, 33, 31, 32, 30, 30, 29, 30, 28, 33, 49, 45, 46, 45, 46, 45, 44, 43, 42, 42,
42, 41, 40, 40, 39, 38, 36, 36, 34, 33, 32, 31, 30, 29, 28, 26, 24, 21, 19, 18,
15, 12, 10, 7, 1, -1, -8, 2, 3, -5, -7, -13, -16, -20, -24, -26, -30, -33, -35,
-38, -39, -41, -43, -45, -48, -48, -50, -50, -49, -47, -29, 1, 22, 35, 42, 47,
49, 51, 50, 52, 51, 52, 54, 54, 56, 56, 56, 55, 70, 74, 70, 70, 66, 65, 61, 58,
54, 50, 45, 41, 37, 33, 28, 24, 19, 16, 12, 10, 6, 3, 1, -1, -4, -5, -7, -9, -9,
-11, -13, -14, -14, -18, -4, 2, -3, -1, -3, -4, -5, -5, -6, -6, -6, -8, -7, -9,
-8, -10, -10, -11, -10, -12, -11, -13, -12, -13, -12, -13, -13, -13, -14, -13,
-16, -11, -21, -2, -83, -128, -118, -128, -122, -128, -123, -127, -125, -127,
-125, -127, -125, -126, -126, -127, -126, -127, -126, -127, -127, -127, -127,
-127, -128, -127, -128, -127, -128, -128, -128, -128, -128, -127, -128, -127,
-128, -128, -128, -127, -128, -116, -107, -112, -108, -111, -109, -110, -109,
-110, -108, -110, -110, -110, -110, -110, -109, -110, -109, -110, -110, -109,
-109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -110, -108, -111,
-97, -88, -91, -90, -91, -89, -90, -89, -89, -90, -89, -89, -88, -89, -89, -88,
-89, -89, -88, -88, -87, -88, -87, -86, -86, -87, -86, -86, -86, -86, -85, -85,
-84, -87, -76, -63, -66, -63, -64, -63, -62, -62, -62, -62, -61, -60, -60, -59,
-58, -57, -57, -55, -54, -54, -52, -51, -50, -49, -47, -45, -44, -42, -40, -38,
-35, -33, -29, -27, -24, -20, -15, -11, 11, 19, 21, 28, 31, 36, 39, 42, 46, 50,
51, 54, 56, 59, 61, 62, 64, 66, 66, 68, 68, 68, 63, 40, 12, -9, -19, -26, -29,
-32, -33, -34, -33, -34, -34, -35, -36, -37, -36, -39, -36, -19, -17, -16, -12,
-11, -8, -5, -2, };

#endif /* AKWF_1678_512_H_ */
