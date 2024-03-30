#ifndef AKWF_1653_512_H_
#define AKWF_1653_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1653_512_NUM_CELLS 512
#define AKWF_1653_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1653_512_DATA [] = {0,
0, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10, 12, 12, 14, 15, 17, 17, 19, 21, 22, 24,
25, 27, 29, 31, 32, 33, 36, 36, 39, 40, 41, 43, 44, 45, 47, 49, 50, 52, 52, 54,
55, 56, 58, 59, 60, 60, 63, 63, 64, 65, 66, 68, 68, 68, 70, 69, 70, 72, 72, 73,
73, 74, 74, 74, 73, 73, 74, 74, 74, 74, 73, 74, 74, 73, 73, 72, 72, 72, 71, 71,
70, 70, 70, 68, 69, 68, 67, 67, 67, 65, 66, 64, 65, 63, 63, 63, 61, 61, 60, 61,
59, 59, 58, 58, 57, 57, 56, 56, 55, 55, 55, 55, 54, 55, 54, 54, 54, 54, 55, 55,
55, 55, 56, 56, 57, 57, 57, 58, 59, 59, 60, 60, 61, 62, 63, 63, 63, 64, 65, 66,
67, 67, 68, 68, 69, 70, 71, 71, 72, 73, 73, 75, 76, 77, 78, 78, 79, 80, 81, 81,
83, 83, 84, 84, 84, 85, 87, 86, 87, 87, 87, 87, 88, 89, 89, 90, 89, 90, 90, 89,
90, 90, 90, 90, 91, 90, 90, 91, 90, 91, 90, 90, 91, 91, 91, 91, 92, 91, 91, 92,
92, 91, 92, 91, 92, 91, 92, 91, 91, 91, 92, 92, 91, 90, 91, 91, 90, 89, 89, 88,
87, 87, 86, 86, 86, 83, 83, 82, 81, 81, 79, 78, 76, 75, 74, 73, 71, 69, 68, 66,
64, 62, 60, 58, 56, 55, 53, 50, 47, 45, 42, 40, 37, 33, 30, 27, 24, 21, 17, 14,
11, 8, 4, 1, -2, -6, -9, -13, -15, -19, -23, -25, -28, -32, -34, -36, -40, -41,
-44, -47, -49, -51, -54, -56, -57, -60, -62, -63, -66, -67, -69, -71, -72, -74,
-76, -76, -79, -79, -81, -82, -83, -85, -85, -87, -88, -89, -89, -91, -91, -92,
-93, -94, -94, -95, -96, -96, -97, -97, -98, -98, -98, -99, -100, -101, -102,
-101, -102, -103, -103, -104, -106, -106, -107, -107, -108, -109, -110, -112,
-112, -113, -114, -114, -116, -117, -118, -119, -120, -121, -122, -122, -123,
-123, -125, -126, -126, -127, -127, -127, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -127, -127, -128, -128, -127, -128, -128, -128, -127,
-127, -128, -128, -128, -128, -128, -127, -126, -127, -125, -125, -124, -123,
-123, -122, -121, -120, -119, -118, -117, -115, -115, -113, -113, -111, -109,
-108, -108, -106, -104, -103, -101, -99, -98, -97, -94, -93, -90, -89, -87, -85,
-82, -81, -79, -77, -75, -72, -70, -69, -67, -64, -62, -59, -58, -55, -54, -52,
-50, -48, -46, -43, -41, -39, -37, -36, -33, -31, -29, -28, -26, -23, -21, -19,
-17, -16, -15, -12, -11, -10, -8, -6, -5, -4, -4, -2, -1, 0, 0, 1, 2, 2, 2, 3,
2, 2, 3, 3, 2, 2, 2, 1, 2, 1, 1, 0, 1, -1, 0, -1, -2, -1, -2, -2, -2, -2, -2,
-3, -2, -2, -3, -3, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, };

#endif /* AKWF_1653_512_H_ */
