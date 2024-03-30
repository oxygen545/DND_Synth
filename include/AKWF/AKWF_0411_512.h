#ifndef AKWF_0411_512_H_
#define AKWF_0411_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0411_512_NUM_CELLS 512
#define AKWF_0411_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0411_512_DATA [] = {2,
10, 21, 26, 27, 22, 16, 9, 4, 1, 16, 42, 74, 107, 125, 127, 115, 94, 76, 64, 61,
61, 65, 69, 71, 74, 76, 80, 82, 81, 78, 74, 70, 68, 69, 71, 75, 80, 83, 84, 85,
84, 83, 83, 83, 82, 82, 83, 83, 84, 85, 86, 86, 87, 87, 87, 87, 87, 87, 87, 88,
88, 89, 86, 78, 68, 59, 54, 54, 57, 62, 70, 75, 79, 81, 80, 69, 54, 41, 34, 35,
41, 52, 63, 69, 72, 74, 74, 73, 72, 69, 68, 65, 64, 65, 66, 68, 70, 71, 70, 70,
68, 67, 65, 64, 63, 64, 63, 64, 64, 64, 64, 63, 63, 57, 47, 39, 33, 31, 32, 34,
35, 35, 32, 31, 31, 31, 37, 45, 56, 64, 68, 68, 65, 59, 53, 48, 44, 43, 33, 30,
34, 38, 46, 51, 51, 47, 37, 29, 23, 21, 20, 25, 41, 48, 51, 52, 54, 56, 57, 55,
55, 54, 51, 51, 52, 53, 54, 54, 54, 54, 53, 53, 51, 51, 50, 50, 50, 50, 49, 49,
50, 50, 49, 49, 48, 48, 48, 47, 47, 48, 42, 33, 24, 15, 9, 9, 12, 19, 24, 30,
33, 34, 33, 20, 3, -10, -16, -15, -7, 3, 12, 19, 22, 22, 18, 7, -2, -7, -11,
-10, -9, -6, -3, -2, -1, -3, -5, -9, -13, -17, -19, -21, -20, -20, -19, -18,
-18, -19, -19, -21, -21, -17, -11, -3, 1, 0, -2, -4, -4, -5, -4, -5, -6, -9, -6,
1, 8, 18, 21, 20, 15, 6, -2, -8, -16, -36, -38, -18, 7, 30, 39, 35, 21, 6, -7,
-15, -19, -22, -26, -30, -33, -33, -31, -29, -28, -30, -35, -40, -45, -48, -48,
-48, -46, -46, -46, -46, -47, -48, -48, -49, -51, -53, -54, -55, -56, -56, -57,
-57, -57, -57, -58, -59, -60, -60, -62, -61, -63, -63, -68, -77, -87, -96, -102,
-101, -98, -92, -85, -81, -77, -77, -79, -94, -108, -121, -127, -124, -117,
-106, -96, -90, -87, -87, -87, -88, -90, -91, -94, -96, -97, -95, -92, -90, -88,
-87, -87, -88, -90, -91, -91, -92, -92, -91, -90, -89, -87, -86, -87, -86, -86,
-93, -102, -109, -113, -113, -110, -107, -106, -106, -107, -106, -105, -105,
-97, -86, -77, -68, -62, -63, -65, -71, -74, -78, -81, -84, -92, -92, -88, -80,
-72, -67, -68, -73, -81, -88, -93, -93, -92, -84, -68, -62, -59, -56, -54, -52,
-51, -50, -52, -53, -53, -52, -52, -51, -49, -47, -47, -46, -46, -47, -47, -47,
-47, -47, -47, -47, -46, -45, -44, -44, -44, -45, -43, -44, -45, -44, -44, -44,
-50, -59, -68, -76, -80, -78, -74, -68, -62, -58, -54, -53, -56, -71, -85, -97,
-102, -98, -90, -79, -70, -63, -61, -60, -55, -46, -42, -41, -44, -47, -50, -51,
-50, -47, -43, -40, -38, -37, -37, -38, -36, -36, -36, -37, -36, -36, -36, -36,
-34, -34, -32, -24, -16, -9, -6, -6, -9, -10, -10, -9, -7, -8, -8, -8, -3, };

#endif /* AKWF_0411_512_H_ */
