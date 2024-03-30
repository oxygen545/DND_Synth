#ifndef AKWF_1698_512_H_
#define AKWF_1698_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1698_512_NUM_CELLS 512
#define AKWF_1698_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1698_512_DATA [] = {1,
2, 3, 3, 4, 5, 6, 6, 6, 7, 7, 8, 7, 7, 7, 8, 8, 8, 9, 10, 20, 32, 39, 46, 48,
50, 50, 49, 47, 46, 44, 43, 40, 37, 35, 33, 31, 29, 27, 25, 26, 28, 32, 37, 42,
44, 45, 46, 46, 45, 44, 41, 40, 37, 35, 34, 31, 29, 26, 25, 24, 21, 21, 19, 28,
47, 61, 71, 77, 81, 83, 83, 82, 80, 76, 72, 68, 64, 61, 66, 74, 84, 89, 93, 93,
92, 90, 87, 83, 79, 75, 70, 65, 62, 60, 74, 93, 104, 111, 115, 116, 114, 112,
107, 102, 97, 90, 85, 79, 76, 77, 79, 83, 88, 92, 95, 95, 92, 90, 87, 83, 79,
77, 72, 67, 62, 58, 52, 48, 42, 35, 29, 25, 23, 25, 25, 25, 26, 24, 23, 22, 20,
19, 17, 15, 15, 13, 12, 12, 12, 13, 13, 14, 16, 20, 36, 57, 73, 85, 92, 96, 96,
95, 92, 87, 83, 78, 72, 68, 64, 77, 97, 106, 113, 114, 114, 111, 107, 101, 95,
88, 81, 75, 69, 63, 58, 52, 48, 43, 39, 35, 31, 27, 25, 28, 36, 46, 54, 59, 61,
61, 60, 57, 55, 51, 47, 44, 39, 36, 32, 29, 25, 22, 19, 17, 15, 12, 10, 8, 6, 5,
3, 2, 1, 0, -1, 0, 3, 14, 30, 41, 49, 53, 55, 56, 54, 53, 50, 46, 43, 39, 36,
32, 30, 26, 23, 19, 16, 14, 13, 19, 28, 33, 36, 38, 38, 37, 36, 34, 31, 29, 26,
24, 21, 18, 16, 14, 13, 13, 16, 20, 22, 25, 25, 24, 24, 23, 20, 19, 17, 16, 11,
6, -2, -15, -25, -32, -36, -39, -40, -41, -40, -40, -39, -38, -36, -34, -32,
-30, -29, -26, -25, -25, -23, -21, -20, -19, -17, -29, -48, -62, -71, -75, -78,
-78, -78, -76, -73, -69, -67, -71, -89, -104, -111, -116, -115, -114, -110,
-106, -100, -94, -88, -83, -77, -71, -66, -62, -56, -52, -48, -47, -51, -59,
-72, -88, -104, -117, -124, -126, -125, -121, -116, -111, -105, -100, -104,
-112, -115, -115, -113, -110, -105, -99, -92, -86, -80, -73, -67, -65, -72, -79,
-82, -82, -82, -79, -75, -72, -67, -62, -58, -55, -54, -53, -54, -55, -57, -59,
-61, -62, -65, -66, -70, -83, -102, -116, -124, -128, -128, -125, -121, -115,
-109, -100, -94, -87, -80, -72, -65, -65, -74, -82, -86, -86, -85, -84, -80,
-75, -71, -65, -60, -55, -50, -45, -41, -40, -44, -53, -61, -65, -68, -68, -67,
-65, -62, -57, -54, -50, -46, -42, -38, -34, -32, -30, -28, -27, -29, -33, -34,
-36, -34, -31, -27, -25, -21, -19, -16, -14, -14, -18, -27, -40, -49, -54, -58,
-58, -56, -56, -53, -49, -47, -44, -39, -36, -34, -30, -26, -25, -23, -19, -17,
-15, -14, -12, -11, -9, -7, -7, -6, -6, -10, -15, -19, -22, -24, -24, -24, -23,
-21, -21, -18, -16, -14, -13, -11, -9, -8, -6, -4, -3, -2, -1, 0, };

#endif /* AKWF_1698_512_H_ */