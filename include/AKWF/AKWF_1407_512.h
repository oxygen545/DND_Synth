#ifndef AKWF_1407_512_H_
#define AKWF_1407_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1407_512_NUM_CELLS 512
#define AKWF_1407_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1407_512_DATA [] = {2,
6, 12, 16, 20, 24, 28, 32, 36, 39, 43, 48, 50, 54, 57, 60, 63, 68, 70, 73, 76,
78, 80, 83, 84, 87, 89, 90, 92, 94, 96, 97, 99, 101, 102, 103, 104, 106, 107,
108, 109, 109, 109, 111, 112, 112, 114, 114, 114, 115, 116, 116, 118, 118, 118,
119, 119, 120, 120, 120, 121, 121, 122, 122, 122, 121, 123, 123, 123, 123, 123,
124, 124, 125, 124, 125, 124, 125, 125, 125, 126, 125, 125, 126, 126, 126, 126,
127, 126, 127, 127, 127, 127, 127, 126, 127, 127, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126,
126, 126, 126, 125, 127, 125, 125, 125, 125, 126, 125, 124, 125, 124, 124, 124,
123, 124, 124, 123, 123, 122, 121, 122, 122, 121, 121, 120, 120, 120, 120, 119,
118, 118, 117, 117, 117, 116, 115, 115, 114, 114, 113, 112, 111, 110, 109, 109,
108, 107, 106, 105, 104, 103, 102, 100, 98, 97, 95, 93, 91, 90, 87, 85, 84, 81,
80, 78, 74, 72, 68, 66, 64, 61, 56, 53, 50, 47, 43, 39, 35, 31, 26, 23, 18, 15,
10, 5, 2, -3, -8, -12, -16, -21, -25, -29, -33, -37, -41, -44, -49, -52, -56,
-58, -62, -65, -68, -71, -73, -76, -79, -81, -83, -85, -87, -90, -91, -92, -95,
-96, -98, -100, -101, -102, -103, -104, -105, -107, -108, -109, -110, -110,
-112, -111, -113, -113, -114, -115, -115, -116, -116, -117, -117, -118, -119,
-119, -119, -120, -121, -121, -121, -121, -121, -122, -122, -122, -123, -123,
-123, -123, -124, -123, -124, -124, -125, -124, -124, -125, -125, -125, -125,
-126, -126, -126, -126, -126, -126, -126, -127, -127, -127, -126, -127, -126,
-127, -127, -127, -127, -127, -127, -127, -128, -128, -127, -127, -127, -128,
-128, -128, -128, -128, -128, -128, -127, -128, -128, -127, -128, -128, -128,
-128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-127, -128, -128, -128, -128, -128, -127, -128, -127, -128, -128, -128, -128,
-128, -128, -128, -127, -128, -128, -128, -127, -127, -128, -127, -127, -127,
-127, -127, -127, -127, -126, -127, -126, -126, -126, -126, -125, -126, -126,
-125, -125, -125, -126, -125, -124, -125, -124, -124, -123, -124, -123, -123,
-124, -123, -122, -121, -122, -121, -121, -121, -120, -120, -120, -119, -118,
-119, -118, -117, -116, -116, -115, -115, -115, -114, -114, -113, -112, -111,
-110, -110, -109, -107, -106, -105, -104, -103, -102, -101, -100, -98, -97, -95,
-93, -92, -89, -88, -86, -84, -81, -79, -76, -73, -72, -68, -65, -61, -59, -55,
-52, -49, -46, -42, -38, -33, -30, -26, -22, -17, -13, -9, -4, 0, };

#endif /* AKWF_1407_512_H_ */
