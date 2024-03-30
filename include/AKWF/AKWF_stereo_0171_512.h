#ifndef AKWF_stereo_0171_512_H_
#define AKWF_stereo_0171_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0171_512_NUM_CELLS 1024
#define AKWF_stereo_0171_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0171_512_DATA
[] = {18, 17, 44, 25, 91, 28, 88, 27, 89, 25, 91, 24, 91, 22, 92, 21, 91, 19,
93, 18, 92, 15, 93, 15, 93, 12, 93, 11, 92, 9, 93, 7, 92, 5, 93, 4, 92, 1, 92,
0, 90, -2, 91, -4, 90, -6, 90, -7, 89, -9, 88, -11, 88, -12, 87, -14, 86, -16,
85, -18, 84, -20, 84, -22, 83, -24, 81, -26, 80, -27, 79, -27, 77, -26, 77, -26,
76, -25, 75, -25, 73, -26, 72, -27, 71, -28, 69, -29, 67, -31, 67, -33, 65, -34,
64, -35, 62, -37, 61, -38, 59, -40, 57, -42, 56, -43, 54, -45, 53, -47, 52, -48,
52, -49, 50, -50, 49, -51, 48, -53, 46, -54, 45, -56, 45, -57, 42, -59, 42, -59,
40, -61, 38, -61, 37, -60, 36, -60, 35, -57, 36, -58, 35, -57, 36, -58, 36, -58,
37, -59, 35, -59, 34, -62, 34, -61, 33, -63, 32, -64, 30, -66, 30, -67, 30, -69,
30, -69, 30, -71, 31, -71, 32, -72, 31, -74, 31, -76, 30, -76, 30, -77, 30, -81,
28, -80, 27, -83, 27, -80, 25, -92, 24, -52, 24, -22, 23, 23, 22, 42, 21, 33,
21, 42, 19, 36, 18, 42, 18, 39, 17, 43, 15, 40, 15, 44, 13, 44, 12, 48, 11, 48,
10, 49, 9, 50, 8, 50, 6, 51, 6, 50, 7, 51, 8, 50, 11, 51, 14, 52, 17, 52, 18,
51, 19, 51, 20, 50, 20, 50, 19, 49, 19, 49, 19, 48, 17, 47, 17, 47, 15, 49, 15,
50, 15, 52, 14, 53, 13, 54, 12, 54, 11, 53, 10, 52, 9, 52, 8, 52, 7, 51, 6, 50,
5, 49, 4, 48, 3, 47, 1, 47, 1, 46, 0, 45, -1, 45, -2, 43, -3, 42, -5, 41, -5,
40, -7, 42, -7, 44, -9, 46, -9, 49, -10, 50, -12, 50, -12, 50, -14, 49, -15, 48,
-16, 48, -17, 48, -18, 47, -20, 46, -21, 44, -22, 43, -22, 43, -24, 42, -24, 40,
-24, 40, -22, 39, -20, 38, -17, 38, -15, 37, -14, 36, -14, 35, -14, 34, -14, 33,
-15, 31, -15, 30, -16, 28, -16, 28, -17, 26, -18, 26, -19, 23, -19, 23, -18, 21,
-16, 20, -14, 19, -12, 18, -11, 16, -11, 16, -11, 14, -10, 13, -11, 11, -12, 9,
-13, 8, -13, 6, -14, 5, -15, 3, -15, 2, -16, 0, -17, -1, -19, -2, -20, -5, -20,
-6, -21, -8, -23, -9, -23, -8, -25, -7, -24, -5, -27, -5, -26, -5, -29, -5, -28,
-6, -31, -8, -29, -7, -34, -10, -28, -9, -8, -7, 6, -5, 26, -3, 21, -4, 24, -5,
23, -7, 23, -7, 23, -8, 22, -11, 22, -12, 23, -13, 21, -16, 22, -18, 21, -19,
20, -20, 19, -22, 20, -24, 19, -24, 17, -27, 16, -29, 15, -31, 15, -32, 14, -34,
14, -37, 11, -39, 11, -40, 11, -44, 10, -45, 8, -47, 8, -48, 6, -48, 5, -47, 4,
-45, 2, -45, 2, -46, 1, -45, 1, -42, 1, -40, 1, -37, 1, -37, 0, -36, -1, -36,
-2, -37, -2, -38, -4, -39, -4, -40, -5, -41, -7, -43, -8, -45, -10, -46, -10,
-48, -11, -49, -13, -51, -14, -52, -15, -53, -17, -53, -17, -53, -19, -55, -20,
-55, -21, -56, -22, -59, -24, -60, -25, -62, -26, -64, -28, -66, -29, -68, -30,
-70, -31, -70, -32, -72, -34, -73, -35, -76, -36, -77, -38, -79, -40, -81, -40,
-82, -41, -84, -43, -86, -45, -87, -46, -89, -47, -90, -48, -92, -49, -92, -51,
-90, -52, -85, -53, -80, -54, -75, -55, -71, -56, -67, -58, -65, -59, -64, -59,
-64, -61, -63, -61, -64, -63, -65, -64, -66, -66, -66, -66, -67, -68, -69, -69,
-70, -70, -72, -71, -73, -73, -74, -73, -76, -75, -77, -77, -78, -78, -80, -80,
-81, -81, -83, -82, -84, -85, -86, -86, -88, -87, -89, -89, -89, -90, -88, -92,
-87, -93, -84, -95, -85, -96, -85, -98, -85, -99, -86, -100, -87, -101, -87,
-102, -90, -100, -90, -100, -91, -97, -91, -98, -94, -97, -94, -98, -96, -98,
-97, -98, -98, -99, -101, -100, -101, -101, -103, -103, -104, -104, -107, -105,
-107, -107, -109, -107, -109, -109, -110, -109, -109, -113, -110, -111, -108,
-115, -112, -114, -109, -118, -113, -116, -110, -121, -117, -118, -112, -124,
-119, -121, -114, -126, -121, -123, -117, -128, -124, -124, -118, -67, -56, -33,
-19, 33, 47, 29, 46, 30, 47, 33, 50, 32, 49, 35, 53, 33, 52, 36, 55, 34, 52, 37,
55, 34, 52, 37, 55, 34, 53, 37, 55, 34, 52, 37, 54, 34, 52, 34, 53, 34, 51, 35,
52, 32, 51, 32, 51, 31, 50, 30, 51, 30, 48, 29, 49, 29, 47, 27, 46, 27, 45, 25,
44, 25, 43, 23, 42, 23, 41, 21, 40, 23, 39, 23, 38, 23, 38, 24, 36, 25, 36, 25,
34, 26, 35, 26, 33, 28, 33, 29, 30, 30, 32, 30, 26, 29, 28, 29, 23, 28, 27, 27,
18, 26, 27, 25, 63, 24, 85, 23, 120, 23, 113, 21, 116, 20, 115, 19, 116, 18,
115, 19, 116, 19, 116, 21, 114, 22, 116, 23, 114, 24, 115, 25, 113, 25, 114, 25,
112, 23, 112, 23, 111, 23, 111, 21, 109, 21, 109, 19, 107, 18, 107, 17, 105, 16,
105, 15, 103, 14, 103, 12, 101, 11, 99, 10, 98, 9, 96, 7, 96, 7, 95, 5, 95, 3,
94, 2, 94, 1, 93, 0, 92, -2, 91, -3, 90, -4, 87, -6, 86, -7, 85, -8, 83, -9, 82,
-9, 80, -10, 79, -9, 77, -8, 76, -8, 73, -7, 72, -5, 71, -6, 70, -5, 67, -5, 65,
-6, 64, -7, 62, -8, 59, -9, 58, -11, 55, -11, 53, -13, 51, -15, 49, -16, 48,
-16, 47, -19, 45, -18, 43, -18, 41, -18, 39, -18, 38, -19, 36, -20, 33, -22, 32,
-21, 30, -23, 28, -23, 25, -28, 24, -27, 22, -29, 21, -28, 17, -35, 17, -22, 9,
};

#endif /* AKWF_stereo_0171_512_H_ */
