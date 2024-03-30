#ifndef AKWF_1966_512_H_
#define AKWF_1966_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1966_512_NUM_CELLS 512
#define AKWF_1966_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1966_512_DATA [] = {0,
1, 1, 2, 2, 2, 2, 3, 2, 2, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 7, 7, 7, 7, 8, 7,
8, 8, 9, 8, 9, 10, 9, 10, 10, 11, 11, 15, 19, 22, 26, 29, 33, 36, 41, 43, 47,
51, 54, 59, 61, 65, 68, 73, 76, 80, 80, 81, 83, 84, 86, 86, 89, 89, 91, 93, 93,
95, 96, 97, 100, 99, 102, 103, 104, 104, 105, 105, 106, 106, 106, 106, 107, 107,
107, 108, 109, 108, 109, 110, 110, 109, 110, 112, 111, 112, 112, 113, 114, 114,
114, 115, 115, 116, 117, 118, 118, 118, 119, 119, 119, 120, 120, 120, 120, 120,
120, 120, 119, 119, 118, 119, 119, 118, 118, 119, 118, 119, 118, 117, 117, 117,
117, 117, 117, 116, 117, 116, 116, 115, 115, 115, 115, 114, 114, 114, 113, 113,
113, 113, 113, 111, 110, 110, 109, 108, 108, 107, 106, 105, 105, 104, 104, 103,
102, 101, 100, 100, 99, 98, 97, 97, 96, 94, 94, 94, 92, 91, 90, 90, 89, 87, 87,
86, 85, 84, 83, 82, 82, 79, 79, 78, 77, 75, 73, 73, 71, 70, 69, 68, 67, 66, 65,
64, 63, 60, 60, 59, 57, 55, 54, 53, 51, 50, 48, 47, 47, 45, 43, 42, 40, 40, 37,
37, 35, 34, 33, 31, 29, 29, 26, 25, 24, 22, 21, 20, 18, 17, 16, 14, 12, 10, 9,
7, 7, 5, 3, 3, 0, -2, -2, -5, -6, -8, -9, -10, -12, -13, -14, -16, -17, -19,
-21, -22, -23, -25, -27, -28, -29, -31, -32, -34, -35, -37, -38, -40, -41, -43,
-44, -46, -47, -48, -51, -51, -53, -54, -55, -57, -58, -59, -61, -62, -64, -65,
-66, -68, -69, -71, -72, -73, -74, -75, -77, -78, -79, -81, -81, -83, -84, -84,
-86, -87, -88, -89, -90, -92, -93, -94, -96, -96, -97, -97, -99, -100, -101,
-101, -102, -103, -104, -105, -105, -107, -107, -108, -109, -110, -111, -112,
-113, -113, -114, -114, -116, -116, -117, -116, -117, -118, -119, -119, -120,
-121, -121, -121, -122, -123, -124, -124, -124, -124, -124, -125, -126, -125,
-126, -126, -126, -126, -126, -127, -127, -127, -127, -128, -127, -127, -128,
-128, -128, -128, -128, -128, -128, -127, -127, -127, -127, -126, -127, -126,
-127, -127, -126, -126, -125, -125, -126, -124, -124, -125, -123, -123, -123,
-123, -122, -122, -120, -120, -120, -119, -118, -118, -118, -117, -116, -117,
-115, -115, -114, -112, -111, -110, -110, -109, -108, -108, -107, -105, -105,
-104, -102, -102, -101, -100, -99, -98, -97, -96, -94, -93, -92, -90, -89, -87,
-87, -85, -84, -83, -81, -80, -79, -78, -77, -75, -74, -72, -70, -69, -66, -65,
-64, -62, -61, -59, -58, -56, -54, -53, -52, -50, -48, -46, -46, -43, -42, -40,
-39, -38, -36, -34, -33, -32, -31, -28, -27, -26, -24, -23, -21, -20, -18, -18,
-17, -15, -14, -13, -13, -12, -10, -10, -9, -8, -6, -5, -4, -4, -3, -2, -1, -1,
};

#endif /* AKWF_1966_512_H_ */
