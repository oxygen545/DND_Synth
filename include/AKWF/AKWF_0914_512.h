#ifndef AKWF_0914_512_H_
#define AKWF_0914_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0914_512_NUM_CELLS 512
#define AKWF_0914_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0914_512_DATA [] = {0,
1, 2, 2, 3, 4, 4, 5, 5, 6, 7, 8, 8, 8, 9, 9, 10, 10, 11, 12, 12, 14, 14, 14, 15,
16, 17, 17, 17, 18, 19, 19, 20, 21, 21, 22, 23, 23, 23, 24, 25, 25, 25, 27, 26,
28, 28, 29, 29, 30, 31, 31, 31, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38,
38, 39, 40, 40, 40, 41, 42, 42, 43, 43, 44, 45, 45, 45, 46, 46, 47, 47, 48, 49,
49, 50, 50, 51, 51, 52, 52, 53, 53, 53, 55, 54, 55, 56, 56, 56, 57, 58, 58, 58,
59, 59, 60, 59, 61, 62, 63, 63, 62, 64, 64, 64, 65, 64, 65, 66, 66, 67, 67, 68,
68, 69, 69, 69, 69, 70, 71, 71, 71, 72, 73, 74, 73, 74, 74, 74, 75, 75, 75, 77,
76, 77, 77, 78, 79, 79, 79, 79, 79, 80, 80, 81, 81, 83, 82, 83, 83, 84, 83, 84,
84, 85, 85, 85, 86, 87, 87, 87, 88, 88, 88, 88, 89, 89, 90, 90, 90, 91, 91, 92,
92, 92, 92, 93, 93, 93, 94, 94, 94, 94, 95, 96, 96, 96, 96, 97, 96, 97, 97, 98,
98, 98, 98, 99, 99, 100, 99, 100, 100, 100, 101, 101, 101, 102, 101, 102, 102,
102, 102, 103, 104, 104, 104, 105, 105, 105, 105, 106, 106, 107, 106, 106, 107,
106, 107, 107, 107, 108, 108, 108, 109, 107, 104, 102, 100, 99, 96, 93, 90, 87,
83, 79, 75, 70, 65, 60, 55, 50, 44, 39, 33, 27, 22, 17, 10, 5, -1, -7, -12, -18,
-22, -29, -33, -37, -43, -47, -52, -56, -61, -65, -68, -71, -76, -79, -82, -87,
-89, -93, -96, -98, -101, -103, -106, -108, -109, -112, -113, -115, -117, -119,
-119, -120, -122, -123, -123, -125, -124, -126, -127, -127, -127, -127, -127,
-128, -128, -128, -128, -127, -128, -128, -127, -127, -127, -128, -127, -127,
-127, -126, -126, -125, -124, -124, -123, -122, -122, -122, -121, -120, -121,
-119, -118, -118, -117, -118, -117, -115, -114, -114, -114, -114, -112, -111,
-111, -110, -110, -109, -108, -106, -106, -105, -104, -104, -103, -102, -102,
-102, -100, -99, -99, -98, -97, -96, -96, -95, -94, -93, -92, -92, -91, -90,
-89, -89, -88, -86, -86, -85, -84, -83, -83, -82, -82, -81, -80, -79, -78, -78,
-76, -76, -75, -74, -73, -73, -72, -72, -71, -70, -69, -69, -67, -67, -67, -65,
-64, -63, -63, -61, -62, -61, -60, -58, -59, -57, -57, -56, -55, -55, -54, -53,
-52, -51, -51, -50, -49, -49, -48, -48, -46, -46, -45, -44, -44, -43, -42, -43,
-41, -40, -39, -39, -38, -38, -36, -36, -35, -35, -33, -34, -33, -33, -31, -30,
-31, -29, -29, -28, -27, -27, -26, -26, -25, -23, -24, -23, -22, -21, -20, -20,
-20, -19, -18, -17, -16, -16, -15, -15, -13, -14, -12, -12, -11, -11, -10, -10,
-8, -8, -7, -8, -6, -6, -5, -4, -3, -3, -3, -2, 0, -1, 0, };

#endif /* AKWF_0914_512_H_ */