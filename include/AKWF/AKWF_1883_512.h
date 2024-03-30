#ifndef AKWF_1883_512_H_
#define AKWF_1883_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1883_512_NUM_CELLS 512
#define AKWF_1883_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1883_512_DATA [] = {0,
0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 6, 6, 6, 7, 8, 8, 8, 9, 9, 8, 10, 9, 10,
10, 10, 9, 9, 10, 10, 9, 9, 9, 9, 9, 9, 8, 8, 9, 8, 7, 8, 8, 8, 8, 8, 7, 7, 7,
6, 6, 6, 8, 13, 22, 29, 36, 42, 48, 54, 59, 63, 70, 74, 77, 81, 85, 88, 91, 94,
97, 100, 101, 104, 107, 108, 111, 112, 113, 114, 117, 117, 119, 120, 122, 123,
122, 120, 113, 108, 104, 100, 97, 93, 89, 86, 83, 80, 78, 80, 84, 87, 91, 93,
96, 99, 101, 103, 105, 107, 108, 110, 112, 114, 116, 117, 118, 119, 120, 120,
122, 123, 124, 125, 124, 126, 127, 127, 127, 127, 125, 114, 102, 90, 78, 67, 56,
45, 34, 25, 15, 6, -1, -9, -16, -22, -29, -35, -41, -44, -50, -55, -58, -63,
-66, -70, -73, -76, -78, -82, -84, -86, -88, -89, -93, -94, -96, -97, -98, -100,
-101, -102, -103, -104, -105, -106, -107, -107, -109, -109, -109, -108, -104,
-103, -99, -97, -95, -94, -91, -92, -93, -94, -96, -98, -99, -101, -102, -103,
-105, -104, -106, -107, -108, -108, -109, -110, -110, -111, -111, -112, -112,
-113, -113, -113, -113, -114, -114, -114, -115, -115, -115, -116, -115, -116,
-115, -116, -115, -116, -116, -117, -116, -116, -116, -117, -117, -116, -116,
-117, -116, -117, -117, -116, -117, -116, -116, -114, -111, -107, -102, -97,
-93, -89, -83, -79, -73, -68, -62, -58, -54, -49, -46, -42, -39, -36, -33, -30,
-28, -25, -22, -20, -18, -16, -15, -13, -12, -10, -9, -7, -5, -5, -3, -2, -2, 0,
1, 1, 1, 2, 2, 4, 4, 5, 5, 6, 6, 6, 6, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 10, 11,
10, 10, 10, 11, 11, 11, 11, 12, 11, 14, 20, 24, 29, 32, 37, 40, 40, 38, 36, 34,
33, 32, 31, 30, 29, 27, 27, 25, 25, 23, 24, 23, 21, 21, 21, 20, 20, 19, 19, 18,
18, 17, 17, 17, 17, 17, 15, 16, 16, 16, 15, 15, 14, 15, 14, 14, 15, 15, 14, 14,
14, 14, 13, 14, 13, 14, 13, 13, 14, 12, 13, 14, 13, 13, 14, 14, 12, 13, 13, 12,
10, 10, 8, 7, 8, 7, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 11, 12, 11,
11, 11, 12, 12, 12, 12, 12, 13, 12, 12, 12, 13, 12, 13, 13, 13, 13, 13, 13, 12,
13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 13, 14, 13, 14, 14, 13, 14, 14, 15,
15, 15, 15, 14, 14, 15, 15, 14, 14, 15, 14, 14, 15, 14, 13, 13, 14, 14, 14, 14,
14, 14, 13, 13, 14, 14, 14, 13, 14, 13, 13, 13, 13, 13, 12, 12, 11, 10, 9, 10,
8, 9, 7, 7, 6, 5, 5, 4, 2, 2, 1, 1, 1, 0, 0, -1, 0, 0, };

#endif /* AKWF_1883_512_H_ */
