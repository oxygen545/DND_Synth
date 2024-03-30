#ifndef AKWF_0861_512_H_
#define AKWF_0861_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0861_512_NUM_CELLS 512
#define AKWF_0861_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0861_512_DATA [] = {1,
17, 26, 23, 24, 28, 26, 22, 24, 30, 31, 34, 47, 61, 67, 66, 72, 83, 99, 118,
127, 123, 110, 101, 97, 96, 95, 91, 89, 85, 83, 79, 77, 74, 71, 68, 65, 63, 60,
58, 55, 53, 50, 48, 44, 43, 41, 38, 37, 34, 32, 29, 27, 26, 24, 22, 20, 17, 15,
14, 12, 11, 9, 7, 6, 4, 3, 0, 0, -2, -3, -6, -6, -7, -9, -10, -11, -13, -13,
-15, -16, -16, -18, -20, -20, -21, -22, -22, -23, -25, -25, -25, -27, -26, -27,
-27, -28, -30, -29, -30, -31, -30, -31, -31, -32, -33, -32, -32, -33, -32, -32,
-33, -33, -33, -33, -33, -32, -33, -32, -33, -33, -32, -33, -32, -32, -32, -32,
-31, -31, -31, -30, -31, -29, -29, -29, -29, -28, -27, -27, -26, -26, -25, -25,
-24, -24, -23, -23, -21, -21, -20, -19, -19, -18, -17, -17, -16, -15, -14, -13,
-12, -11, -11, -10, -10, -8, -8, -7, -6, -5, -4, -2, -1, -1, 0, 1, 2, 2, 5, 4,
6, 7, 8, 8, 10, 12, 12, 13, 14, 15, 16, 17, 18, 19, 21, 21, 22, 24, 25, 26, 27,
28, 29, 29, 31, 31, 33, 34, 35, 37, 37, 39, 39, 40, 42, 43, 43, 45, 47, 48, 48,
48, 49, 51, 52, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 66, 68,
69, 70, 70, 72, 73, 73, 78, 85, 87, 72, 50, 31, 19, 14, 13, 9, -4, -21, -25,
-24, -25, -28, -25, -22, -26, -29, -31, -36, -51, -64, -68, -67, -73, -85, -102,
-122, -128, -120, -108, -100, -97, -95, -95, -90, -88, -84, -82, -78, -75, -73,
-70, -68, -64, -62, -60, -57, -55, -53, -50, -47, -45, -42, -40, -38, -36, -33,
-31, -30, -27, -24, -23, -21, -18, -17, -16, -14, -12, -10, -9, -7, -5, -3, -2,
-1, 1, 2, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 19, 21, 21, 22, 23,
24, 24, 25, 26, 27, 28, 28, 29, 28, 30, 30, 30, 31, 31, 32, 32, 32, 32, 33, 33,
32, 32, 33, 33, 34, 34, 34, 33, 33, 32, 33, 32, 32, 33, 33, 32, 32, 31, 31, 31,
30, 31, 30, 29, 29, 28, 28, 28, 27, 27, 26, 25, 26, 24, 23, 23, 22, 22, 22, 21,
20, 19, 18, 18, 17, 16, 15, 14, 14, 14, 12, 12, 10, 10, 9, 8, 8, 7, 5, 5, 3, 3,
2, 0, 0, -1, -2, -3, -4, -4, -6, -7, -9, -9, -11, -11, -12, -13, -14, -15, -16,
-17, -19, -19, -20, -22, -23, -23, -24, -26, -27, -27, -29, -31, -32, -33, -34,
-35, -35, -37, -37, -38, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50,
-51, -52, -53, -55, -55, -56, -57, -58, -59, -61, -61, -62, -63, -64, -65, -66,
-67, -69, -69, -70, -71, -72, -73, -75, -79, -87, -86, -68, -46, -27, -17, -13,
-14, -6, };

#endif /* AKWF_0861_512_H_ */