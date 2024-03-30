#ifndef AKWF_0903_512_H_
#define AKWF_0903_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0903_512_NUM_CELLS 512
#define AKWF_0903_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0903_512_DATA [] = {1,
4, 6, 10, 12, 13, 17, 18, 21, 24, 26, 29, 31, 33, 35, 37, 39, 41, 42, 44, 46,
48, 49, 51, 52, 54, 55, 56, 57, 57, 59, 59, 61, 61, 61, 62, 63, 64, 64, 65, 66,
66, 66, 67, 67, 68, 68, 68, 69, 70, 71, 72, 73, 72, 73, 73, 74, 76, 76, 77, 77,
79, 80, 81, 81, 82, 84, 84, 86, 87, 87, 90, 91, 92, 93, 94, 94, 95, 96, 98, 99,
100, 101, 102, 102, 103, 104, 105, 107, 107, 108, 109, 109, 109, 110, 111, 112,
112, 113, 114, 114, 114, 115, 115, 115, 115, 116, 116, 116, 116, 116, 117, 117,
117, 117, 117, 117, 117, 117, 117, 118, 117, 118, 118, 118, 118, 118, 118, 119,
118, 119, 119, 119, 119, 119, 119, 120, 119, 120, 120, 120, 121, 121, 120, 121,
120, 121, 122, 122, 122, 122, 122, 123, 123, 123, 123, 124, 123, 125, 124, 125,
125, 126, 126, 126, 126, 127, 126, 126, 126, 126, 127, 127, 127, 126, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110, 90, 105, 112,
104, 96, 88, 83, 80, 77, 74, 71, 68, 66, 63, 59, 55, 52, 50, 47, 44, 43, 41, 39,
38, 35, 34, 32, 31, 28, 27, 25, 23, 21, 19, 17, 16, 14, 10, 8, 7, 4, 2, 0, -3,
-5, -9, -11, -14, -15, -19, -21, -24, -26, -28, -30, -32, -34, -37, -38, -40,
-43, -44, -46, -47, -49, -51, -52, -53, -55, -56, -56, -57, -58, -59, -60, -60,
-62, -62, -63, -64, -63, -65, -64, -65, -67, -67, -67, -67, -68, -69, -69, -69,
-69, -71, -72, -72, -73, -73, -74, -75, -75, -76, -77, -78, -80, -79, -81, -83,
-83, -84, -85, -86, -88, -88, -90, -90, -92, -93, -94, -95, -95, -96, -98, -99,
-100, -101, -102, -103, -104, -105, -106, -107, -108, -108, -110, -110, -111,
-112, -113, -113, -112, -114, -114, -114, -115, -115, -115, -116, -116, -115,
-116, -116, -117, -117, -118, -118, -117, -117, -117, -117, -117, -117, -118,
-118, -118, -117, -118, -117, -118, -118, -119, -119, -118, -118, -118, -119,
-119, -120, -120, -119, -119, -120, -120, -121, -121, -120, -121, -121, -121,
-122, -122, -123, -123, -122, -123, -123, -124, -123, -124, -124, -124, -124,
-125, -126, -126, -125, -125, -126, -125, -126, -127, -127, -126, -127, -127,
-127, -128, -127, -127, -128, -127, -127, -127, -128, -127, -127, -127, -127,
-127, -128, -127, -128, -128, -128, -128, -127, -127, -128, -128, -128, -127,
-127, -127, -127, -127, -128, -116, -92, -98, -112, -106, -97, -88, -84, -81,
-77, -75, -72, -69, -65, -62, -59, -55, -53, -50, -47, -45, -43, -41, -39, -37,
-35, -33, -32, -30, -29, -26, -24, -24, -21, -20, -18, -15, -14, -11, -9, -7,
-4, -2, 0, };

#endif /* AKWF_0903_512_H_ */