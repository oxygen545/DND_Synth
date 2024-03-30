#ifndef AKWF_1340_512_H_
#define AKWF_1340_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1340_512_NUM_CELLS 512
#define AKWF_1340_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1340_512_DATA [] = {1,
2, 3, 5, 7, 9, 12, 14, 19, 22, 26, 30, 34, 39, 43, 48, 53, 57, 63, 67, 74, 79,
82, 88, 92, 98, 101, 105, 108, 112, 116, 118, 122, 123, 125, 126, 127, 127, 127,
127, 127, 127, 126, 124, 122, 121, 118, 117, 115, 112, 109, 107, 104, 101, 99,
96, 94, 92, 89, 87, 85, 83, 81, 79, 78, 76, 74, 74, 71, 71, 70, 70, 68, 68, 67,
66, 66, 66, 65, 64, 63, 63, 63, 61, 61, 60, 59, 57, 56, 56, 53, 52, 51, 48, 45,
43, 40, 38, 36, 32, 29, 26, 23, 19, 16, 12, 9, 5, 2, -2, -5, -8, -11, -14, -17,
-20, -22, -25, -27, -29, -30, -31, -33, -33, -34, -34, -35, -35, -36, -35, -36,
-34, -34, -34, -34, -33, -33, -32, -32, -30, -31, -31, -31, -30, -30, -29, -28,
-29, -29, -29, -29, -29, -30, -30, -30, -30, -30, -31, -31, -31, -32, -33, -33,
-33, -34, -35, -36, -36, -37, -39, -40, -41, -43, -44, -46, -47, -49, -51, -53,
-55, -56, -59, -60, -63, -64, -65, -67, -69, -69, -70, -72, -72, -72, -73, -73,
-72, -70, -70, -68, -67, -65, -63, -60, -58, -56, -53, -49, -47, -44, -40, -37,
-33, -29, -27, -23, -19, -16, -12, -9, -7, -3, -1, 2, 4, 7, 9, 11, 13, 15, 16,
17, 19, 19, 19, 21, 22, 22, 22, 23, 22, 22, 22, 21, 21, 21, 20, 19, 18, 17, 17,
16, 14, 14, 14, 13, 12, 12, 11, 11, 10, 10, 9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 10,
10, 9, 9, 9, 9, 8, 8, 8, 7, 5, 5, 2, 1, -1, -3, -5, -8, -10, -13, -16, -19, -22,
-24, -28, -32, -34, -37, -41, -44, -47, -49, -52, -55, -57, -59, -62, -62, -65,
-65, -67, -67, -68, -67, -68, -67, -68, -66, -66, -65, -64, -62, -62, -60, -58,
-57, -54, -53, -51, -50, -47, -46, -44, -42, -40, -39, -36, -36, -35, -33, -32,
-30, -29, -27, -27, -27, -26, -25, -25, -24, -25, -24, -25, -25, -26, -26, -28,
-30, -31, -33, -34, -36, -39, -40, -43, -45, -47, -50, -51, -53, -55, -57, -58,
-59, -60, -60, -61, -62, -61, -61, -61, -60, -59, -59, -56, -56, -55, -51, -50,
-48, -45, -43, -41, -39, -37, -34, -32, -30, -29, -27, -25, -24, -21, -20, -18,
-17, -16, -15, -14, -13, -13, -12, -12, -11, -11, -10, -11, -11, -11, -12, -10,
-11, -12, -12, -13, -13, -14, -14, -14, -14, -15, -16, -16, -17, -16, -17, -18,
-18, -18, -18, -17, -17, -17, -15, -15, -14, -13, -13, -12, -10, -9, -6, -5, -3,
-1, 0, 2, 4, 5, 7, 9, 10, 13, 14, 16, 16, 19, 19, 20, 21, 22, 23, 24, 23, 24,
24, 24, 24, 23, 23, 23, 22, 21, 20, 20, 19, 18, 17, 15, 14, 12, 11, 10, 8, 7, 6,
5, 3, 3, 2, 1, 0, 0, -2, -2, -1, -2, -2, -2, -2, 0, };

#endif /* AKWF_1340_512_H_ */
