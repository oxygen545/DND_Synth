#ifndef AKWF_1902_512_H_
#define AKWF_1902_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1902_512_NUM_CELLS 512
#define AKWF_1902_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1902_512_DATA [] = {5,
16, 26, 36, 45, 55, 64, 71, 78, 84, 89, 93, 96, 98, 98, 98, 96, 94, 92, 89, 86,
82, 78, 73, 69, 65, 62, 59, 55, 52, 49, 46, 42, 40, 37, 35, 32, 30, 28, 26, 24,
23, 21, 21, 19, 18, 19, 18, 18, 19, 19, 20, 20, 22, 22, 23, 23, 24, 24, 25, 25,
25, 25, 24, 24, 25, 23, 23, 22, 22, 21, 20, 21, 20, 20, 20, 20, 20, 19, 21, 21,
22, 22, 23, 25, 25, 27, 28, 28, 30, 32, 32, 34, 34, 34, 36, 36, 37, 38, 39, 39,
40, 41, 41, 42, 43, 43, 43, 45, 45, 45, 46, 47, 47, 49, 48, 50, 50, 51, 52, 52,
53, 55, 56, 56, 57, 58, 59, 61, 63, 65, 67, 68, 70, 71, 74, 74, 76, 79, 79, 80,
82, 84, 84, 84, 85, 86, 86, 87, 86, 87, 87, 87, 87, 87, 86, 87, 86, 86, 86, 87,
87, 88, 88, 88, 88, 89, 89, 89, 89, 90, 90, 90, 91, 91, 91, 91, 91, 90, 90, 90,
89, 89, 89, 88, 87, 87, 87, 86, 86, 85, 84, 84, 84, 83, 82, 82, 81, 81, 79, 80,
79, 79, 78, 79, 77, 78, 77, 78, 79, 79, 78, 79, 79, 80, 81, 81, 82, 83, 84, 84,
85, 85, 86, 87, 88, 88, 88, 89, 89, 88, 88, 88, 89, 88, 89, 88, 88, 89, 89, 89,
91, 92, 92, 94, 96, 97, 100, 101, 103, 105, 106, 107, 108, 110, 109, 109, 108,
107, 104, 101, 98, 94, 91, 86, 81, 76, 71, 65, 59, 51, 46, 40, 32, 26, 20, 13,
5, -2, -9, -15, -23, -29, -37, -43, -50, -56, -62, -68, -73, -78, -82, -86, -90,
-93, -95, -98, -100, -102, -103, -104, -105, -106, -106, -106, -108, -108, -109,
-110, -110, -111, -113, -113, -114, -115, -116, -117, -118, -119, -120, -121,
-122, -122, -123, -123, -124, -125, -125, -125, -126, -127, -127, -128, -127,
-127, -128, -128, -128, -128, -127, -127, -128, -127, -127, -127, -126, -126,
-125, -125, -124, -123, -123, -122, -121, -120, -118, -118, -117, -115, -114,
-113, -112, -109, -109, -107, -106, -104, -102, -100, -99, -97, -95, -94, -92,
-92, -89, -88, -86, -85, -83, -82, -81, -79, -78, -76, -75, -73, -72, -71, -69,
-68, -66, -65, -63, -61, -59, -58, -55, -54, -54, -51, -51, -49, -48, -47, -47,
-47, -46, -47, -47, -48, -48, -50, -50, -51, -52, -54, -55, -56, -57, -59, -60,
-60, -61, -60, -61, -61, -62, -61, -61, -61, -60, -59, -58, -58, -57, -57, -56,
-57, -57, -57, -56, -56, -57, -56, -57, -58, -59, -59, -60, -60, -61, -61, -61,
-61, -62, -62, -62, -62, -62, -63, -63, -62, -61, -61, -61, -61, -61, -60, -59,
-58, -58, -58, -57, -56, -55, -53, -52, -51, -50, -49, -46, -45, -44, -42, -42,
-42, -41, -40, -40, -41, -41, -42, -43, -44, -46, -47, -48, -49, -49, -49, -49,
-49, -46, -44, -41, -36, -30, -24, -16, -8, -1, };

#endif /* AKWF_1902_512_H_ */
