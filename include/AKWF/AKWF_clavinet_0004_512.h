#ifndef AKWF_clavinet_0004_512_H_
#define AKWF_clavinet_0004_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_clavinet_0004_512_NUM_CELLS 512
#define AKWF_clavinet_0004_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_clavinet_0004_512_DATA
[] = {0, 2, 2, 3, 4, 6, 7, 8, 8, 8, 9, 9, 10, 11, 10, 11, 13, 15, 17, 19, 19,
21, 21, 21, 20, 21, 21, 21, 23, 24, 24, 26, 27, 27, 27, 27, 26, 26, 27, 28, 28,
28, 30, 30, 31, 30, 29, 28, 26, 23, 21, 18, 17, 15, 14, 12, 9, 7, 5, 4, 3, 3, 2,
2, 1, 1, 1, -1, -1, 1, 2, 2, 3, 4, 3, 2, -1, -1, -2, -4, -2, -3, -3, -4, -3, -2,
-2, -2, -1, 0, 1, 2, 1, 0, 0, -2, -2, -2, -1, -2, -3, -2, -1, 0, 0, -4, -6, -9,
-9, -9, -9, -9, -5, 0, 4, 3, 0, -1, 0, 1, 1, 3, 2, 3, 5, 4, 4, 2, 4, 7, 9, 10,
10, 8, 6, 3, 0, 0, 0, 2, 2, 3, 3, 6, 9, 11, 14, 16, 15, 13, 8, 2, -4, -10, -14,
-13, -10, -3, 2, 7, 10, 12, 14, 10, 4, -5, -11, -11, -10, -6, 0, 5, 10, 13, 9,
-1, -13, -21, -24, -23, -18, -10, -3, 6, 15, 19, 19, 17, 14, 12, 7, -1, -9, -19,
-25, -30, -28, -22, -13, -1, 8, 15, 16, 15, 10, 2, -5, -12, -16, -16, -13, -9,
0, 9, 18, 27, 31, 31, 26, 16, 5, -8, -18, -27, -33, -36, -35, -30, -23, -14, -5,
4, 10, 14, 14, 12, 9, 8, 9, 12, 14, 14, 12, 7, -1, -12, -23, -32, -39, -40, -38,
-31, -21, -9, 7, 25, 43, 58, 68, 73, 74, 68, 60, 49, 39, 26, 11, -3, -19, -33,
-43, -50, -54, -53, -49, -44, -36, -30, -26, -21, -18, -15, -10, -4, 4, 15, 28,
42, 55, 65, 71, 72, 66, 56, 43, 29, 18, 9, 6, 8, 12, 15, 16, 15, 12, 8, 1, -3,
-6, -8, -8, -8, -8, -11, -15, -20, -29, -39, -51, -64, -78, -93, -107, -118,
-125, -128, -126, -117, -102, -80, -56, -31, -6, 14, 32, 45, 53, 57, 57, 54, 49,
47, 43, 40, 36, 30, 21, 8, -8, -26, -41, -57, -68, -76, -79, -79, -77, -74, -68,
-64, -58, -54, -52, -49, -48, -46, -43, -39, -34, -28, -20, -12, -5, 6, 14, 22,
30, 36, 41, 47, 53, 61, 70, 79, 91, 100, 110, 117, 122, 124, 125, 121, 117, 109,
100, 86, 69, 52, 33, 16, 3, -7, -13, -17, -18, -16, -12, -4, 4, 15, 26, 38, 47,
56, 62, 65, 67, 69, 68, 68, 68, 68, 67, 67, 67, 67, 67, 67, 66, 65, 63, 60, 56,
53, 47, 41, 35, 27, 19, 10, 1, -8, -18, -26, -33, -41, -47, -50, -55, -56, -59,
-58, -58, -57, -55, -55, -54, -52, -51, -50, -49, -48, -46, -45, -43, -43, -42,
-43, -44, -46, -48, -50, -52, -54, -55, -56, -57, -58, -59, -59, -59, -59, -60,
-61, -60, -60, -60, -59, -59, -57, -56, -53, -50, -48, -46, -43, -42, -38, -36,
-32, -29, -26, -22, -19, -15, -12, -9, -7, -5, -3, -1, 0, };

#endif /* AKWF_clavinet_0004_512_H_ */
