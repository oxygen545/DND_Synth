#ifndef AKWF_epiano_0050_512_H_
#define AKWF_epiano_0050_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0050_512_NUM_CELLS 512
#define AKWF_epiano_0050_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0050_512_DATA
[] = {1, 4, 9, 12, 17, 20, 24, 29, 33, 38, 41, 45, 49, 53, 57, 61, 65, 68, 72,
75, 78, 83, 85, 89, 92, 95, 97, 100, 102, 105, 106, 109, 111, 112, 115, 116,
118, 120, 121, 122, 123, 123, 124, 125, 126, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 126, 125, 124, 124, 124, 122, 122, 121,
120, 119, 119, 118, 116, 116, 115, 115, 113, 112, 111, 110, 109, 108, 107, 105,
105, 104, 102, 102, 100, 99, 98, 97, 95, 95, 93, 93, 90, 89, 89, 87, 86, 85, 83,
81, 80, 80, 79, 76, 76, 75, 73, 72, 71, 69, 68, 67, 65, 64, 62, 61, 59, 58, 58,
55, 54, 53, 51, 50, 49, 47, 46, 44, 43, 42, 40, 38, 37, 37, 35, 34, 32, 32, 30,
28, 27, 26, 25, 24, 23, 22, 21, 20, 18, 17, 17, 16, 16, 14, 14, 13, 13, 11, 10,
11, 10, 9, 9, 9, 7, 8, 7, 8, 7, 7, 5, 6, 5, 5, 5, 5, 4, 4, 4, 3, 4, 3, 2, 2, 1,
2, 1, 1, 0, 1, 0, -1, -1, -1, -1, -2, -1, -2, -3, -2, -3, -3, -4, -3, -3, -3,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -4, -4, -3, -4, -3,
-3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -2, -1, -1, -1, 0, -1, -1, 0, 0, 0, 1,
0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, -1, 0, -2, -2, -3, -3, -4,
-3, -3, -4, -5, -5, -6, -6, -6, -8, -7, -9, -9, -10, -11, -12, -12, -13, -14,
-16, -17, -17, -18, -19, -21, -22, -22, -24, -25, -25, -27, -29, -30, -32, -32,
-35, -35, -37, -38, -40, -41, -43, -44, -46, -47, -49, -50, -51, -54, -55, -56,
-59, -60, -60, -62, -64, -65, -67, -67, -69, -70, -70, -72, -72, -73, -74, -75,
-75, -76, -76, -75, -76, -76, -76, -76, -76, -76, -75, -74, -74, -73, -72, -71,
-71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -62, -60, -59, -57, -57, -56,
-55, -54, -52, -52, -51, -51, -50, -50, -49, -49, -47, -47, -47, -47, -46, -46,
-46, -46, -46, -45, -46, -46, -46, -46, -46, -46, -46, -47, -48, -48, -48, -49,
-49, -50, -50, -51, -52, -52, -53, -54, -54, -55, -56, -56, -58, -59, -59, -60,
-61, -61, -63, -64, -64, -65, -66, -67, -67, -68, -69, -69, -70, -71, -72, -72,
-73, -73, -74, -75, -74, -76, -76, -77, -77, -76, -77, -78, -78, -78, -78, -79,
-79, -78, -78, -79, -79, -79, -78, -78, -79, -79, -78, -77, -77, -77, -77, -76,
-76, -75, -75, -74, -73, -73, -72, -71, -70, -70, -68, -67, -67, -66, -64, -63,
-62, -61, -60, -58, -57, -55, -54, -52, -50, -49, -47, -44, -42, -40, -38, -35,
-34, -30, -27, -25, -21, -19, -15, -12, -8, -4, -2, };

#endif /* AKWF_epiano_0050_512_H_ */