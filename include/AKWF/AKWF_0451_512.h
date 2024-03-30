#ifndef AKWF_0451_512_H_
#define AKWF_0451_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0451_512_NUM_CELLS 512
#define AKWF_0451_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0451_512_DATA [] = {5,
15, 24, 33, 39, 46, 52, 56, 61, 65, 68, 72, 74, 77, 79, 83, 85, 88, 91, 96, 100,
102, 106, 107, 109, 110, 111, 110, 109, 107, 106, 102, 99, 94, 90, 89, 87, 88,
91, 93, 96, 99, 102, 104, 106, 109, 111, 113, 114, 116, 117, 119, 119, 120, 120,
121, 120, 120, 121, 121, 121, 120, 121, 122, 122, 123, 124, 124, 124, 123, 122,
123, 121, 121, 120, 119, 118, 117, 115, 115, 113, 111, 110, 109, 106, 105, 102,
94, 85, 68, 43, 16, -10, -31, -49, -63, -75, -84, -93, -99, -104, -110, -113,
-117, -119, -120, -122, -123, -124, -124, -125, -125, -125, -126, -125, -126,
-127, -126, -127, -127, -128, -128, -128, -128, -128, -128, -127, -128, -127,
-127, -126, -126, -125, -125, -124, -123, -123, -123, -122, -122, -122, -121,
-121, -120, -119, -119, -116, -114, -113, -109, -107, -105, -106, -105, -106,
-108, -109, -110, -112, -115, -117, -119, -120, -121, -123, -123, -122, -121,
-121, -119, -118, -116, -114, -112, -110, -109, -106, -104, -102, -100, -99,
-98, -97, -97, -97, -97, -96, -95, -94, -92, -89, -87, -84, -80, -74, -69, -64,
-60, -54, -50, -44, -40, -34, -28, -22, -15, -10, -5, 1, 7, 15, 21, 27, 28, 26,
16, -1, -20, -37, -51, -62, -72, -80, -86, -91, -96, -100, -105, -106, -109,
-111, -113, -114, -114, -114, -112, -111, -109, -106, -103, -99, -95, -85, -72,
-57, -45, -36, -27, -20, -12, -3, 6, 15, 24, 32, 42, 49, 56, 63, 68, 74, 78, 82,
85, 89, 91, 94, 96, 99, 100, 102, 104, 106, 108, 110, 112, 116, 118, 119, 121,
121, 121, 122, 122, 121, 120, 118, 117, 113, 112, 110, 107, 108, 108, 109, 111,
113, 113, 115, 116, 118, 119, 120, 121, 122, 123, 123, 124, 125, 125, 125, 125,
123, 124, 123, 123, 123, 123, 124, 124, 123, 123, 124, 124, 124, 124, 123, 122,
122, 121, 121, 120, 118, 117, 115, 114, 112, 111, 111, 109, 108, 106, 102, 95,
84, 68, 43, 16, -10, -31, -49, -62, -74, -83, -92, -99, -104, -108, -112, -115,
-117, -119, -120, -122, -123, -123, -123, -123, -123, -123, -124, -124, -123,
-124, -123, -124, -123, -124, -123, -123, -123, -122, -122, -122, -121, -119,
-119, -117, -115, -114, -114, -113, -110, -109, -108, -108, -106, -104, -103,
-101, -99, -97, -93, -87, -80, -74, -66, -62, -61, -61, -63, -66, -70, -74, -79,
-84, -89, -92, -96, -98, -99, -99, -98, -96, -93, -90, -86, -82, -77, -70, -65,
-58, -51, -44, -37, -30, -26, -23, -20, -21, -22, -21, -20, -19, -15, -10, -4,
4, 12, 19, 28, 34, 40, 43, 48, 51, 54, 57, 60, 62, 64, 65, 67, 68, 69, 70, 72,
74, 76, 75, 71, 63, 48, 25, 3, -19, -37, -51, -61, -72, -79, -87, -92, -97,
-101, -105, -108, -110, -111, -112, -112, -112, -111, -109, -106, -104, -102,
-98, -91, -81, -72, -63, -58, -55, -50, -46, -41, -35, -27, -19, -10, -1, };

#endif /* AKWF_0451_512_H_ */
