#ifndef AKWF_1973_512_H_
#define AKWF_1973_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1973_512_NUM_CELLS 512
#define AKWF_1973_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1973_512_DATA [] = {1,
11, 22, 32, 42, 52, 62, 68, 72, 74, 78, 82, 84, 88, 90, 94, 97, 101, 104, 107,
110, 114, 118, 120, 125, 127, 127, 126, 124, 123, 122, 120, 118, 117, 116, 114,
113, 111, 110, 108, 106, 105, 103, 102, 101, 99, 100, 99, 100, 99, 99, 99, 99,
98, 98, 98, 98, 97, 97, 96, 97, 96, 97, 96, 95, 95, 93, 93, 92, 91, 90, 89, 89,
88, 87, 87, 85, 85, 83, 83, 82, 81, 81, 80, 79, 78, 78, 77, 77, 77, 77, 75, 75,
75, 74, 73, 73, 72, 71, 71, 70, 69, 69, 69, 68, 67, 66, 65, 65, 65, 64, 64, 63,
62, 61, 61, 60, 60, 58, 58, 58, 57, 57, 56, 55, 54, 54, 53, 53, 51, 52, 50, 51,
49, 49, 49, 48, 47, 46, 46, 44, 44, 43, 44, 42, 42, 42, 41, 40, 39, 39, 38, 38,
37, 36, 36, 35, 34, 34, 33, 33, 32, 31, 30, 30, 30, 29, 29, 28, 27, 26, 26, 25,
24, 23, 23, 22, 22, 21, 20, 19, 19, 18, 19, 18, 16, 15, 15, 15, 14, 13, 13, 12,
11, 11, 10, 10, 10, 9, 8, 8, 7, 6, 6, 6, 5, 5, 5, 3, 3, 3, 3, 1, 1, 0, 0, 0, 1,
1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, -1, 1, -1, 0, 0, 1,
0, 0, 0, 1, -1, 0, 0, 1, -1, 1, 1, 0, 1, 0, 0, 0, -1, -1, -1, 1, 0, 0, 0, -1, 0,
0, 0, -1, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, -1,
0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -2, -2, -3, -2,
-3, -4, -4, -5, -5, -6, -5, -6, -7, -8, -8, -9, -9, -9, -9, -10, -11, -12, -12,
-13, -14, -14, -15, -15, -17, -16, -18, -18, -18, -19, -20, -21, -22, -22, -23,
-24, -24, -25, -25, -26, -26, -27, -27, -28, -29, -30, -30, -31, -31, -32, -33,
-33, -34, -34, -35, -36, -37, -37, -38, -38, -40, -40, -40, -41, -41, -41, -42,
-43, -44, -45, -45, -46, -46, -47, -47, -48, -49, -49, -50, -50, -52, -52, -53,
-53, -54, -54, -54, -56, -56, -56, -58, -59, -59, -59, -60, -62, -62, -62, -63,
-64, -65, -65, -65, -67, -67, -68, -68, -69, -70, -70, -71, -72, -72, -72, -73,
-74, -74, -74, -75, -75, -76, -76, -77, -78, -78, -78, -78, -80, -81, -81, -82,
-83, -84, -84, -85, -86, -87, -88, -89, -91, -90, -91, -92, -93, -94, -95, -95,
-95, -96, -96, -97, -96, -97, -96, -97, -97, -97, -97, -97, -98, -98, -98, -99,
-99, -99, -101, -103, -104, -105, -106, -108, -109, -110, -112, -114, -116,
-117, -119, -120, -122, -123, -125, -126, -127, -118, -108, -98, -88, -77, -67,
-56, -47, -37, -26, -16, -5, };

#endif /* AKWF_1973_512_H_ */