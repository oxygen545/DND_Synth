#ifndef AKWF_1361_512_H_
#define AKWF_1361_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1361_512_NUM_CELLS 512
#define AKWF_1361_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1361_512_DATA [] = {1,
2, 3, 4, 6, 7, 8, 10, 12, 13, 13, 16, 17, 19, 20, 22, 23, 25, 26, 28, 30, 31,
32, 34, 37, 38, 39, 42, 44, 45, 47, 49, 51, 53, 56, 57, 59, 61, 63, 65, 67, 69,
71, 73, 75, 77, 79, 81, 82, 84, 86, 88, 89, 92, 93, 95, 97, 99, 101, 102, 104,
105, 107, 108, 110, 111, 113, 113, 115, 116, 118, 118, 120, 121, 122, 122, 124,
124, 125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 126, 126, 125, 125, 123, 123, 122, 121, 120, 119, 119, 117, 116, 114,
113, 112, 110, 109, 108, 106, 105, 103, 101, 99, 97, 96, 94, 92, 91, 88, 87, 84,
83, 81, 80, 77, 76, 74, 72, 69, 67, 65, 64, 62, 59, 58, 55, 53, 51, 49, 48, 45,
44, 42, 40, 38, 36, 34, 33, 32, 30, 27, 26, 24, 22, 21, 20, 17, 17, 15, 14, 12,
11, 9, 7, 7, 6, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -11, -12, -13,
-14, -14, -16, -16, -17, -18, -19, -19, -21, -22, -22, -23, -24, -25, -25, -27,
-28, -28, -29, -30, -31, -31, -33, -33, -34, -35, -35, -36, -37, -38, -38, -40,
-40, -41, -42, -42, -43, -45, -46, -46, -47, -47, -49, -49, -50, -51, -51, -52,
-54, -53, -54, -55, -55, -56, -57, -58, -58, -59, -60, -60, -61, -61, -61, -62,
-62, -62, -62, -63, -63, -64, -64, -64, -65, -65, -64, -64, -65, -65, -65, -65,
-64, -64, -63, -64, -63, -63, -63, -63, -63, -62, -62, -61, -60, -59, -58, -59,
-57, -56, -56, -55, -55, -54, -52, -51, -50, -50, -49, -48, -46, -45, -45, -43,
-42, -41, -39, -39, -37, -37, -35, -34, -33, -32, -30, -29, -28, -27, -26, -24,
-24, -23, -22, -21, -19, -19, -18, -17, -15, -15, -14, -12, -13, -12, -11, -10,
-10, -10, -9, -8, -8, -8, -7, -7, -7, -6, -5, -7, -6, -6, -5, -6, -7, -7, -6,
-7, -7, -7, -7, -8, -8, -9, -9, -11, -11, -12, -12, -14, -14, -15, -15, -17,
-17, -18, -20, -20, -22, -23, -24, -25, -26, -27, -29, -29, -30, -32, -33, -34,
-35, -35, -37, -40, -40, -40, -43, -43, -45, -45, -46, -48, -48, -50, -50, -52,
-52, -53, -54, -55, -56, -57, -57, -58, -59, -58, -60, -60, -61, -62, -61, -63,
-62, -63, -63, -63, -64, -64, -64, -64, -63, -65, -64, -63, -65, -63, -63, -64,
-63, -63, -63, -62, -62, -61, -61, -61, -60, -60, -59, -59, -59, -57, -57, -57,
-56, -54, -55, -54, -53, -52, -51, -51, -50, -49, -48, -48, -46, -46, -46, -44,
-44, -42, -42, -41, -41, -39, -39, -38, -37, -35, -35, -34, -34, -33, -32, -32,
-30, -30, -29, -28, -27, -26, -26, -24, -23, -23, -23, -21, -20, -20, -19, -18,
-17, -16, -15, -14, -14, -13, -11, -10, -9, -9, -8, -7, -5, -4, -3, -1, };

#endif /* AKWF_1361_512_H_ */
