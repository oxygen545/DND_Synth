#ifndef AKWF_1792_512_H_
#define AKWF_1792_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1792_512_NUM_CELLS 512
#define AKWF_1792_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1792_512_DATA [] = {0,
0, 1, 1, 3, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8, 10, 9, 10, 11, 11, 12, 12, 14, 14,
14, 15, 15, 16, 17, 18, 18, 18, 20, 21, 21, 22, 22, 23, 25, 25, 26, 27, 31, 35,
35, 36, 38, 40, 40, 42, 42, 43, 44, 46, 46, 46, 47, 48, 49, 50, 50, 52, 53, 53,
54, 55, 56, 57, 58, 59, 60, 61, 61, 62, 62, 64, 65, 65, 65, 67, 68, 69, 69, 70,
71, 72, 72, 73, 73, 74, 75, 76, 76, 78, 78, 78, 79, 80, 79, 79, 80, 80, 81, 81,
82, 83, 82, 82, 81, 82, 80, 79, 78, 75, 76, 76, 76, 76, 76, 76, 75, 74, 74, 74,
74, 74, 73, 74, 73, 73, 72, 72, 73, 71, 71, 71, 71, 72, 71, 71, 72, 71, 72, 72,
72, 72, 73, 72, 73, 73, 73, 74, 75, 74, 75, 75, 76, 76, 76, 77, 78, 77, 78, 78,
79, 80, 80, 81, 81, 82, 81, 83, 83, 84, 84, 85, 85, 85, 85, 87, 87, 87, 88, 88,
89, 90, 89, 91, 91, 90, 93, 91, 97, 49, 22, 30, 25, 28, 27, 27, 28, 28, 29, 27,
29, 28, 29, 27, 30, 27, 30, 27, 39, 105, 105, 103, 106, 104, 106, 106, 107, 107,
109, 107, 109, 110, 110, 110, 111, 110, 112, 112, 114, 113, 115, 113, 115, 114,
117, 114, 119, 114, 120, 115, 121, 115, 122, 116, 123, 116, 125, 116, 127, 114,
-118, -128, -122, -128, -122, -128, -121, -128, -121, -127, -121, -126, -120,
-125, -119, -123, -119, -121, -118, -119, -118, -118, -118, -116, -116, -115,
-115, -114, -114, -114, -114, -113, -113, -112, -111, -109, -111, -109, -110,
-108, -109, -107, -107, -106, -106, -106, -105, -104, -104, -103, -103, -103,
-102, -102, -101, -100, -99, -99, -98, -98, -99, -98, -97, -96, -96, -95, -95,
-95, -94, -93, -92, -92, -93, -92, -90, -91, -90, -88, -88, -87, -88, -87, -87,
-86, -85, -85, -85, -84, -84, -82, -83, -82, -82, -81, -81, -80, -80, -79, -79,
-78, -78, -78, -77, -76, -75, -75, -70, -65, -73, -73, -72, -72, -71, -71, -71,
-70, -69, -69, -69, -68, -68, -68, -67, -66, -66, -64, -65, -65, -64, -63, -63,
-62, -62, -61, -60, -61, -60, -59, -58, -58, -58, -57, -56, -56, -56, -55, -55,
-54, -54, -53, -53, -52, -52, -51, -50, -50, -49, -49, -48, -48, -53, -54, -53,
-53, -52, -51, -51, -50, -50, -49, -48, -48, -48, -47, -47, -42, -40, -39, -39,
-38, -37, -37, -37, -36, -35, -35, -35, -34, -34, -33, -33, -31, -32, -31, -31,
-31, -29, -29, -29, -28, -28, -27, -28, -27, -26, -25, -26, -23, -24, -23, -22,
-22, -22, -21, -21, -20, -20, -20, -19, -19, -18, -18, -16, -16, -16, -15, -15,
-15, -14, -14, -13, -13, -12, -12, -10, -10, -10, -9, -9, -9, -8, -7, -8, -7,
-6, -5, -5, -5, -5, -4, -3, -3, -3, -1, -1, -1, 0, };

#endif /* AKWF_1792_512_H_ */