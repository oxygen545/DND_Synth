#ifndef AKWF_1872_512_H_
#define AKWF_1872_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1872_512_NUM_CELLS 512
#define AKWF_1872_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1872_512_DATA [] = {0,
5, 10, 16, 21, 26, 31, 35, 40, 45, 50, 54, 59, 64, 68, 72, 76, 80, 84, 87, 91,
94, 97, 100, 103, 106, 108, 111, 113, 114, 118, 119, 119, 122, 122, 124, 125,
126, 126, 125, 126, 126, 126, 125, 126, 125, 123, 123, 122, 121, 118, 118, 116,
114, 113, 111, 108, 106, 103, 102, 99, 97, 94, 92, 89, 86, 83, 80, 77, 75, 71,
67, 65, 61, 58, 56, 53, 49, 46, 43, 41, 37, 34, 31, 28, 25, 22, 19, 16, 12, 9,
6, 2, -2, -6, -9, -12, -17, -20, -23, -27, -31, -35, -39, -43, -46, -50, -53,
-56, -61, -64, -68, -72, -75, -77, -81, -84, -88, -90, -94, -97, -99, -102,
-104, -106, -109, -110, -112, -114, -117, -118, -120, -121, -122, -124, -124,
-126, -126, -127, -127, -127, -128, -127, -128, -128, -127, -127, -127, -126,
-126, -125, -124, -123, -122, -121, -120, -118, -117, -115, -114, -112, -111,
-108, -108, -106, -103, -101, -100, -97, -95, -92, -91, -89, -86, -84, -82, -79,
-76, -75, -72, -71, -69, -66, -64, -61, -60, -57, -55, -52, -50, -47, -44, -41,
-39, -36, -33, -29, -26, -22, -19, -16, -13, -9, -6, -3, 1, 5, 8, 12, 15, 18,
22, 25, 29, 32, 35, 39, 42, 46, 48, 52, 54, 57, 60, 62, 65, 67, 69, 72, 74, 76,
79, 81, 82, 83, 84, 86, 88, 90, 90, 91, 92, 93, 94, 94, 94, 94, 94, 96, 95, 95,
95, 94, 94, 93, 92, 92, 90, 89, 89, 87, 86, 85, 85, 83, 81, 79, 79, 76, 75, 72,
71, 70, 67, 66, 63, 63, 60, 58, 55, 53, 52, 50, 48, 45, 43, 42, 40, 37, 35, 33,
32, 30, 28, 26, 24, 21, 21, 19, 17, 15, 14, 12, 11, 10, 9, 7, 6, 5, 4, 2, 2, 0,
0, -1, -1, -1, -3, -3, -3, -4, -4, -5, -5, -5, -4, -4, -4, -5, -4, -4, -4, -4,
-3, -2, -1, 0, 0, 1, 1, 2, 3, 3, 4, 5, 5, 7, 9, 9, 10, 11, 13, 13, 15, 15, 17,
18, 20, 21, 21, 23, 23, 25, 27, 28, 28, 30, 32, 32, 33, 34, 34, 37, 38, 38, 39,
40, 41, 42, 43, 44, 45, 45, 46, 47, 48, 48, 49, 49, 51, 50, 51, 52, 51, 52, 52,
52, 52, 52, 52, 51, 51, 51, 51, 50, 49, 47, 46, 45, 43, 41, 40, 37, 35, 32, 29,
27, 25, 23, 19, 16, 12, 9, 6, 3, -1, -5, -8, -11, -15, -18, -23, -27, -30, -34,
-37, -41, -45, -49, -52, -55, -60, -63, -66, -69, -72, -77, -79, -83, -85, -88,
-90, -94, -97, -100, -102, -104, -107, -108, -111, -112, -114, -116, -117, -119,
-120, -121, -123, -123, -124, -125, -125, -125, -126, -127, -127, -127, -125,
-125, -124, -124, -123, -122, -119, -116, -114, -111, -109, -107, -104, -100,
-97, -93, -89, -85, -81, -76, -72, -68, -63, -58, -54, -49, -43, -39, -34, -29,
-23, -18, -12, -8, -2, };

#endif /* AKWF_1872_512_H_ */
