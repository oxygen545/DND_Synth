#ifndef AKWF_1202_512_H_
#define AKWF_1202_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1202_512_NUM_CELLS 512
#define AKWF_1202_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1202_512_DATA [] = {5,
12, 18, 25, 30, 37, 43, 48, 54, 60, 65, 72, 75, 81, 85, 91, 94, 99, 103, 106,
110, 113, 115, 118, 120, 122, 124, 125, 126, 127, 127, 127, 127, 127, 127, 126,
126, 124, 122, 121, 119, 117, 114, 112, 109, 105, 103, 100, 96, 93, 90, 86, 82,
78, 74, 71, 67, 63, 60, 55, 52, 47, 45, 41, 38, 34, 30, 28, 25, 22, 19, 17, 15,
12, 11, 8, 7, 4, 3, 3, 1, 1, 0, 0, 0, 1, 0, 0, 1, 2, 3, 3, 5, 6, 7, 10, 11, 13,
14, 16, 17, 20, 22, 23, 26, 28, 30, 32, 34, 37, 38, 40, 42, 44, 46, 47, 49, 50,
52, 52, 53, 54, 56, 56, 57, 57, 57, 57, 57, 56, 57, 57, 56, 55, 54, 53, 51, 51,
48, 47, 46, 44, 42, 41, 39, 36, 35, 33, 30, 28, 27, 24, 22, 20, 18, 17, 14, 12,
11, 9, 8, 6, 4, 4, 2, 2, 2, 1, 1, 0, 0, 0, 1, 0, 2, 3, 4, 5, 7, 8, 10, 12, 14,
17, 19, 22, 24, 28, 31, 34, 37, 40, 44, 48, 52, 56, 59, 63, 67, 71, 74, 78, 82,
86, 90, 92, 96, 100, 102, 105, 108, 112, 114, 117, 119, 121, 122, 123, 125, 126,
127, 127, 127, 127, 127, 127, 126, 125, 124, 123, 120, 118, 115, 112, 110, 106,
103, 99, 94, 91, 87, 81, 77, 71, 66, 61, 54, 48, 43, 37, 30, 26, 19, 12, 6, -1,
-7, -13, -19, -26, -32, -39, -44, -49, -56, -61, -67, -72, -76, -81, -87, -91,
-95, -99, -104, -108, -110, -114, -116, -118, -121, -122, -124, -125, -126,
-128, -128, -128, -128, -127, -127, -125, -125, -124, -122, -119, -119, -116,
-113, -111, -108, -105, -103, -99, -95, -92, -88, -85, -81, -78, -74, -70, -66,
-62, -59, -55, -51, -47, -44, -41, -37, -34, -30, -26, -24, -21, -18, -16, -13,
-11, -10, -8, -6, -5, -4, -2, -2, -1, 0, 0, 0, 1, 0, -1, -1, -2, -2, -4, -5, -7,
-8, -9, -11, -13, -15, -17, -18, -20, -22, -25, -26, -29, -30, -33, -35, -37,
-39, -40, -43, -44, -46, -48, -49, -51, -53, -53, -54, -55, -56, -56, -56, -57,
-57, -57, -57, -57, -57, -56, -55, -55, -54, -53, -51, -50, -49, -48, -46, -44,
-41, -41, -38, -37, -34, -32, -30, -28, -25, -24, -22, -19, -18, -16, -14, -12,
-11, -8, -8, -6, -4, -3, -2, -1, -2, -1, 0, 0, 1, 0, -1, -1, -2, -3, -4, -5, -7,
-9, -10, -12, -14, -18, -20, -23, -25, -28, -31, -35, -38, -42, -45, -49, -52,
-56, -61, -64, -68, -71, -76, -79, -83, -86, -90, -93, -97, -100, -104, -107,
-109, -112, -114, -118, -120, -121, -123, -124, -125, -127, -127, -128, -128,
-128, -127, -127, -126, -125, -123, -122, -120, -118, -115, -112, -109, -105,
-102, -98, -94, -89, -85, -80, -76, -71, -65, -59, -54, -47, -41, -36, -30, -23,
-17, -11, -4, 0, };

#endif /* AKWF_1202_512_H_ */
