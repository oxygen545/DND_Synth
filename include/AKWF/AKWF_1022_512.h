#ifndef AKWF_1022_512_H_
#define AKWF_1022_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1022_512_NUM_CELLS 512
#define AKWF_1022_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1022_512_DATA [] = {2,
4, 6, 8, 11, 15, 16, 20, 21, 23, 26, 28, 32, 33, 36, 38, 40, 43, 45, 47, 49, 51,
52, 55, 58, 59, 61, 64, 65, 66, 69, 71, 71, 74, 75, 77, 79, 80, 82, 84, 85, 87,
88, 90, 91, 92, 94, 95, 96, 97, 99, 100, 101, 101, 103, 104, 105, 106, 107, 108,
109, 110, 110, 110, 111, 112, 113, 114, 114, 114, 115, 117, 117, 117, 118, 118,
119, 119, 120, 120, 121, 121, 122, 122, 122, 122, 123, 123, 123, 124, 124, 124,
124, 125, 125, 125, 125, 126, 125, 126, 126, 127, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 125, 125,
125, 125, 125, 125, 125, 125, 125, 124, 124, 123, 124, 123, 123, 122, 123, 122,
121, 122, 121, 120, 120, 120, 119, 119, 117, 118, 117, 117, 116, 115, 115, 114,
114, 113, 112, 111, 110, 110, 110, 108, 108, 106, 105, 104, 104, 102, 101, 99,
99, 98, 97, 95, 94, 92, 92, 90, 89, 87, 85, 84, 82, 82, 79, 77, 76, 74, 73, 71,
69, 67, 65, 63, 62, 60, 57, 56, 53, 51, 50, 47, 45, 43, 41, 39, 36, 34, 32, 29,
27, 24, 23, 20, 17, 14, 13, 10, 7, 5, 2, -1, -3, -5, -8, -9, -12, -15, -17, -20,
-22, -24, -27, -29, -32, -35, -36, -39, -41, -43, -45, -47, -49, -51, -53, -56,
-57, -59, -62, -63, -65, -67, -69, -71, -73, -74, -76, -78, -80, -81, -82, -84,
-86, -87, -88, -91, -91, -92, -94, -96, -97, -99, -100, -100, -101, -102, -103,
-105, -105, -107, -107, -109, -108, -109, -110, -111, -112, -113, -113, -115,
-114, -116, -115, -116, -117, -117, -118, -118, -119, -119, -120, -120, -120,
-120, -121, -122, -122, -122, -122, -123, -123, -124, -124, -124, -125, -125,
-125, -125, -126, -125, -125, -126, -126, -126, -126, -127, -127, -127, -126,
-127, -126, -127, -128, -128, -127, -127, -127, -128, -127, -128, -128, -128,
-128, -128, -127, -127, -128, -127, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -127,
-128, -127, -126, -127, -126, -127, -126, -127, -126, -126, -125, -125, -125,
-125, -125, -125, -124, -124, -123, -124, -123, -122, -123, -122, -123, -121,
-122, -121, -120, -120, -120, -119, -118, -118, -118, -117, -116, -117, -116,
-115, -114, -114, -114, -113, -112, -110, -110, -110, -108, -108, -107, -106,
-105, -104, -103, -101, -101, -99, -98, -97, -96, -94, -94, -92, -91, -90, -88,
-87, -86, -84, -83, -80, -79, -78, -76, -74, -73, -70, -69, -66, -65, -64, -60,
-58, -57, -55, -53, -51, -49, -46, -45, -42, -40, -38, -36, -34, -31, -28, -26,
-24, -21, -19, -17, -14, -12, -10, -7, -4, -1, 0, };

#endif /* AKWF_1022_512_H_ */