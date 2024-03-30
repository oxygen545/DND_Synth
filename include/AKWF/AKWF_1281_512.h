#ifndef AKWF_1281_512_H_
#define AKWF_1281_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1281_512_NUM_CELLS 512
#define AKWF_1281_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1281_512_DATA [] = {2,
6, 10, 13, 17, 22, 26, 30, 34, 38, 42, 47, 50, 55, 59, 63, 67, 69, 73, 77, 80,
83, 86, 88, 90, 92, 94, 96, 97, 98, 99, 101, 101, 102, 101, 102, 101, 102, 102,
102, 102, 101, 100, 100, 98, 97, 95, 95, 93, 92, 90, 89, 87, 84, 82, 80, 78, 75,
73, 70, 67, 64, 61, 57, 53, 49, 46, 42, 38, 34, 30, 25, 23, 18, 15, 11, 7, 4, 2,
-1, -4, -7, -10, -12, -15, -18, -20, -24, -27, -31, -33, -37, -39, -42, -46,
-47, -51, -53, -56, -58, -60, -62, -63, -64, -66, -67, -67, -68, -69, -69, -69,
-70, -69, -70, -69, -69, -67, -66, -65, -64, -62, -61, -58, -57, -54, -52, -49,
-45, -42, -39, -35, -31, -28, -25, -21, -18, -14, -10, -6, -2, 1, 4, 6, 9, 10,
11, 13, 18, 19, 23, 29, 35, 36, 41, 44, 48, 45, 50, 53, 55, 56, 65, 71, 73, 76,
80, 89, 5, 5, 28, 22, 29, 22, 25, 19, 22, 18, 20, 17, 18, 15, 17, 16, 16, 16,
15, 15, 15, 14, 13, 10, 9, 8, 6, 5, 4, 1, -2, -3, -6, -7, -11, -12, -16, -17,
-20, -22, -25, -27, -31, -33, -37, -39, -46, -51, -58, -63, -69, -74, -80, -85,
-89, -96, -100, -106, -108, -118, -115, -128, -79, -49, -74, -63, -72, -66, -73,
-71, -75, -75, -78, -79, -82, -82, -84, -85, -87, -89, -90, -91, -91, -93, -92,
-95, -93, -95, -94, -95, -94, -95, -95, -94, -93, -92, -92, -91, -90, -89, -86,
-86, -83, -81, -78, -76, -72, -69, -66, -62, -59, -55, -50, -47, -43, -39, -35,
-31, -29, -26, -22, -19, -15, -12, -8, -4, 0, 3, 7, 12, 16, 20, 23, 26, 30, 34,
38, 40, 44, 47, 50, 52, 56, 58, 59, 61, 63, 65, 66, 67, 68, 69, 69, 69, 69, 70,
69, 70, 69, 70, 70, 69, 68, 67, 66, 64, 62, 60, 57, 54, 52, 49, 45, 43, 40, 37,
34, 31, 28, 23, 20, 16, 13, 9, 5, 2, -1, -4, -8, -11, -14, -17, -19, -20, -23,
-25, -26, -28, -29, -31, -31, -31, -32, -31, -32, -31, -30, -28, -27, -25, -24,
-20, -18, -14, -11, -9, -5, -3, 0, 3, 7, 9, 13, 18, 21, 25, 29, 34, 38, 43, 48,
52, 57, 62, 66, 70, 74, 77, 81, 83, 86, 88, 91, 92, 94, 95, 96, 96, 97, 96, 96,
97, 97, 97, 95, 92, 79, 66, 58, 55, 53, 52, 52, 51, 50, 49, 48, 46, 44, 41, 39,
36, 34, 31, 27, 25, 23, 19, 16, 14, 10, 7, 5, 2, 1, -2, -4, -5, -6, -9, -10,
-13, -15, -19, -21, -24, -27, -30, -34, -36, -39, -42, -44, -47, -50, -52, -55,
-56, -59, -60, -61, -62, -63, -64, -65, -65, -66, -66, -66, -66, -66, -64, -63,
-63, -62, -61, -59, -58, -56, -54, -52, -48, -46, -42, -39, -35, -32, -28, -23,
-19, -15, -10, -7, -3, 0, };

#endif /* AKWF_1281_512_H_ */
