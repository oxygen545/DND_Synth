#ifndef AKWF_0130_512_H_
#define AKWF_0130_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0130_512_NUM_CELLS 512
#define AKWF_0130_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0130_512_DATA [] = {1,
3, 4, 6, 8, 12, 12, 12, 13, 11, 11, 12, 13, 13, 14, 14, 18, 22, 24, 28, 30, 34,
40, 42, 47, 50, 50, 53, 54, 53, 55, 55, 53, 53, 53, 55, 56, 57, 56, 57, 60, 57,
59, 62, 62, 64, 63, 64, 65, 64, 60, 61, 59, 55, 55, 55, 50, 51, 50, 51, 50, 51,
55, 59, 58, 58, 63, 67, 66, 66, 71, 71, 68, 71, 73, 74, 71, 74, 77, 75, 76, 77,
78, 81, 83, 81, 85, 91, 92, 91, 95, 97, 98, 98, 98, 101, 100, 96, 96, 97, 93,
89, 86, 84, 79, 70, 65, 61, 54, 44, 34, 28, 24, 14, 4, 3, -6, -16, -20, -24,
-29, -36, -42, -44, -45, -49, -53, -54, -55, -61, -65, -63, -64, -70, -73, -76,
-80, -86, -90, -93, -102, -105, -108, -116, -115, -118, -123, -124, -126, -126,
-124, -128, -126, -122, -122, -121, -120, -116, -116, -111, -112, -109, -105,
-106, -102, -99, -100, -97, -96, -92, -89, -89, -83, -81, -81, -73, -68, -65,
-58, -54, -50, -46, -43, -39, -35, -30, -28, -26, -23, -22, -19, -16, -15, -10,
-7, -6, -1, 2, 4, 4, 7, 10, 10, 8, 10, 12, 11, 11, 10, 8, 6, 8, 5, 3, 3, 1, 2,
0, -2, -2, -1, -3, -2, -2, -2, 1, 4, 7, 6, 10, 13, 14, 16, 14, 15, 16, 12, 10,
10, 7, 4, -1, -3, -6, -11, -13, -15, -19, -20, -19, -20, -21, -22, -23, -19,
-16, -14, -13, -8, -2, 1, 3, 7, 12, 16, 19, 22, 26, 29, 29, 33, 36, 36, 37, 38,
41, 41, 40, 44, 46, 44, 44, 51, 51, 48, 52, 53, 57, 60, 60, 61, 67, 67, 66, 67,
68, 72, 72, 71, 71, 74, 75, 76, 75, 76, 77, 79, 77, 78, 80, 77, 79, 78, 77, 75,
76, 75, 74, 70, 70, 70, 69, 67, 64, 63, 62, 63, 63, 57, 58, 61, 56, 58, 58, 54,
58, 56, 53, 55, 51, 51, 50, 46, 44, 43, 41, 36, 33, 30, 24, 20, 18, 13, 6, 0,
-5, -9, -19, -23, -26, -32, -41, -43, -44, -50, -51, -55, -58, -61, -64, -64,
-65, -66, -67, -71, -69, -69, -74, -70, -70, -75, -72, -71, -72, -69, -66, -68,
-64, -61, -59, -56, -55, -50, -44, -41, -37, -34, -30, -25, -24, -20, -17, -13,
-15, -13, -9, -6, -9, -8, -5, -5, -5, -4, -1, -1, -5, -3, 1, -1, -4, -6, -7,
-10, -15, -16, -20, -24, -28, -30, -35, -40, -41, -42, -43, -46, -46, -44, -44,
-44, -40, -42, -41, -39, -38, -35, -36, -34, -33, -31, -30, -29, -29, -27, -27,
-28, -27, -25, -24, -26, -24, -20, -22, -22, -20, -20, -19, -19, -18, -18, -18,
-20, -17, -17, -20, -23, -25, -26, -29, -32, -35, -36, -39, -46, -47, -47, -50,
-55, -54, -54, -55, -58, -58, -56, -56, -55, -56, -56, -52, -49, -50, -46, -41,
-42, -36, -30, -29, -24, -19, -17, -9, -7, -4, };

#endif /* AKWF_0130_512_H_ */
