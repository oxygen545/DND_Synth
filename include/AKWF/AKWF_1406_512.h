#ifndef AKWF_1406_512_H_
#define AKWF_1406_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1406_512_NUM_CELLS 512
#define AKWF_1406_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1406_512_DATA [] = {0,
10, 17, 24, 29, 34, 37, 41, 44, 47, 50, 53, 56, 58, 60, 63, 65, 67, 68, 71, 72,
74, 75, 78, 79, 81, 82, 83, 84, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 96,
97, 97, 99, 99, 100, 100, 101, 101, 102, 102, 103, 104, 104, 104, 105, 106, 106,
106, 106, 107, 106, 107, 107, 107, 107, 107, 107, 108, 107, 90, 85, 83, 80, 78,
76, 75, 73, 73, 71, 70, 68, 67, 66, 67, 64, 64, 64, 64, 62, 61, 61, 61, 59, 58,
58, 58, 58, 57, 56, 56, 55, 55, 54, 54, 54, 53, 52, 52, 52, 51, 51, 50, 51, 50,
49, 49, 50, 49, 49, 48, 48, 48, 48, 47, 48, 47, 47, 46, 47, 47, 47, 46, 47, 46,
45, 45, 46, 45, 45, 45, 45, 44, 44, 44, 44, 45, 43, 44, 44, 44, 43, 44, 43, 44,
43, 44, 43, 44, 42, 43, 43, 13, 2, -2, -9, -9, -14, -16, -20, -21, -23, -25,
-28, -28, -30, -31, -32, -35, -36, -36, -38, -40, -41, -41, -41, -44, -44, -44,
-46, -46, -48, -48, -49, -49, -50, -51, -52, -52, -54, -54, -55, -54, -56, -57,
-56, -57, -58, -58, -59, -59, -60, -60, -60, -60, -62, -61, -63, -63, -63, -62,
-63, -63, -64, -64, -65, -65, -66, -65, -65, -65, -66, -66, -66, -66, -66, -66,
-67, -66, -67, -67, -67, -67, -67, -68, -67, -67, -68, -67, -67, -68, -67, -64,
-64, -64, -63, -63, -63, -63, -62, -62, -61, -62, -61, -61, -61, -61, -60, -61,
-61, -60, -60, -60, -61, -60, -59, -59, -59, -59, -59, -59, -60, -59, -58, -58,
-59, -59, -59, -59, -58, -58, -58, -58, -58, -58, -59, -58, -59, -58, -58, -58,
-58, -57, -58, -58, -57, -57, -57, -57, -57, -58, -57, -58, -58, -57, -57, -57,
-57, -57, -58, -56, -57, -56, -58, -56, -58, -57, -57, -56, -58, -56, -56, -56,
-57, -56, -57, -57, -56, -57, -55, -58, -54, -61, -52, -62, -50, -66, -44, -78,
11, 127, 85, 99, 84, 88, 81, 81, 78, 77, 75, 72, 73, 70, 69, 67, 68, 65, 66, 63,
64, 61, 62, 59, 61, 58, 59, 57, 57, 56, 56, 55, 54, 54, 53, 53, 52, 52, 51, 51,
50, 50, 50, 49, 49, 48, 48, 48, 48, 47, 46, 47, 47, 46, 46, 44, 46, 45, 44, 44,
45, 44, 44, 45, 43, 43, 44, 45, 43, 44, 43, 46, 20, 1, 0, -7, -9, -14, -15, -18,
-20, -22, -23, -26, -28, -29, -30, -32, -33, -35, -36, -38, -38, -39, -41, -42,
-42, -43, -45, -45, -46, -47, -47, -48, -49, -51, -50, -51, -53, -52, -54, -54,
-54, -55, -56, -56, -56, -57, -58, -58, -58, -58, -60, -60, -60, -61, -61, -61,
-61, -62, -62, -63, -63, -64, -64, -64, -63, -64, -65, -65, -65, -65, -65, -66,
-66, -66, -66, -65, -67, -66, -68, -67, -67, -65, -68, -66, -68, -65, -69, -64,
-70, -57, -3, };

#endif /* AKWF_1406_512_H_ */