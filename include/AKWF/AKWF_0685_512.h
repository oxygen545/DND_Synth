#ifndef AKWF_0685_512_H_
#define AKWF_0685_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0685_512_NUM_CELLS 512
#define AKWF_0685_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0685_512_DATA [] =
{-1, 2, 12, 19, 24, 27, 31, 36, 38, 41, 44, 47, 49, 51, 52, 54, 56, 57, 59, 59,
61, 61, 62, 62, 63, 63, 63, 65, 64, 64, 64, 65, 64, 63, 63, 64, 63, 62, 62, 61,
61, 60, 60, 59, 59, 58, 57, 56, 55, 55, 54, 54, 53, 53, 51, 51, 49, 49, 48, 47,
47, 46, 44, 44, 43, 43, 42, 42, 41, 41, 39, 39, 38, 39, 37, 37, 37, 36, 35, 35,
35, 34, 34, 34, 33, 33, 32, 33, 33, 32, 32, 32, 32, 31, 31, 31, 32, 32, 31, 32,
32, 32, 32, 32, 33, 33, 34, 33, 33, 35, 34, 35, 35, 35, 35, 35, 35, 36, 35, 34,
33, 32, 32, 32, 30, 30, 29, 28, 27, 26, 24, 22, 21, 20, 17, 17, 15, 14, 12, 10,
9, 8, 5, 4, 3, 1, 0, 0, -1, -3, -5, -7, -9, -11, -12, -15, -17, -19, -21, -24,
-26, -29, -31, -34, -36, -39, -41, -43, -47, -49, -52, -54, -57, -60, -61, -65,
-68, -70, -73, -76, -77, -79, -82, -84, -87, -89, -91, -93, -96, -97, -100,
-102, -103, -106, -107, -110, -110, -112, -114, -116, -117, -117, -118, -120,
-121, -121, -123, -124, -125, -125, -126, -126, -127, -127, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -127, -127, -126, -125, -125, -124, -123,
-122, -121, -120, -120, -118, -116, -115, -114, -112, -111, -109, -108, -107,
-105, -104, -102, -100, -98, -96, -94, -92, -90, -89, -86, -84, -82, -80, -78,
-75, -74, -71, -69, -68, -65, -62, -60, -58, -56, -54, -52, -50, -48, -44, -43,
-41, -38, -36, -34, -33, -30, -28, -26, -24, -23, -20, -18, -17, -15, -13, -11,
-10, -9, -7, -6, -5, -3, -2, -1, -1, 0, 1, 1, 3, 3, 5, 6, 8, 9, 9, 11, 12, 13,
14, 16, 16, 18, 19, 19, 21, 21, 22, 23, 25, 25, 26, 27, 29, 29, 29, 29, 31, 31,
33, 33, 34, 34, 35, 34, 35, 34, 35, 36, 36, 37, 37, 37, 37, 36, 36, 36, 36, 36,
36, 36, 36, 35, 35, 34, 34, 34, 33, 32, 32, 32, 32, 30, 30, 29, 29, 28, 27, 27,
26, 26, 24, 24, 23, 22, 22, 21, 20, 19, 17, 17, 17, 15, 15, 13, 13, 13, 11, 10,
9, 9, 8, 7, 6, 6, 5, 4, 3, 3, 2, 2, 1, 0, -1, -1, -1, -1, -2, -3, -2, -4, -4,
-5, -6, -7, -7, -8, -8, -10, -11, -10, -11, -12, -13, -14, -14, -15, -15, -16,
-17, -17, -18, -18, -19, -19, -20, -21, -21, -21, -22, -22, -22, -23, -23, -22,
-23, -24, -23, -25, -25, -24, -25, -25, -26, -25, -25, -24, -25, -25, -24, -25,
-24, -24, -25, -24, -24, -24, -24, -24, -23, -23, -23, -22, -21, -22, -20, -19,
-20, -18, -18, -18, -17, -17, -17, -16, -15, -15, -14, -13, -13, -12, -11, -10,
-9, -9, -8, -8, -8, -6, -6, -5, -4, -3, -3, -3, -2, -1, -1, 0, };

#endif /* AKWF_0685_512_H_ */
