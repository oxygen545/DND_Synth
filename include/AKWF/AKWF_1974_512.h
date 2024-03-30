#ifndef AKWF_1974_512_H_
#define AKWF_1974_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1974_512_NUM_CELLS 512
#define AKWF_1974_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1974_512_DATA [] = {7,
20, 28, 39, 49, 60, 68, 71, 75, 78, 80, 84, 87, 91, 94, 97, 100, 104, 106, 110,
113, 116, 119, 122, 127, 127, 125, 125, 122, 120, 118, 117, 116, 113, 112, 110,
108, 107, 106, 102, 101, 100, 98, 96, 95, 94, 94, 94, 93, 93, 92, 92, 91, 91,
90, 89, 89, 90, 89, 88, 87, 87, 87, 86, 85, 84, 83, 82, 81, 80, 78, 77, 77, 75,
74, 73, 72, 71, 70, 70, 67, 66, 66, 66, 64, 63, 62, 62, 61, 60, 60, 59, 58, 57,
57, 56, 55, 54, 53, 52, 51, 50, 50, 49, 48, 47, 47, 46, 44, 45, 43, 43, 41, 40,
40, 39, 38, 37, 37, 35, 34, 34, 33, 32, 32, 29, 28, 28, 27, 25, 26, 25, 24, 23,
22, 21, 20, 19, 18, 17, 16, 16, 15, 14, 13, 12, 12, 11, 10, 10, 8, 8, 7, 7, 6,
5, 5, 3, 3, 3, 3, 2, 2, 1, 1, 2, 2, 1, 1, 1, 0, 1, 0, 0, 0, 0, -1, -1, 0, 0, -1,
0, 0, 0, 0, 0, 1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, -1,
0, 0, 0, 1, -1, 0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, 0, 1, 0, -1, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0,
0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 1, 1, -1, 0, 0, -1, 0, 0, 0, 1, 0,
0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0,
0, -1, 0, -1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
-1, -2, -1, -2, -1, -2, -3, -2, -4, -4, -5, -5, -6, -7, -8, -8, -9, -10, -11,
-12, -13, -13, -14, -15, -15, -17, -17, -18, -19, -19, -21, -21, -23, -23, -24,
-25, -26, -27, -28, -28, -29, -30, -30, -32, -34, -33, -35, -35, -36, -37, -39,
-39, -40, -40, -41, -42, -43, -44, -46, -46, -47, -48, -49, -50, -50, -51, -52,
-53, -54, -54, -55, -56, -57, -57, -58, -59, -59, -60, -61, -62, -63, -63, -64,
-64, -66, -68, -68, -69, -70, -72, -73, -74, -75, -75, -77, -78, -79, -80, -82,
-82, -84, -85, -86, -86, -87, -87, -87, -87, -88, -89, -89, -89, -89, -90, -90,
-92, -91, -92, -92, -92, -93, -94, -96, -98, -99, -101, -103, -104, -106, -108,
-110, -112, -114, -115, -118, -119, -121, -123, -124, -126, -122, -111, -101,
-91, -80, -70, -60, -49, -39, -28, -19, -8, -1, };

#endif /* AKWF_1974_512_H_ */
