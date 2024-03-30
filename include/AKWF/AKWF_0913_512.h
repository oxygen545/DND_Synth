#ifndef AKWF_0913_512_H_
#define AKWF_0913_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0913_512_NUM_CELLS 512
#define AKWF_0913_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0913_512_DATA [] = {1,
4, 6, 8, 10, 12, 14, 15, 19, 20, 22, 25, 27, 29, 32, 33, 35, 37, 40, 41, 43, 45,
48, 50, 52, 55, 56, 58, 61, 61, 64, 65, 68, 69, 71, 72, 74, 76, 78, 79, 81, 84,
85, 87, 88, 90, 92, 94, 96, 97, 99, 101, 101, 102, 104, 106, 107, 108, 110, 111,
114, 114, 116, 118, 118, 120, 120, 121, 123, 124, 125, 126, 127, 126, 116, 108,
106, 104, 101, 96, 91, 86, 79, 74, 69, 64, 58, 53, 48, 42, 37, 31, 26, 21, 16,
11, 7, 3, 0, -4, -8, -10, -14, -16, -19, -21, -23, -24, -26, -28, -29, -30, -31,
-32, -32, -33, -33, -34, -33, -33, -34, -33, -33, -32, -31, -31, -30, -30, -29,
-28, -26, -26, -25, -24, -21, -21, -19, -18, -16, -15, -13, -12, -10, -9, -7,
-6, -4, -2, -1, 2, 3, 5, 6, 8, 10, 11, 13, 15, 17, 18, 20, 21, 24, 25, 26, 28,
30, 32, 34, 34, 37, 38, 40, 42, 43, 45, 46, 48, 49, 51, 53, 53, 54, 56, 57, 59,
60, 61, 62, 64, 65, 66, 66, 67, 67, 69, 69, 69, 70, 70, 70, 70, 70, 70, 70, 69,
69, 69, 69, 68, 68, 67, 66, 65, 64, 63, 63, 63, 61, 60, 59, 57, 57, 56, 55, 54,
53, 52, 51, 49, 48, 47, 47, 45, 43, 42, 41, 40, 39, 37, 36, 35, 34, 33, 31, 30,
29, 27, 26, 25, 23, 22, 21, 20, 20, 17, 17, 16, 14, 12, 12, 10, 9, 8, 7, 5, 5,
5, 3, 1, 0, -1, -1, -2, -4, -5, -6, -7, -8, -9, -10, -10, -11, -13, -13, -15,
-15, -16, -17, -18, -19, -20, -21, -21, -21, -23, -23, -24, -25, -26, -26, -27,
-28, -29, -29, -30, -30, -31, -32, -32, -32, -33, -34, -35, -35, -36, -35, -36,
-37, -37, -38, -38, -38, -40, -40, -40, -41, -40, -40, -41, -42, -42, -42, -42,
-42, -43, -43, -44, -44, -45, -45, -44, -45, -45, -46, -46, -46, -46, -47, -47,
-47, -48, -47, -47, -47, -47, -48, -49, -48, -49, -49, -49, -49, -50, -49, -50,
-50, -50, -51, -50, -51, -50, -50, -52, -51, -51, -51, -51, -52, -52, -53, -52,
-53, -53, -53, -53, -53, -54, -53, -54, -53, -54, -54, -54, -55, -55, -55, -54,
-55, -56, -55, -55, -55, -56, -56, -56, -55, -56, -56, -56, -56, -56, -57, -57,
-58, -57, -58, -57, -57, -57, -58, -57, -58, -58, -58, -58, -58, -58, -58, -59,
-58, -59, -59, -58, -58, -60, -59, -59, -59, -59, -60, -60, -59, -59, -60, -61,
-60, -60, -61, -61, -60, -62, -61, -60, -60, -61, -61, -61, -62, -61, -61, -62,
-61, -61, -61, -62, -62, -62, -62, -63, -63, -61, -61, -61, -60, -60, -59, -58,
-58, -57, -55, -55, -54, -53, -51, -50, -49, -48, -46, -44, -43, -40, -39, -37,
-36, -33, -31, -30, -28, -26, -23, -22, -20, -18, -15, -13, -11, -10, -6, -4,
-3, -1, };

#endif /* AKWF_0913_512_H_ */