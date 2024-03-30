#ifndef AKWF_stereo_0190_512_H_
#define AKWF_stereo_0190_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0190_512_NUM_CELLS 1024
#define AKWF_stereo_0190_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0190_512_DATA
[] = {3, -8, 14, -1, 24, 10, 35, 19, 44, 30, 55, 39, 64, 49, 73, 59, 81, 68, 89,
76, 97, 84, 104, 91, 109, 98, 114, 103, 117, 108, 121, 113, 124, 117, 125, 120,
127, 123, 127, 125, 127, 126, 127, 127, 127, 127, 126, 127, 124, 127, 123, 127,
121, 127, 118, 126, 116, 125, 114, 125, 112, 125, 109, 124, 105, 123, 103, 122,
101, 121, 98, 120, 96, 120, 93, 119, 91, 119, 88, 117, 87, 117, 84, 115, 82,
115, 80, 113, 79, 112, 78, 111, 76, 109, 76, 107, 74, 105, 74, 103, 72, 100, 71,
97, 71, 94, 71, 92, 70, 89, 71, 85, 70, 82, 71, 79, 70, 76, 70, 73, 70, 70, 71,
66, 70, 63, 69, 60, 70, 56, 68, 53, 68, 49, 66, 46, 65, 42, 63, 38, 62, 34, 59,
30, 57, 27, 53, 21, 50, 17, 48, 12, 44, 8, 40, 2, 38, -2, 33, -8, 30, -13, 26,
-16, 23, -22, 19, -27, 16, -30, 14, -35, 10, -38, 8, -42, 5, -45, 3, -49, 1,
-52, 0, -54, -1, -56, -3, -57, -4, -59, -4, -60, -6, -61, -7, -61, -8, -62, -8,
-63, -10, -63, -11, -62, -12, -62, -14, -63, -17, -64, -19, -64, -19, -65, -22,
-65, -24, -66, -27, -67, -30, -67, -32, -68, -35, -69, -37, -71, -40, -72, -43,
-73, -44, -75, -46, -75, -48, -75, -50, -77, -51, -76, -51, -77, -52, -76, -53,
-76, -54, -77, -54, -76, -53, -75, -54, -74, -55, -72, -54, -71, -55, -70, -55,
-68, -55, -67, -55, -67, -57, -65, -59, -64, -59, -63, -61, -63, -63, -63, -66,
-63, -67, -63, -70, -63, -73, -65, -76, -65, -80, -66, -82, -66, -85, -68, -88,
-70, -90, -70, -92, -70, -94, -71, -95, -71, -96, -72, -98, -72, -99, -70, -98,
-69, -98, -68, -98, -66, -96, -63, -95, -60, -92, -57, -91, -54, -88, -50, -85,
-46, -82, -42, -79, -39, -75, -33, -72, -31, -69, -27, -65, -23, -62, -19, -58,
-16, -55, -14, -52, -11, -50, -8, -47, -8, -45, -6, -42, -5, -40, -4, -38, -3,
-37, -4, -35, -4, -34, -4, -32, -3, -31, -3, -30, -4, -29, -4, -28, -5, -27, -5,
-26, -5, -26, -5, -24, -4, -23, -3, -23, -3, -22, -2, -21, -1, -20, 1, -20, 2,
-19, 4, -18, 5, -17, 7, -16, 9, -15, 11, -15, 13, -14, 13, -13, 16, -12, 17,
-11, 19, -10, 20, -8, 21, -7, 23, -5, 24, -4, 25, -3, 26, -1, 27, 0, 27, 1, 28,
2, 27, 3, 29, 5, 28, 6, 28, 6, 27, 6, 27, 6, 25, 5, 24, 3, 24, 2, 21, 0, 19, -2,
16, -6, 13, -8, 10, -13, 6, -16, 3, -20, -3, -25, -7, -29, -11, -34, -16, -38,
-20, -43, -24, -46, -29, -50, -33, -53, -37, -56, -41, -58, -43, -59, -46, -60,
-48, -59, -49, -58, -49, -56, -49, -53, -48, -49, -46, -44, -43, -40, -39, -34,
-36, -27, -31, -20, -26, -12, -20, -4, -14, 4, -7, 11, -1, 19, 6, 28, 12, 35,
18, 43, 25, 50, 31, 55, 37, 61, 41, 66, 46, 70, 50, 74, 53, 76, 55, 78, 57, 80,
59, 81, 59, 80, 59, 79, 58, 78, 57, 76, 56, 74, 55, 72, 52, 69, 51, 65, 48, 63,
45, 59, 42, 55, 39, 51, 38, 48, 35, 43, 32, 41, 30, 37, 29, 34, 28, 30, 26, 27,
23, 24, 22, 21, 21, 20, 20, 17, 19, 16, 18, 13, 16, 12, 15, 10, 14, 9, 13, 8,
11, 8, 10, 8, 9, 8, 7, 9, 6, 9, 4, 9, 3, 11, 1, 11, 0, 13, -1, 15, -3, 16, -4,
17, -5, 19, -7, 21, -7, 23, -8, 26, -9, 26, -9, 28, -10, 29, -10, 31, -11, 32,
-12, 32, -12, 33, -13, 33, -13, 34, -14, 33, -14, 33, -15, 32, -16, 32, -18, 30,
-20, 29, -20, 28, -22, 27, -22, 26, -23, 25, -24, 24, -25, 24, -26, 24, -26, 23,
-26, 23, -26, 24, -26, 24, -25, 25, -25, 25, -23, 27, -21, 28, -19, 29, -16, 31,
-13, 32, -11, 35, -8, 36, -4, 36, -1, 39, 2, 40, 6, 41, 9, 41, 12, 42, 15, 43,
18, 42, 21, 42, 23, 41, 25, 41, 28, 40, 29, 40, 31, 38, 32, 37, 33, 36, 34, 35,
35, 34, 36, 33, 37, 33, 38, 32, 39, 32, 40, 30, 41, 30, 42, 30, 42, 30, 44, 30,
46, 31, 47, 31, 48, 31, 51, 31, 51, 31, 54, 31, 54, 30, 55, 30, 57, 28, 57, 26,
58, 24, 58, 23, 57, 20, 57, 17, 55, 15, 54, 11, 53, 7, 51, 3, 48, -2, 45, -6,
41, -12, 38, -15, 35, -20, 32, -25, 29, -29, 25, -32, 22, -36, 19, -39, 17, -42,
14, -44, 11, -46, 11, -47, 10, -48, 8, -49, 8, -49, 7, -50, 7, -49, 7, -49, 7,
-47, 8, -46, 8, -46, 8, -44, 9, -43, 9, -41, 9, -41, 9, -39, 9, -38, 9, -38, 7,
-37, 6, -36, 5, -37, 2, -36, -1, -37, -4, -38, -7, -37, -10, -39, -13, -40, -17,
-39, -20, -41, -25, -42, -28, -43, -32, -44, -35, -46, -39, -47, -42, -47, -45,
-48, -48, -49, -50, -50, -51, -51, -54, -51, -55, -52, -56, -54, -57, -55, -58,
-54, -59, -54, -60, -56, -61, -56, -59, -57, -60, -56, -60, -55, -59, -56, -59,
-56, -59, -55, -59, -54, -57, -54, -57, -52, -57, -51, -57, -50, -56, -48, -55,
-47, -54, -45, -55, -45, -54, -42, -53, -41, -53, -39, -51, -39, -51, -37, -51,
-37, -52, -37, -52, -37, -51, -38, -52, -37, -53, -39, -53, -40, -55, -42, -56,
-43, -57, -46, -60, -50, -61, -53, -63, -55, -65, -58, -67, -61, -70, -63, -72,
-66, -74, -67, -75, -69, -76, -71, -77, -71, -77, -71, -77, -70, -77, -68, -75,
-65, -73, -62, -69, -58, -66, -52, -60, -46, -56, -38, -48, -30, -42, -22, -32,
-12, -27, -4, -12, };

#endif /* AKWF_stereo_0190_512_H_ */