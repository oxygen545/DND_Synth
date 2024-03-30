#ifndef AKWF_1587_512_H_
#define AKWF_1587_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1587_512_NUM_CELLS 512
#define AKWF_1587_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1587_512_DATA [] =
{12, 73, 81, 82, 86, 91, 98, 104, 113, 118, 125, 127, 127, 125, 122, 116, 110,
103, 98, 94, 93, 91, 92, 94, 96, 97, 98, 97, 97, 93, 91, 87, 84, 81, 78, 77, 76,
76, 77, 77, 77, 79, 78, 77, 75, 74, 72, 71, 68, 68, 67, 66, 67, 67, 66, 66, 67,
67, 67, 66, 65, 65, 63, 63, 62, 62, 61, 61, 61, 61, 61, 62, 60, 60, 60, 59, 60,
58, 58, 58, 57, 56, 56, 57, 57, 57, 57, 57, 56, 56, 55, 56, 55, 54, 54, 54, 53,
53, 52, 53, 53, 52, 52, 52, 51, 52, 52, 52, 51, 51, 51, 51, 50, 50, 50, 49, 49,
49, 48, 49, 48, 48, 47, 46, 47, 46, 46, 46, 46, 45, 45, 45, 45, 45, 43, 44, 44,
43, 43, 43, 43, 42, 42, 42, 42, 41, 41, 40, 41, 40, 40, 40, 39, 39, 38, 39, 39,
38, 37, 37, 36, 37, 37, 36, 36, 36, 36, 36, 35, 36, 35, 35, 34, 34, 34, 33, 33,
32, 33, 32, 33, 31, 31, 31, 31, 30, 30, 30, 30, 29, 29, 29, 28, 29, 28, 27, 28,
27, 27, 27, 27, 26, 26, 25, 25, 25, 24, 24, 25, 24, 23, 23, 23, 22, 23, 22, 22,
22, 21, 20, 21, 20, 21, 20, 20, 19, 20, 19, 19, 18, 18, 18, 17, 17, 18, 17, 17,
17, 16, 15, 15, 15, 15, 16, -39, -87, -89, -91, -92, -95, -94, -96, -97, -98,
-98, -99, -100, -100, -101, -101, -103, -101, -103, -102, -103, -104, -103,
-103, -103, -103, -104, -103, -103, -103, -102, -102, -102, -101, -102, -100,
-100, -99, -98, -98, -98, -98, -97, -97, -96, -95, -95, -95, -93, -93, -92, -92,
-91, -90, -90, -88, -88, -88, -87, -86, -86, -84, -84, -83, -82, -82, -81, -80,
-80, -79, -77, -76, -77, -76, -75, -74, -73, -72, -72, -71, -70, -70, -68, -68,
-67, -66, -66, -65, -64, -63, -63, -62, -61, -61, -59, -59, -58, -58, -57, -57,
-56, -55, -55, -53, -53, -52, -51, -50, -51, -49, -49, -48, -48, -47, -46, -46,
-45, -44, -44, -43, -42, -43, -41, -42, -41, -40, -39, -39, -38, -38, -38, -36,
-37, -36, -36, -36, -34, -34, -33, -33, -32, -32, -32, -31, -30, -30, -30, -30,
-28, -29, -28, -27, -27, -27, -27, -26, -26, -25, -25, -25, -25, -24, -24, -23,
-23, -22, -22, -22, -22, -21, -21, -21, -20, -20, -20, -19, -19, -19, -18, -19,
-19, -18, -18, -18, -17, -17, -16, -17, -16, -17, -16, -16, -15, -15, -15, -15,
-15, -14, -15, -14, -14, -14, -14, -13, -13, -13, -13, -13, -13, -13, -13, -12,
-12, -12, -12, -12, -11, -12, -12, -11, -12, -11, -11, -10, -11, -11, -11, -11,
-11, -11, -11, -10, -10, -10, -10, -10, -10, -11, -10, -10, -10, -10, -10, -10,
-11, -10, -10, -10, -10, -10, -10, -10, -9, -10, -10, -10, -10, -9, -10, -9,
-10, -9, -11, -10, -11, -8, -11, -10, };

#endif /* AKWF_1587_512_H_ */
