#ifndef AKWF_0105_512_H_
#define AKWF_0105_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0105_512_NUM_CELLS 512
#define AKWF_0105_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0105_512_DATA [] = {0,
2, 4, 5, 6, 7, 8, 10, 11, 12, 13, 15, 17, 17, 19, 20, 22, 23, 23, 25, 27, 28,
29, 29, 32, 33, 34, 35, 36, 37, 39, 40, 41, 44, 44, 46, 46, 48, 49, 50, 51, 52,
53, 54, 56, 57, 57, 59, 60, 61, 62, 63, 64, 66, 67, 67, 68, 70, 71, 72, 72, 74,
74, 75, 77, 77, 79, 79, 79, 81, 82, 83, 83, 84, 85, 86, 86, 87, 88, 89, 89, 90,
91, 92, 92, 93, 94, 95, 95, 95, 96, 97, 97, 98, 98, 99, 99, 100, 100, 101, 101,
101, 101, 102, 102, 103, 102, 103, 103, 103, 104, 104, 104, 105, 105, 106, 105,
106, 106, 105, 106, 105, 105, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105,
105, 104, 104, 104, 104, 103, 104, 104, 103, 102, 102, 102, 102, 101, 101, 100,
100, 100, 99, 99, 98, 97, 98, 97, 96, 96, 96, 94, 94, 93, 92, 92, 91, 91, 90,
89, 88, 88, 87, 86, 85, 85, 85, 83, 82, 81, 80, 79, 78, 78, 77, 76, 74, 74, 73,
72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 61, 60, 58, 59, 57, 56, 54, 53, 52, 51,
50, 48, 47, 46, 46, 44, 43, 42, 40, 39, 37, 36, 35, 34, 32, 31, 30, 29, 27, 26,
25, 23, 23, 21, 20, 18, 18, 16, 14, 14, 11, 10, 8, 7, 6, 5, 4, 2, 2, 0, -2, -2,
-4, -6, -7, -7, -9, -11, -12, -14, -14, -15, -17, -18, -20, -21, -22, -23, -25,
-26, -27, -29, -29, -31, -32, -33, -34, -35, -37, -38, -39, -40, -41, -43, -44,
-45, -45, -47, -48, -49, -49, -50, -53, -53, -53, -54, -56, -57, -57, -59, -60,
-60, -62, -62, -63, -64, -65, -66, -67, -67, -69, -68, -70, -70, -71, -73, -72,
-73, -74, -75, -76, -76, -76, -77, -78, -79, -80, -79, -80, -80, -81, -81, -81,
-82, -83, -83, -83, -84, -85, -85, -85, -85, -86, -87, -86, -86, -87, -86, -87,
-87, -87, -87, -87, -88, -88, -88, -88, -87, -88, -87, -88, -87, -87, -88, -88,
-87, -87, -87, -88, -86, -87, -86, -86, -86, -86, -86, -85, -86, -85, -91, -96,
-93, -95, -98, -99, -100, -100, -101, -100, -100, -99, -99, -98, -98, -96, -96,
-96, -95, -95, -95, -94, -94, -93, -93, -93, -92, -92, -92, -91, -91, -91, -91,
-89, -90, -89, -88, -89, -89, -88, -87, -88, -87, -87, -87, -86, -86, -85, -84,
-84, -83, -83, -82, -82, -81, -80, -80, -79, -79, -78, -77, -76, -75, -76, -75,
-74, -73, -73, -71, -71, -71, -69, -68, -68, -67, -67, -65, -65, -63, -63, -62,
-61, -60, -59, -58, -57, -56, -55, -55, -53, -52, -51, -50, -49, -48, -47, -46,
-45, -44, -42, -42, -41, -39, -38, -37, -36, -36, -34, -32, -32, -31, -29, -28,
-27, -26, -24, -23, -22, -21, -19, -18, -17, -15, -15, -12, -12, -11, -9, -8,
-6, -6, -4, -3, -2, 0, };

#endif /* AKWF_0105_512_H_ */
