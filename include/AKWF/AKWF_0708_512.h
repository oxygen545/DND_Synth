#ifndef AKWF_0708_512_H_
#define AKWF_0708_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0708_512_NUM_CELLS 512
#define AKWF_0708_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0708_512_DATA [] = {0,
10, 20, 29, 36, 44, 51, 57, 61, 64, 66, 68, 67, 66, 62, 61, 57, 53, 50, 45, 42,
37, 33, 28, 25, 21, 18, 15, 13, 10, 8, 6, 5, 5, 4, 3, 4, 4, 5, 5, 7, 9, 10, 13,
15, 17, 19, 22, 25, 28, 32, 34, 37, 41, 44, 48, 51, 54, 57, 59, 62, 64, 66, 68,
70, 70, 70, 70, 71, 71, 70, 70, 70, 70, 70, 71, 72, 74, 76, 79, 83, 87, 92, 96,
101, 106, 111, 116, 121, 124, 126, 127, 127, 127, 126, 124, 120, 116, 110, 105,
98, 91, 83, 77, 71, 63, 56, 50, 44, 38, 33, 28, 24, 19, 16, 13, 10, 8, 5, 4, 3,
2, 2, 1, 0, 0, 0, -1, 1, 0, 0, 0, -1, -1, -2, -3, -3, -5, -6, -8, -11, -14, -16,
-20, -25, -30, -34, -39, -46, -51, -58, -65, -71, -79, -85, -93, -99, -106,
-111, -117, -120, -124, -126, -128, -127, -127, -125, -122, -119, -115, -110,
-106, -101, -95, -90, -86, -82, -78, -75, -73, -73, -71, -70, -70, -70, -70,
-70, -70, -71, -71, -71, -69, -69, -67, -66, -64, -61, -59, -56, -52, -50, -47,
-43, -41, -37, -33, -31, -28, -24, -21, -19, -17, -14, -11, -10, -8, -7, -5, -5,
-3, -4, -3, -4, -4, -6, -7, -8, -11, -13, -16, -18, -22, -25, -30, -33, -37,
-42, -46, -51, -54, -59, -62, -64, -66, -67, -66, -66, -64, -60, -56, -50, -43,
-35, -26, -17, -7, 3, 12, 22, 30, 39, 47, 54, 59, 64, 66, 69, 68, 69, 67, 64,
62, 58, 54, 49, 44, 40, 34, 29, 23, 18, 12, 7, 3, -2, -7, -12, -17, -22, -26,
-30, -34, -39, -43, -46, -49, -52, -56, -59, -62, -64, -67, -68, -70, -72, -73,
-74, -74, -75, -74, -74, -74, -74, -73, -72, -71, -71, -70, -69, -69, -68, -69,
-68, -68, -68, -68, -67, -68, -67, -66, -66, -64, -62, -58, -55, -51, -47, -40,
-35, -30, -23, -17, -12, -6, -2, 3, 5, 8, 8, 8, 7, 5, 3, -1, -5, -10, -16, -21,
-27, -32, -38, -42, -47, -50, -54, -56, -59, -59, -62, -60, -60, -59, -57, -55,
-51, -48, -44, -38, -34, -28, -22, -17, -11, -5, 2, 8, 14, 20, 26, 32, 37, 42,
47, 50, 53, 56, 59, 60, 61, 62, 60, 60, 58, 55, 52, 48, 43, 39, 34, 29, 22, 17,
12, 8, 3, -2, -5, -6, -9, -8, -7, -6, -3, 1, 5, 10, 15, 22, 27, 33, 40, 45, 49,
54, 57, 60, 64, 65, 66, 66, 67, 68, 68, 68, 69, 68, 68, 68, 69, 70, 70, 71, 71,
72, 73, 74, 74, 74, 74, 75, 75, 74, 73, 72, 71, 69, 67, 65, 63, 60, 57, 55, 50,
48, 43, 40, 36, 31, 28, 22, 18, 14, 9, 3, -1, -6, -11, -17, -21, -28, -33, -38,
-43, -48, -53, -56, -61, -65, -66, -68, -69, -68, -66, -64, -60, -55, -49, -42,
-34, -25, -15, -5, };

#endif /* AKWF_0708_512_H_ */
