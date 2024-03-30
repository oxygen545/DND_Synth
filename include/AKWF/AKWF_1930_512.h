#ifndef AKWF_1930_512_H_
#define AKWF_1930_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1930_512_NUM_CELLS 512
#define AKWF_1930_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1930_512_DATA [] = {1,
4, 7, 10, 14, 15, 18, 21, 23, 25, 28, 30, 33, 34, 36, 39, 41, 44, 46, 49, 51,
52, 55, 58, 60, 62, 65, 67, 69, 72, 74, 77, 80, 82, 84, 87, 88, 90, 93, 95, 98,
101, 102, 104, 107, 109, 112, 114, 116, 119, 121, 121, 117, 116, 114, 112, 109,
107, 105, 102, 100, 98, 96, 94, 91, 89, 87, 85, 83, 80, 78, 76, 74, 71, 69, 66,
64, 62, 60, 58, 55, 53, 51, 49, 47, 45, 43, 40, 38, 36, 34, 31, 28, 26, 24, 23,
19, 18, 19, 20, 20, 22, 23, 24, 26, 26, 27, 27, 28, 30, 31, 32, 33, 34, 35, 36,
37, 38, 39, 40, 41, 42, 43, 44, 46, 46, 47, 47, 48, 50, 50, 51, 52, 53, 54, 56,
56, 58, 59, 60, 60, 62, 62, 63, 62, 59, 57, 55, 53, 50, 48, 45, 43, 40, 38, 35,
34, 30, 28, 26, 23, 20, 18, 15, 13, 10, 9, 6, 4, 2, -2, -4, -6, -9, -11, -14,
-16, -18, -21, -23, -25, -28, -31, -33, -36, -38, -40, -43, -45, -48, -50, -50,
-49, -49, -49, -48, -49, -48, -48, -48, -48, -48, -47, -47, -48, -46, -47, -47,
-46, -47, -46, -46, -47, -45, -46, -46, -45, -45, -44, -44, -44, -45, -44, -44,
-44, -44, -43, -43, -43, -43, -43, -43, -43, -43, -42, -43, -42, -40, -37, -34,
-32, -28, -25, -22, -20, -17, -14, -11, -9, -6, -2, 1, 4, 6, 9, 12, 15, 18, 20,
24, 26, 29, 32, 35, 38, 41, 44, 47, 49, 53, 55, 58, 61, 65, 67, 69, 73, 76, 78,
81, 83, 87, 90, 90, 89, 86, 83, 80, 78, 75, 71, 69, 66, 63, 61, 58, 54, 52, 49,
46, 44, 41, 37, 34, 32, 29, 27, 24, 21, 18, 16, 13, 9, 7, 3, 1, -2, -5, -8, -11,
-13, -16, -19, -22, -25, -28, -30, -33, -37, -39, -40, -41, -41, -41, -43, -42,
-43, -42, -43, -44, -45, -45, -46, -46, -46, -47, -47, -48, -49, -49, -49, -50,
-51, -51, -51, -52, -52, -52, -53, -53, -53, -54, -54, -55, -56, -56, -57, -58,
-58, -58, -58, -59, -59, -60, -60, -61, -60, -60, -59, -59, -58, -57, -56, -55,
-55, -53, -53, -51, -52, -50, -49, -49, -48, -47, -46, -45, -43, -43, -42, -41,
-41, -40, -38, -39, -38, -36, -36, -34, -34, -33, -32, -32, -31, -30, -28, -28,
-28, -26, -25, -24, -24, -24, -21, -22, -25, -27, -30, -32, -35, -37, -40, -42,
-44, -47, -49, -51, -53, -55, -58, -60, -61, -64, -67, -69, -71, -73, -76, -78,
-81, -83, -85, -88, -90, -92, -94, -97, -98, -101, -104, -106, -108, -110, -112,
-115, -118, -120, -121, -124, -126, -128, -125, -121, -118, -116, -112, -109,
-107, -104, -100, -97, -95, -91, -88, -85, -82, -80, -76, -73, -71, -67, -64,
-62, -58, -54, -52, -49, -46, -43, -39, -37, -34, -31, -28, -25, -21, -19, -16,
-12, -9, -7, -3, -1, };

#endif /* AKWF_1930_512_H_ */
