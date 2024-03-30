#ifndef AKWF_stereo_0086_512_H_
#define AKWF_stereo_0086_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0086_512_NUM_CELLS 1024
#define AKWF_stereo_0086_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0086_512_DATA
[] = {44, 15, 127, 110, 109, 91, 98, 80, 84, 79, 71, 81, 61, 90, 54, 98, 47,
112, 43, 118, 29, 127, 24, 127, 27, 126, 28, 120, 29, 114, 32, 110, 41, 114, 35,
108, 33, 105, 27, 98, 26, 104, 22, 106, 24, 111, 23, 115, 24, 116, 23, 115, 24,
117, 26, 115, 28, 115, 43, 110, 56, 107, 53, 106, 51, 105, 48, 107, 45, 109, 43,
111, 41, 113, 41, 116, 40, 115, 40, 118, 38, 116, 41, 117, 39, 111, 46, 118, 21,
83, 5, 59, 14, 72, 14, 69, 21, 74, 22, 72, 27, 75, 27, 71, 31, 71, 33, 69, 35,
69, 36, 67, 37, 67, 39, 68, 44, 68, 50, 67, 45, 64, 48, 68, 45, 67, 48, 71, 45,
67, 51, 77, 32, 50, 8, 20, 18, 32, 17, 29, 22, 32, 23, 30, 37, 27, 28, 27, 23,
26, 26, 24, 17, 24, 15, 25, 17, 22, 20, 24, 20, 23, 23, 26, 14, 21, 22, 26, 18,
21, 35, 42, 55, 66, 64, 71, 52, 51, 18, 13, 24, 22, 20, 23, 20, 27, 20, 28, 19,
29, 18, 29, 17, 26, 17, 26, 16, 23, 16, 21, 15, 20, 18, 26, 12, 26, 9, 25, 9,
22, 7, 23, 6, 22, 6, 22, 6, 20, 5, 21, 5, 20, 5, 21, 5, 20, 3, 20, 9, 19, 16,
18, 16, 19, 10, 20, -2, 23, -1, 22, 0, 24, 0, 24, 1, 26, 0, 23, 2, 24, -1, 21,
4, 24, -1, 19, 27, 53, 26, 51, -8, 10, 1, 23, -17, 1, -36, -21, -33, -17, -29,
-13, -26, -13, -21, -14, -31, -16, -29, -18, -23, -21, -20, -24, -18, -27, -10,
-26, 1, -25, -1, -29, -4, -26, -10, -25, -9, -25, -9, -23, -7, -21, -7, -21, -9,
-20, -10, -20, -9, -21, -6, -23, -6, -23, -3, -24, -8, -23, -16, -21, -11, -21,
-11, -21, -8, -19, -8, -20, -6, -20, -6, -21, -4, -20, -3, -23, -1, -21, -4,
-26, 10, -10, 59, 52, 69, 65, 60, 54, 57, 55, 50, 53, 46, 57, 41, 60, 39, 67,
36, 69, 35, 73, 32, 73, 33, 74, 32, 71, 31, 69, 31, 66, 33, 66, 29, 67, 25, 64,
26, 62, 22, 60, 26, 66, 21, 63, 29, 75, 3, 45, -15, 22, -6, 33, -5, 30, -4, 32,
10, 27, 55, 19, 57, 15, 45, 14, 39, 13, 30, 14, 24, 16, 19, 18, 16, 20, 12, 22,
9, 25, 1, 21, 4, 25, 0, 23, 4, 27, 1, 20, -31, -23, -28, -19, -25, -16, -22,
-17, -21, -15, -19, -17, -16, -17, -15, -20, -13, -21, -13, -23, -12, -23, -10,
-24, -10, -22, -9, -22, -1, -21, -2, -26, -3, -25, -3, -24, -3, -22, -4, -21,
-3, -21, -4, -22, -3, -22, -4, -21, -4, -21, -4, -22, -4, -21, -4, -22, -6, -20,
-18, -20, -16, -19, -14, -21, -13, -19, -12, -22, -10, -21, -10, -21, -9, -22,
-8, -23, -8, -23, -7, -23, -4, -19, 67, 71, 99, 113, 90, 100, 54, 62, 34, 43,
39, 59, 29, 59, 32, 73, 15, 58, -7, 36, -22, 36, -16, 40, -14, 34, -7, 33, -6,
24, 4, 30, 12, 35, 5, 27, 5, 21, 0, 17, -4, 16, -5, 17, -4, 18, -5, 20, -3, 22,
-4, 22, -3, 23, -2, 20, 1, 20, 11, 17, 16, 17, 17, 15, 6, 19, 0, 20, 5, 22, 4,
23, 5, 25, 4, 26, 7, 28, 6, 27, 7, 27, 7, 25, 7, 22, 10, 24, -21, -16, -28, -27,
-22, -18, -21, -20, -16, -15, -15, -19, -12, -17, -11, -21, -7, -20, -8, -23,
-6, -24, -7, -25, -5, -24, -5, -25, 0, -23, -1, -25, -2, -26, -5, -22, -6, -23,
-3, -19, -6, -23, 2, -16, -26, -51, -40, -71, -31, -59, -32, -63, -26, -59, -24,
-62, -11, -64, -23, -65, -25, -65, -24, -68, -33, -66, -33, -68, -29, -68, -29,
-68, -27, -67, -28, -67, -33, -70, -27, -66, -29, -69, 9, -22, 48, 25, 43, 14,
42, 12, 35, 9, 29, 10, 24, 13, 21, 17, 17, 22, 16, 25, 12, 27, 10, 29, 8, 29, 8,
26, 7, 23, 7, 22, 8, 22, 4, 21, 1, 18, 0, 13, 0, 16, 0, 17, 0, 22, 0, 23, 1, 26,
-1, 27, 0, 27, 0, 26, 0, 25, 13, 21, 25, 18, 19, 17, 16, 17, 12, 17, 9, 18, 7,
19, 5, 20, 3, 22, 1, 22, 2, 25, 0, 22, 3, 24, 1, 23, 33, 63, 16, 41, -7, 10, 0,
23, -24, -8, -36, -21, -32, -17, -28, -13, -25, -14, -22, -13, -31, -14, -26,
-17, -22, -22, -18, -23, -16, -27, -1, -25, 12, -26, 6, -29, 4, -26, 1, -26, -2,
-26, -3, -23, -2, -21, -2, -20, -1, -19, -3, -20, -4, -20, -2, -22, -2, -22, 0,
-23, -10, -21, -14, -21, -9, -20, -10, -20, -6, -19, -8, -21, -5, -18, -7, -21,
-3, -18, -5, -23, -2, -20, -6, -26, 9, -8, 29, 17, 36, 22, 22, 5, -12, -33, -8,
-24, -9, -21, -9, -18, -8, -16, -9, -15, -7, -15, -8, -19, -7, -19, -9, -24, -6,
-24, -8, -26, -4, -20, -9, -20, -12, -20, -13, -22, -14, -22, -13, -22, -16,
-24, -11, -20, -43, -58, -52, -72, -44, -62, -42, -67, -41, -62, -26, -68, 0,
-71, -4, -74, -11, -72, -27, -70, -26, -71, -29, -69, -30, -69, -31, -67, -40,
-66, -46, -64, -50, -69, -42, -64, -45, -69, -37, -61, -49, -80, -74, -117, -66,
-107, -66, -108, -60, -106, -60, -107, -58, -107, -55, -110, -54, -111, -53,
-113, -52, -114, -52, -115, -51, -114, -50, -114, -48, -114, -45, -113, -47,
-117, -47, -116, -51, -113, -50, -112, -50, -112, -49, -112, -48, -112, -48,
-112, -47, -113, -47, -113, -47, -113, -48, -113, -47, -113, -52, -111, -62,
-111, -57, -110, -57, -112, -55, -110, -55, -114, -52, -111, -54, -116, -50,
-110, -53, -118, -47, -106, -56, -126, -32, -73, };

#endif /* AKWF_stereo_0086_512_H_ */