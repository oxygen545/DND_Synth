#ifndef AKWF_pluckalgo_0008_512_H_
#define AKWF_pluckalgo_0008_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_pluckalgo_0008_512_NUM_CELLS 512
#define AKWF_pluckalgo_0008_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data")))
AKWF_pluckalgo_0008_512_DATA [] = {1, 5, 8, 13, 16, 20, 23, 27, 31, 34, 39, 41,
47, 51, 56, 60, 65, 70, 75, 80, 84, 88, 93, 97, 101, 103, 107, 109, 111, 112,
113, 113, 112, 112, 111, 110, 108, 106, 103, 101, 99, 96, 94, 91, 88, 85, 82,
78, 75, 71, 67, 64, 61, 57, 53, 49, 47, 43, 41, 39, 39, 37, 37, 38, 39, 41, 43,
47, 51, 55, 59, 63, 68, 74, 79, 83, 88, 92, 96, 99, 103, 105, 109, 110, 113,
115, 117, 118, 120, 121, 122, 124, 124, 126, 126, 127, 127, 127, 127, 127, 127,
127, 127, 125, 125, 123, 122, 122, 120, 118, 117, 116, 115, 114, 113, 111, 112,
111, 111, 110, 110, 109, 108, 107, 107, 106, 104, 102, 100, 98, 96, 93, 91, 89,
87, 85, 82, 80, 78, 76, 76, 74, 73, 72, 72, 72, 72, 72, 72, 72, 73, 74, 74, 75,
74, 75, 75, 76, 76, 76, 76, 76, 74, 74, 74, 72, 72, 71, 71, 72, 72, 73, 72, 73,
75, 77, 80, 80, 83, 85, 87, 90, 92, 93, 93, 94, 94, 94, 94, 93, 90, 89, 87, 85,
84, 82, 80, 79, 78, 77, 76, 75, 74, 76, 75, 75, 76, 76, 77, 77, 78, 78, 78, 79,
79, 78, 78, 78, 78, 79, 77, 77, 75, 74, 74, 73, 71, 69, 68, 65, 64, 62, 60, 58,
56, 54, 53, 51, 49, 48, 45, 44, 41, 40, 37, 36, 33, 32, 31, 29, 26, 25, 24, 21,
19, 17, 15, 14, 11, 9, 7, 4, 1, -1, -4, -7, -10, -12, -16, -19, -22, -25, -27,
-30, -32, -36, -37, -38, -41, -43, -45, -46, -47, -48, -49, -49, -50, -49, -47,
-47, -45, -43, -39, -36, -34, -29, -26, -21, -16, -12, -8, -4, -1, 3, 6, 9, 10,
11, 12, 11, 12, 10, 7, 7, 3, 1, -4, -7, -11, -15, -20, -23, -28, -30, -34, -38,
-40, -44, -46, -48, -50, -52, -54, -54, -56, -56, -56, -56, -54, -54, -53, -52,
-50, -48, -46, -45, -42, -42, -40, -39, -37, -37, -36, -36, -37, -37, -38, -39,
-39, -41, -42, -44, -45, -47, -49, -50, -50, -51, -51, -51, -53, -53, -52, -52,
-52, -51, -51, -50, -51, -50, -49, -48, -49, -49, -49, -51, -51, -52, -54, -55,
-57, -58, -60, -61, -63, -64, -65, -65, -65, -64, -64, -63, -62, -60, -58, -55,
-53, -50, -47, -45, -42, -39, -37, -34, -31, -29, -27, -25, -22, -20, -19, -17,
-16, -14, -13, -12, -12, -11, -11, -10, -10, -9, -9, -9, -8, -8, -8, -7, -6, -4,
-4, -1, 0, 3, 5, 7, 10, 12, 14, 16, 19, 19, 21, 21, 21, 22, 20, 19, 17, 14, 11,
8, 4, 0, -5, -10, -14, -20, -26, -30, -36, -41, -47, -51, -55, -61, -65, -69,
-73, -76, -79, -83, -85, -87, -88, -90, -91, -92, -92, -91, -91, -89, -87, -84,
-81, -78, -75, -70, -66, -62, -56, -51, -47, -41, -35, -31, -25, -20, -15, -11,
-6, -2, };

#endif /* AKWF_pluckalgo_0008_512_H_ */
