#ifndef AKWF_0980_512_H_
#define AKWF_0980_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0980_512_NUM_CELLS 512
#define AKWF_0980_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0980_512_DATA [] = {1,
6, 9, 13, 16, 19, 23, 26, 30, 33, 36, 38, 42, 45, 48, 50, 53, 55, 58, 61, 62,
65, 66, 69, 71, 72, 74, 75, 78, 79, 80, 81, 83, 84, 84, 85, 86, 87, 88, 89, 89,
89, 89, 91, 91, 91, 92, 91, 91, 92, 92, 91, 90, 90, 90, 89, 89, 88, 88, 87, 87,
87, 86, 85, 85, 85, 85, 84, 84, 83, 83, 83, 83, 81, 81, 81, 81, 80, 79, 79, 78,
77, 77, 75, 74, 74, 72, 71, 69, 68, 67, 65, 64, 62, 60, 57, 55, 53, 51, 48, 45,
44, 41, 37, 35, 32, 29, 27, 23, 20, 18, 14, 10, 7, 4, 1, -3, -6, -10, -13, -16,
-19, -22, -26, -29, -32, -35, -38, -40, -42, -45, -47, -49, -51, -53, -55, -56,
-58, -58, -59, -59, -61, -60, -61, -61, -63, -62, -63, -65, -64, -65, -65, -66,
-66, -67, -67, -67, -67, -67, -67, -68, -68, -69, -68, -69, -68, -68, -68, -69,
-68, -68, -68, -67, -67, -66, -66, -65, -65, -64, -64, -64, -63, -62, -62, -61,
-61, -60, -59, -57, -58, -57, -56, -56, -55, -53, -52, -52, -51, -50, -49, -48,
-47, -47, -46, -44, -44, -43, -43, -42, -40, -40, -38, -38, -37, -35, -35, -34,
-33, -32, -30, -29, -28, -27, -27, -25, -23, -23, -21, -20, -18, -17, -16, -14,
-13, -11, -8, -8, -5, -4, -1, 1, 3, 5, 7, 10, 12, 14, 16, 19, 22, 24, 27, 29,
32, 34, 38, 40, 43, 45, 48, 49, 51, 55, 57, 59, 61, 63, 65, 67, 68, 69, 72, 74,
75, 76, 78, 79, 79, 80, 80, 82, 82, 83, 83, 83, 84, 84, 84, 83, 84, 83, 83, 82,
82, 82, 82, 80, 80, 80, 79, 78, 78, 78, 76, 76, 74, 74, 74, 73, 72, 71, 71, 70,
69, 69, 67, 67, 66, 65, 65, 63, 62, 62, 61, 59, 59, 58, 56, 56, 55, 53, 53, 50,
49, 48, 47, 44, 42, 42, 39, 38, 36, 34, 31, 28, 26, 23, 21, 19, 15, 13, 9, 7, 3,
1, -4, -6, -10, -13, -17, -20, -24, -27, -31, -34, -38, -42, -46, -50, -53, -56,
-59, -62, -66, -69, -73, -75, -79, -82, -86, -88, -91, -94, -96, -99, -101,
-104, -105, -107, -109, -111, -112, -113, -115, -116, -116, -117, -118, -119,
-119, -120, -120, -121, -122, -122, -124, -123, -124, -125, -125, -126, -126,
-127, -126, -127, -127, -127, -128, -127, -127, -128, -127, -127, -128, -128,
-128, -128, -128, -128, -127, -127, -128, -126, -126, -125, -125, -125, -124,
-123, -124, -123, -122, -121, -120, -120, -120, -119, -118, -117, -117, -116,
-115, -115, -114, -113, -113, -111, -110, -109, -109, -108, -107, -106, -105,
-105, -103, -102, -101, -100, -99, -98, -96, -95, -94, -92, -91, -90, -88, -86,
-85, -84, -82, -79, -78, -77, -74, -72, -70, -68, -66, -63, -61, -59, -56, -53,
-50, -48, -46, -41, -39, -36, -33, -30, -27, -23, -20, -16, -13, -11, -6, -2, 0,
};

#endif /* AKWF_0980_512_H_ */