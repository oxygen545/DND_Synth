#ifndef AKWF_stereo_0187_512_H_
#define AKWF_stereo_0187_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0187_512_NUM_CELLS 1024
#define AKWF_stereo_0187_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0187_512_DATA
[] = {1, -16, 3, -20, 4, -17, 5, -17, 6, -13, 8, -14, 9, -12, 10, -11, 12, -8,
14, -9, 14, -6, 16, -5, 18, -3, 19, -2, 20, -1, 22, 0, 22, 1, 24, 3, 25, 5, 26,
5, 29, 8, 29, 9, 31, 9, 32, 12, 33, 12, 35, 14, 37, 15, 37, 17, 40, 18, 41, 19,
41, 21, 43, 22, 45, 23, 46, 25, 47, 27, 47, 28, 48, 30, 50, 31, 52, 32, 52, 33,
53, 35, 55, 37, 56, 38, 58, 39, 59, 41, 60, 41, 61, 43, 62, 45, 64, 46, 64, 48,
66, 49, 66, 50, 68, 51, 70, 52, 71, 54, 71, 56, 72, 57, 74, 57, 75, 59, 75, 60,
76, 61, 77, 62, 79, 63, 80, 65, 80, 67, 82, 68, 83, 69, 83, 69, 85, 71, 86, 72,
86, 74, 88, 75, 88, 77, 89, 77, 90, 78, 91, 80, 91, 81, 92, 82, 93, 82, 94, 84,
96, 85, 96, 86, 97, 86, 98, 88, 98, 89, 99, 90, 99, 91, 101, 91, 101, 93, 102,
95, 103, 95, 103, 95, 103, 97, 104, 97, 105, 98, 106, 99, 105, 100, 107, 101,
107, 102, 107, 102, 108, 103, 110, 104, 109, 105, 109, 105, 110, 106, 111, 106,
111, 108, 111, 108, 112, 109, 113, 110, 112, 110, 112, 111, 113, 111, 115, 112,
113, 113, 115, 113, 115, 114, 114, 114, 115, 114, 115, 114, 116, 115, 116, 116,
116, 115, 116, 116, 117, 116, 117, 117, 116, 118, 117, 117, 117, 118, 118, 118,
116, 118, 116, 118, 117, 119, 117, 119, 117, 119, 117, 121, 117, 119, 117, 120,
117, 120, 118, 119, 117, 120, 117, 121, 117, 120, 116, 120, 116, 120, 117, 119,
116, 120, 115, 120, 115, 120, 116, 120, 115, 120, 115, 119, 114, 119, 114, 120,
113, 119, 114, 119, 112, 119, 113, 118, 113, 118, 113, 118, 111, 118, 111, 117,
110, 116, 110, 116, 109, 116, 110, 115, 109, 116, 108, 116, 108, 115, 107, 114,
106, 114, 106, 113, 105, 112, 104, 112, 104, 112, 103, 112, 102, 110, 102, 110,
100, 109, 100, 108, 100, 108, 98, 107, 99, 106, 97, 106, 96, 105, 95, 104, 94,
104, 94, 103, 93, 102, 92, 101, 90, 100, 90, 100, 89, 99, 88, 99, 88, 98, 86,
97, 85, 96, 84, 94, 83, 93, 83, 93, 82, 92, 80, 91, 79, 90, 77, 89, 77, 88, 75,
87, 74, 85, 73, 85, 72, 84, 71, 83, 69, 82, 68, 81, 68, 80, 66, 78, 65, 78, 64,
77, 63, 75, 62, 75, 60, 74, 59, 73, 57, 71, 56, 70, 55, 69, 53, 68, 52, 67, 51,
65, 50, 64, 48, 63, 47, 61, 46, 60, 44, 59, 43, 58, 41, 57, 39, 55, 38, 54, 37,
53, 35, 51, 34, 50, 32, 50, 30, 48, 29, 46, 28, 46, 27, 44, 25, 43, 25, 41, 23,
40, 22, 38, 19, 37, 19, 36, 17, 35, 15, 33, 14, 32, 13, 31, 11, 30, 10, 28, 8,
26, 7, 26, 6, 24, 4, 22, 3, 21, 1, 20, 0, 19, -1, 18, -4, 16, -5, 14, -7, 13,
-9, 12, -10, 10, -12, 9, -12, 8, -15, 6, -16, 5, -17, 3, -19, 2, -21, 0, -23,
-2, -23, -3, -25, -4, -27, -7, -29, -8, -29, -9, -32, -11, -33, -12, -34, -13,
-36, -16, -38, -17, -39, -18, -41, -20, -43, -22, -44, -24, -46, -25, -47, -26,
-48, -28, -50, -30, -52, -31, -53, -33, -55, -35, -56, -36, -57, -37, -58, -40,
-61, -41, -62, -42, -64, -44, -65, -46, -67, -47, -67, -48, -69, -51, -71, -52,
-71, -53, -74, -55, -75, -57, -76, -58, -78, -60, -78, -61, -80, -62, -81, -64,
-83, -65, -84, -68, -85, -68, -87, -70, -88, -72, -89, -73, -91, -75, -92, -76,
-92, -78, -93, -79, -94, -80, -97, -82, -97, -82, -99, -84, -100, -85, -101,
-87, -101, -88, -103, -89, -104, -90, -105, -91, -106, -93, -107, -94, -107,
-96, -107, -96, -109, -98, -110, -99, -111, -100, -111, -101, -112, -102, -113,
-103, -114, -103, -115, -105, -115, -106, -116, -107, -116, -108, -116, -109,
-118, -110, -119, -111, -119, -111, -120, -112, -120, -114, -121, -114, -122,
-114, -122, -115, -122, -117, -123, -118, -123, -117, -124, -118, -124, -119,
-124, -120, -124, -120, -124, -120, -125, -122, -125, -122, -125, -122, -127,
-123, -126, -123, -126, -123, -126, -124, -127, -125, -126, -125, -126, -125,
-126, -126, -127, -126, -127, -126, -127, -127, -126, -127, -126, -127, -127,
-128, -126, -127, -126, -127, -126, -128, -125, -127, -126, -128, -126, -127,
-126, -128, -126, -128, -125, -128, -125, -128, -124, -127, -125, -128, -124,
-128, -124, -128, -123, -128, -122, -127, -123, -127, -122, -126, -122, -127,
-122, -127, -120, -126, -121, -126, -119, -125, -119, -125, -118, -124, -119,
-125, -118, -124, -117, -123, -116, -124, -115, -123, -115, -122, -114, -122,
-113, -121, -113, -121, -112, -120, -111, -119, -110, -119, -110, -118, -108,
-118, -108, -116, -107, -117, -106, -117, -106, -115, -105, -114, -104, -114,
-103, -112, -102, -112, -100, -111, -99, -110, -98, -110, -97, -109, -97, -108,
-96, -107, -94, -106, -93, -106, -92, -104, -91, -104, -90, -103, -89, -101,
-87, -101, -86, -100, -86, -99, -85, -98, -83, -97, -82, -95, -81, -95, -80,
-94, -78, -93, -77, -91, -75, -91, -75, -89, -73, -88, -72, -86, -70, -85, -70,
-85, -68, -84, -67, -82, -65, -81, -65, -80, -63, -78, -62, -78, -61, -77, -58,
-75, -58, -73, -56, -72, -55, -72, -53, -70, -52, -69, -51, -68, -49, -67, -48,
-66, -48, -65, -46, -63, -44, -61, -43, -61, -41, -60, -40, -58, -39, -57, -37,
-56, -36, -54, -35, -54, -33, -52, -32, -51, -30, -50, -29, -49, -28, -48, -27,
-46, -26, -44, -24, -44, -23, -42, -21, -41, -20, -39, -18, -39, -18, -38, -16,
-36, -15, -36, -13, -34, -12, -33, -10, -31, -9, -30, -7, -28, -7, -28, -6, -26,
-4, -26, -2, -22, 0, -24, 0, -13, };

#endif /* AKWF_stereo_0187_512_H_ */