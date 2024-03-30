#ifndef AKWF_1512_512_H_
#define AKWF_1512_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1512_512_NUM_CELLS 512
#define AKWF_1512_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1512_512_DATA [] = {0,
2, 3, 5, 6, 7, 10, 12, 13, 15, 17, 20, 21, 22, 25, 27, 27, 29, 30, 31, 33, 34,
36, 38, 39, 41, 43, 45, 46, 47, 48, 49, 50, 52, 52, 53, 53, 54, 55, 56, 57, 57,
58, 59, 59, 60, 61, 61, 62, 63, 64, 63, 65, 65, 65, 66, 67, 67, 67, 68, 69, 69,
69, 71, 70, 72, 71, 72, 73, 73, 73, 74, 75, 75, 75, 75, 76, 77, 77, 78, 78, 79,
78, 79, 80, 81, 80, 81, 82, 82, 83, 83, 84, 83, 84, 85, 86, 86, 87, 87, 87, 88,
89, 89, 89, 90, 91, 91, 92, 92, 93, 93, 93, 94, 95, 96, 96, 97, 97, 98, 98, 100,
99, 101, 101, 102, 102, 103, 103, 104, 104, 105, 105, 107, 106, 108, 109, 108,
109, 110, 110, 111, 112, 112, 112, 113, 114, 114, 115, 116, 117, 117, 117, 118,
118, 119, 119, 120, 120, 122, 121, 122, 123, 124, 123, 125, 124, 125, 124, 127,
125, 127, 126, 127, 127, 127, 119, 97, 111, 93, 113, 96, 100, 102, 99, 113, 101,
110, 100, 105, 99, 100, 98, 97, 96, 94, 93, 92, 92, 90, 90, 87, 87, 84, 85, 84,
82, 80, 81, 77, 77, 75, 74, 73, 72, 70, 70, 68, 66, 66, 65, 62, 62, 60, 59, 55,
54, 52, 49, 47, 46, 43, 41, 40, 39, 37, 34, 33, 31, 30, 27, 25, 23, 21, 20, 17,
15, 13, 11, 9, 8, 7, 5, 4, 2, 1, -1, -2, -5, -6, -8, -8, -11, -11, -13, -15,
-17, -20, -23, -24, -26, -28, -30, -31, -34, -36, -37, -40, -41, -42, -44, -46,
-48, -50, -52, -54, -57, -58, -60, -62, -64, -65, -66, -68, -69, -70, -71, -72,
-73, -75, -76, -78, -78, -80, -81, -83, -83, -85, -85, -88, -88, -90, -90, -92,
-92, -95, -93, -97, -96, -100, -99, -103, -103, -103, -108, -101, -114, -95,
-106, -93, -105, -106, -97, -110, -98, -127, -127, -128, -126, -127, -125, -126,
-125, -125, -124, -124, -125, -123, -123, -122, -122, -121, -122, -120, -120,
-120, -118, -118, -118, -116, -117, -116, -116, -114, -115, -114, -112, -113,
-112, -112, -111, -111, -109, -109, -108, -108, -106, -107, -105, -105, -105,
-103, -104, -103, -102, -102, -101, -100, -100, -99, -98, -98, -98, -97, -97,
-96, -95, -95, -94, -94, -93, -92, -92, -91, -91, -91, -90, -89, -88, -89, -87,
-88, -87, -86, -86, -86, -85, -85, -84, -83, -83, -83, -82, -81, -81, -80, -80,
-80, -80, -79, -79, -79, -77, -78, -77, -76, -75, -76, -74, -74, -73, -73, -73,
-73, -72, -72, -72, -70, -70, -70, -69, -69, -68, -67, -67, -66, -66, -65, -64,
-64, -64, -63, -63, -62, -60, -60, -60, -60, -58, -58, -57, -56, -56, -55, -55,
-54, -53, -52, -52, -51, -49, -48, -47, -45, -44, -41, -40, -39, -37, -36, -34,
-33, -31, -30, -28, -27, -25, -23, -23, -20, -18, -17, -14, -14, -11, -9, -8,
-6, -4, -3, -1, 0, };

#endif /* AKWF_1512_512_H_ */