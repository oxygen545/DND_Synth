#ifndef AKWF_stereo_0063_512_H_
#define AKWF_stereo_0063_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0063_512_NUM_CELLS 1024
#define AKWF_stereo_0063_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0063_512_DATA
[] = {2, 43, 5, 61, 8, 57, 12, 65, 16, 64, 20, 68, 24, 69, 27, 73, 31, 73, 35,
77, 39, 78, 42, 81, 46, 81, 50, 84, 53, 85, 56, 88, 61, 89, 65, 90, 67, 92, 70,
94, 75, 96, 77, 96, 81, 99, 83, 100, 87, 102, 89, 102, 92, 104, 94, 106, 97,
106, 100, 107, 102, 109, 105, 110, 107, 110, 109, 111, 111, 112, 113, 113, 114,
114, 116, 115, 118, 115, 119, 117, 120, 117, 122, 117, 123, 118, 124, 120, 124,
118, 125, 120, 126, 120, 127, 120, 127, 120, 127, 121, 127, 120, 127, 121, 127,
121, 127, 121, 127, 122, 127, 121, 127, 121, 126, 121, 126, 121, 125, 120, 125,
121, 123, 120, 122, 120, 121, 119, 120, 119, 118, 118, 117, 117, 114, 117, 113,
115, 112, 115, 109, 114, 107, 114, 106, 113, 103, 112, 101, 111, 99, 111, 95,
109, 94, 108, 91, 107, 88, 106, 86, 105, 82, 103, 79, 102, 76, 101, 73, 100, 69,
99, 66, 97, 63, 96, 60, 93, 57, 93, 52, 90, 49, 89, 46, 86, 41, 85, 38, 83, 35,
81, 31, 77, 27, 76, 24, 73, 20, 71, 17, 67, 14, 65, 12, 60, 8, 58, 6, 49, 3, 47,
7, 25, 20, -11, 18, -18, 17, -25, 14, -30, 12, -34, 8, -37, 5, -41, 3, -42, 0,
-44, -3, -48, -5, -49, -9, -51, -11, -53, -14, -55, -16, -56, -18, -58, -21,
-59, -24, -61, -25, -62, -29, -63, -30, -65, -32, -66, -34, -66, -36, -67, -38,
-68, -41, -70, -41, -70, -43, -71, -44, -71, -46, -73, -47, -74, -49, -75, -49,
-75, -50, -76, -52, -77, -53, -78, -55, -78, -55, -79, -56, -81, -57, -80, -58,
-81, -59, -82, -59, -82, -61, -84, -61, -84, -62, -84, -62, -85, -62, -85, -63,
-86, -63, -87, -64, -87, -64, -88, -65, -87, -65, -88, -65, -89, -65, -90, -66,
-90, -66, -91, -66, -91, -66, -91, -67, -92, -68, -92, -68, -93, -68, -94, -69,
-93, -68, -94, -69, -94, -70, -95, -68, -96, -70, -96, -69, -97, -70, -97, -70,
-97, -70, -97, -70, -98, -70, -98, -71, -99, -70, -99, -71, -99, -71, -100, -72,
-101, -72, -100, -72, -101, -72, -101, -72, -102, -72, -102, -73, -103, -72,
-102, -73, -103, -72, -104, -72, -103, -73, -103, -73, -104, -73, -104, -73,
-104, -72, -104, -73, -104, -73, -104, -73, -105, -72, -104, -72, -104, -72,
-104, -71, -104, -70, -104, -70, -103, -70, -104, -69, -104, -69, -103, -68,
-102, -68, -102, -68, -103, -67, -101, -66, -101, -66, -100, -64, -100, -62,
-99, -63, -99, -61, -98, -60, -97, -58, -97, -56, -95, -55, -95, -53, -94, -52,
-93, -50, -92, -49, -91, -46, -90, -44, -88, -43, -86, -41, -85, -38, -84, -36,
-83, -34, -80, -31, -79, -29, -76, -26, -75, -24, -73, -20, -71, -18, -68, -16,
-66, -14, -62, -10, -59, -8, -55, -5, -51, -5, -46, -2, -38, -2, -28, -15, 12,
-17, 27, -15, 32, -12, 39, -9, 41, -7, 47, -2, 49, 0, 53, 4, 55, 8, 60, 12, 61,
14, 64, 19, 66, 22, 68, 27, 70, 30, 73, 34, 74, 37, 77, 41, 78, 44, 80, 48, 83,
50, 84, 55, 85, 58, 87, 61, 89, 64, 90, 67, 91, 70, 93, 73, 94, 75, 96, 78, 97,
81, 98, 83, 99, 86, 100, 87, 102, 91, 102, 93, 103, 94, 104, 96, 104, 98, 105,
100, 107, 102, 107, 103, 108, 104, 109, 106, 109, 107, 110, 108, 109, 109, 111,
110, 111, 110, 111, 112, 112, 112, 112, 111, 112, 112, 112, 112, 113, 112, 113,
112, 112, 111, 112, 111, 112, 110, 112, 111, 112, 110, 112, 109, 111, 108, 111,
108, 111, 106, 111, 105, 110, 103, 109, 102, 108, 100, 108, 99, 107, 97, 107,
94, 106, 94, 105, 91, 105, 89, 103, 87, 103, 84, 101, 81, 101, 80, 99, 76, 98,
74, 98, 70, 96, 67, 96, 64, 94, 61, 92, 58, 91, 56, 89, 52, 88, 49, 86, 46, 84,
42, 83, 38, 81, 35, 78, 31, 76, 29, 74, 25, 72, 22, 69, 18, 67, 15, 63, 12, 60,
9, 56, 6, 53, 5, 45, 3, 40, 7, 20, 18, -17, 17, -24, 14, -29, 13, -35, 10, -37,
7, -41, 4, -43, 1, -47, -1, -49, -5, -51, -8, -53, -10, -55, -14, -57, -17, -58,
-19, -59, -22, -62, -23, -62, -27, -64, -29, -65, -32, -66, -34, -67, -36, -69,
-38, -70, -40, -71, -42, -72, -44, -74, -45, -74, -47, -74, -49, -75, -49, -76,
-52, -77, -52, -77, -54, -78, -55, -80, -57, -79, -59, -81, -59, -81, -60, -82,
-61, -83, -61, -83, -63, -84, -63, -84, -63, -85, -64, -85, -66, -86, -66, -86,
-67, -87, -66, -87, -68, -88, -68, -89, -67, -89, -69, -89, -68, -90, -69, -89,
-69, -91, -69, -91, -70, -92, -70, -92, -70, -92, -70, -93, -69, -93, -70, -94,
-69, -94, -70, -94, -70, -94, -70, -94, -70, -94, -70, -96, -71, -96, -71, -97,
-70, -97, -71, -97, -71, -97, -71, -98, -71, -97, -70, -99, -70, -98, -70, -99,
-70, -99, -70, -99, -70, -100, -71, -100, -70, -100, -71, -100, -70, -101, -70,
-101, -70, -101, -70, -101, -69, -102, -70, -101, -69, -101, -69, -101, -70,
-102, -69, -102, -69, -103, -69, -102, -69, -103, -68, -103, -68, -102, -69,
-102, -67, -102, -68, -103, -67, -102, -67, -102, -66, -102, -66, -101, -66,
-100, -66, -101, -64, -101, -64, -100, -62, -99, -62, -100, -62, -99, -60, -98,
-59, -98, -59, -97, -57, -97, -56, -96, -54, -96, -54, -94, -52, -94, -52, -93,
-50, -92, -48, -91, -47, -90, -45, -89, -43, -87, -41, -86, -39, -84, -37, -83,
-36, -82, -33, -80, -31, -79, -29, -77, -27, -76, -24, -74, -22, -71, -20, -69,
-17, -66, -13, -63, -12, -60, -9, -55, -8, -42, -4, -37, -5, -20, -15, 11, -17,
26, -14, 30, -13, 39, -10, 38, -7, 51, -3, 30, };

#endif /* AKWF_stereo_0063_512_H_ */
