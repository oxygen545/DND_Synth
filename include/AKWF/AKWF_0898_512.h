#ifndef AKWF_0898_512_H_
#define AKWF_0898_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0898_512_NUM_CELLS 512
#define AKWF_0898_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0898_512_DATA [] = {2,
7, 12, 18, 24, 29, 35, 40, 45, 51, 57, 63, 67, 73, 78, 83, 88, 92, 97, 100, 104,
107, 109, 112, 113, 114, 116, 115, 116, 116, 116, 116, 114, 114, 114, 112, 112,
111, 109, 109, 109, 107, 107, 107, 106, 106, 106, 104, 103, 103, 102, 100, 100,
98, 97, 95, 94, 91, 89, 88, 86, 84, 82, 79, 78, 75, 75, 73, 71, 69, 68, 68, 66,
65, 63, 62, 60, 58, 57, 55, 53, 50, 47, 42, 39, 34, 30, 25, 20, 13, 8, 2, -4,
-11, -17, -22, -28, -34, -40, -44, -50, -55, -60, -64, -69, -73, -77, -81, -84,
-88, -91, -95, -98, -100, -104, -106, -109, -112, -115, -118, -119, -121, -124,
-125, -126, -127, -127, -128, -128, -128, -126, -126, -124, -123, -121, -119,
-116, -113, -110, -106, -104, -101, -97, -94, -91, -88, -83, -81, -78, -75, -71,
-69, -65, -62, -60, -56, -52, -49, -45, -41, -38, -33, -30, -25, -22, -17, -12,
-8, -3, 1, 5, 9, 13, 17, 22, 26, 29, 32, 36, 39, 42, 45, 48, 51, 53, 55, 57, 59,
61, 63, 64, 66, 69, 70, 73, 74, 75, 78, 79, 81, 82, 84, 86, 87, 89, 89, 90, 90,
91, 91, 91, 92, 91, 90, 89, 89, 87, 85, 84, 83, 79, 78, 75, 73, 70, 67, 64, 61,
59, 55, 52, 49, 47, 44, 42, 39, 37, 34, 32, 29, 28, 26, 24, 21, 18, 16, 15, 12,
10, 8, 6, 3, 0, -1, -4, -7, -9, -11, -13, -15, -16, -19, -20, -21, -24, -25,
-26, -27, -29, -30, -31, -33, -34, -36, -37, -39, -41, -43, -46, -49, -52, -56,
-59, -62, -66, -69, -73, -76, -80, -83, -85, -88, -90, -91, -94, -96, -96, -98,
-97, -97, -97, -97, -96, -95, -94, -92, -92, -89, -88, -86, -85, -83, -81, -79,
-76, -74, -72, -69, -65, -62, -59, -56, -52, -47, -43, -38, -33, -27, -21, -16,
-9, -5, 2, 7, 12, 18, 23, 27, 31, 36, 39, 42, 45, 47, 50, 51, 54, 55, 56, 56,
58, 59, 60, 61, 62, 64, 64, 66, 66, 68, 70, 71, 72, 74, 75, 76, 77, 78, 79, 79,
80, 80, 80, 80, 80, 80, 80, 80, 79, 79, 78, 77, 78, 76, 76, 76, 76, 76, 76, 76,
75, 77, 77, 77, 76, 76, 75, 76, 74, 73, 72, 70, 69, 68, 66, 63, 61, 58, 56, 53,
50, 47, 44, 41, 38, 34, 32, 28, 25, 22, 18, 15, 11, 9, 5, 2, -1, -5, -9, -11,
-15, -18, -22, -26, -30, -34, -38, -42, -46, -50, -54, -58, -62, -66, -71, -74,
-78, -82, -84, -88, -91, -94, -97, -99, -101, -103, -105, -106, -107, -108,
-109, -111, -111, -111, -112, -113, -114, -114, -114, -114, -115, -114, -115,
-115, -114, -115, -116, -114, -115, -114, -114, -113, -112, -112, -110, -109,
-107, -106, -103, -102, -98, -95, -93, -89, -85, -81, -77, -73, -68, -63, -59,
-53, -48, -43, -38, -33, -28, -22, -17, -11, -6, -2, };

#endif /* AKWF_0898_512_H_ */