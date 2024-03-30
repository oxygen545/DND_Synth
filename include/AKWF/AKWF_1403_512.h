#ifndef AKWF_1403_512_H_
#define AKWF_1403_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1403_512_NUM_CELLS 512
#define AKWF_1403_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1403_512_DATA [] = {1,
1, 3, 10, 12, 16, 17, 20, 21, 22, 24, 26, 26, 28, 29, 30, 31, 33, 34, 35, 35,
37, 38, 38, 40, 40, 41, 42, 43, 44, 44, 45, 46, 47, 47, 47, 49, 49, 50, 51, 51,
52, 52, 53, 54, 55, 55, 55, 56, 57, 58, 58, 59, 59, 59, 59, 61, 61, 62, 62, 63,
64, 64, 63, 64, 65, 66, 66, 66, 67, 68, 68, 67, 68, 68, 69, 69, 70, 70, 70, 70,
71, 71, 71, 71, 71, 73, 73, 72, 72, 73, 73, 74, 74, 75, 74, 75, 74, 75, 75, 76,
76, 75, 76, 77, 76, 77, 76, 77, 76, 77, 76, 78, 77, 77, 77, 77, 77, 78, 77, 78,
78, 78, 78, 78, 78, 78, 78, 78, 79, 76, 86, 97, 102, 107, 111, 114, 117, 120,
121, 124, 125, 126, 127, 126, 127, 125, 114, 109, 105, 100, 97, 95, 92, 89, 87,
84, 83, 80, 78, 75, 73, 72, 69, 67, 66, 64, 63, 60, 58, 58, 56, 54, 53, 52, 50,
48, 47, 45, 44, 43, 41, 40, 38, 37, 35, 35, 34, 32, 30, 29, 28, 26, 26, 25, 23,
22, 21, 20, 18, 18, 16, 15, 14, 13, 12, 11, 10, 9, 7, 6, 6, 5, 3, 3, 1, 1, 0,
-1, -2, -4, -4, -5, -6, -7, -9, -9, -11, -10, -11, -13, -14, -15, -16, -16, -18,
-19, -20, -20, -22, -21, -22, -24, -25, -25, -26, -27, -27, -28, -29, -30, -32,
-32, -32, -34, -34, -35, -36, -36, -36, -38, -39, -40, -40, -41, -42, -43, -43,
-44, -45, -46, -45, -47, -48, -49, -49, -50, -50, -51, -51, -52, -53, -54, -55,
-55, -56, -56, -57, -58, -58, -59, -60, -60, -60, -61, -62, -63, -63, -64, -64,
-65, -66, -66, -67, -67, -67, -68, -69, -70, -71, -71, -71, -73, -73, -74, -74,
-74, -75, -74, -76, -77, -77, -77, -77, -77, -79, -79, -79, -79, -79, -80, -80,
-81, -81, -81, -82, -81, -82, -82, -82, -83, -83, -84, -84, -84, -84, -84, -85,
-85, -84, -85, -85, -85, -86, -86, -87, -87, -87, -87, -87, -87, -88, -88, -88,
-89, -88, -89, -89, -89, -90, -90, -90, -91, -90, -90, -91, -91, -90, -91, -91,
-91, -91, -91, -92, -92, -92, -91, -92, -93, -92, -93, -93, -93, -92, -93, -93,
-93, -92, -94, -93, -93, -93, -94, -94, -94, -92, -94, -93, -95, -92, -95, -89,
-45, -24, -9, 4, 16, 26, 33, 41, 46, 51, 55, 58, 59, 63, 56, 50, 47, 44, 42, 39,
37, 35, 34, 32, 29, 28, 27, 26, 24, 23, 22, 20, 19, 18, 17, 15, 14, 14, 13, 12,
10, 9, 8, 8, 7, 6, 5, 4, 4, 3, 1, 1, 1, 0, -1, 0, -2, -3, -4, -5, -4, -5, -5,
-6, -7, -6, -8, -8, -8, -9, -9, -9, -10, -10, -10, -11, -10, -11, -11, -12, -12,
-12, -13, -12, -13, -13, -14, -13, -14, -13, -13, -14, -13, -14, -14, -14, -9,
-4, -2, 0, };

#endif /* AKWF_1403_512_H_ */
