#ifndef AKWF_stereo_0112_512_H_
#define AKWF_stereo_0112_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0112_512_NUM_CELLS 1024
#define AKWF_stereo_0112_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0112_512_DATA
[] = {1, 1, 3, 2, 5, 4, 6, 5, 8, 7, 9, 9, 12, 11, 14, 13, 16, 13, 17, 15, 19,
16, 22, 18, 23, 20, 26, 20, 27, 22, 29, 24, 30, 25, 33, 28, 35, 29, 36, 30, 38,
32, 40, 33, 41, 35, 43, 37, 44, 37, 46, 39, 48, 40, 50, 42, 51, 43, 53, 45, 54,
46, 57, 48, 58, 50, 59, 50, 61, 51, 62, 52, 65, 54, 65, 56, 67, 57, 68, 58, 70,
60, 72, 61, 73, 62, 74, 63, 75, 65, 77, 66, 78, 67, 80, 67, 81, 69, 82, 70, 84,
71, 84, 72, 86, 73, 87, 75, 88, 76, 89, 78, 90, 79, 92, 79, 92, 80, 93, 81, 94,
83, 96, 84, 97, 84, 97, 86, 99, 87, 100, 88, 100, 89, 101, 89, 102, 91, 102, 93,
104, 92, 104, 94, 106, 95, 106, 96, 107, 96, 108, 98, 109, 98, 109, 99, 110,
100, 111, 101, 111, 102, 111, 102, 113, 103, 113, 104, 114, 105, 114, 105, 115,
107, 115, 107, 116, 109, 116, 109, 117, 110, 117, 111, 118, 111, 118, 112, 120,
113, 119, 113, 120, 114, 121, 115, 121, 116, 121, 117, 121, 117, 122, 118, 122,
117, 123, 120, 122, 119, 126, 124, 123, 119, 127, 127, 104, 94, 90, 76, 92, 91,
83, 92, 85, 105, 80, 99, 79, 94, 76, 87, 78, 87, 78, 88, 80, 88, 79, 84, 81, 83,
83, 85, 85, 87, 88, 87, 87, 84, 91, 86, 91, 87, 94, 88, 96, 86, 99, 87, 99, 88,
102, 90, 103, 88, 105, 89, 106, 89, 108, 92, 109, 90, 109, 87, 110, 86, 111, 86,
112, 88, 109, 79, 108, 73, 103, 69, 106, 81, 95, 81, 99, 98, 78, 73, 53, 39, 61,
51, 57, 45, 60, 50, 59, 48, 60, 50, 59, 49, 61, 50, 61, 50, 62, 52, 62, 52, 61,
52, 62, 53, 62, 53, 63, 53, 63, 54, 64, 55, 63, 55, 64, 54, 64, 55, 64, 55, 64,
56, 64, 57, 65, 56, 65, 57, 64, 57, 65, 57, 65, 57, 65, 56, 65, 57, 66, 58, 66,
57, 66, 58, 66, 58, 67, 58, 67, 59, 67, 59, 67, 58, 69, 60, 67, 59, 68, 61, 69,
61, 69, 61, 68, 60, 69, 61, 69, 61, 71, 62, 69, 61, 71, 63, 69, 61, 71, 63, 70,
62, 72, 63, 71, 62, 72, 64, 71, 62, 72, 63, 72, 63, 72, 62, 73, 64, 71, 62, 75,
65, 71, 61, 76, 67, 69, 59, 80, 71, 66, 54, 87, 82, 36, 19, 23, 6, 38, 42, 6,
16, 22, 42, 5, 21, 9, 19, -1, 4, 3, 10, -2, 8, 1, 7, -3, -1, -3, -2, -2, 0, -1,
1, -2, 0, -2, -4, -2, -2, -2, -2, 1, 0, -2, -4, 1, -3, 0, -4, 2, -1, 0, -3, 2,
-2, 1, -4, 2, -2, 1, -3, 2, -2, 1, -3, 1, -2, 1, -2, 2, -1, 2, 0, 1, -1, 1, -1,
1, -1, 1, 1, 0, 0, -1, 0, -1, 0, 0, 1, -1, 0, -1, 2, -2, 0, -2, 1, -2, 2, -2, 2,
-2, 2, -2, 2, -2, 2, -2, 2, -1, 4, -2, 2, -1, 3, -2, 2, 0, 4, -1, 3, 2, 4, 0, 0,
2, 3, 0, 2, 4, 5, 1, -1, 3, 0, 1, -2, 5, 3, 1, -3, 1, -6, -2, -11, -1, -7, -2,
-10, -6, -19, -9, -28, -19, -37, -10, -17, -44, -43, -14, 8, -58, -46, -82, -75,
-67, -57, -79, -70, -69, -58, -77, -69, -70, -60, -75, -67, -70, -61, -75, -66,
-70, -61, -73, -65, -70, -60, -72, -64, -70, -62, -71, -63, -70, -62, -71, -63,
-71, -62, -70, -63, -70, -62, -69, -61, -70, -61, -69, -60, -70, -61, -68, -61,
-69, -61, -67, -60, -69, -61, -68, -60, -68, -61, -67, -59, -67, -60, -67, -58,
-66, -60, -65, -58, -66, -58, -66, -57, -66, -58, -66, -57, -65, -57, -65, -56,
-65, -58, -64, -56, -66, -57, -65, -56, -64, -56, -64, -55, -64, -56, -64, -55,
-63, -56, -63, -54, -64, -55, -63, -54, -64, -54, -62, -52, -62, -52, -62, -51,
-63, -52, -61, -50, -62, -51, -60, -50, -60, -50, -60, -49, -60, -49, -59, -49,
-58, -47, -60, -48, -55, -43, -89, -88, -97, -92, -98, -81, -105, -78, -103,
-68, -109, -76, -109, -81, -113, -89, -110, -86, -111, -87, -109, -87, -110,
-91, -108, -90, -106, -89, -104, -88, -103, -89, -101, -90, -99, -89, -97, -87,
-94, -86, -93, -88, -91, -87, -90, -86, -87, -84, -88, -87, -84, -85, -82, -85,
-81, -83, -80, -85, -79, -87, -78, -88, -77, -86, -77, -88, -79, -96, -81, -102,
-86, -102, -84, -91, -92, -90, -89, -74, -115, -109, -128, -128, -123, -119,
-125, -123, -122, -119, -124, -121, -121, -117, -122, -118, -121, -115, -121,
-118, -119, -115, -120, -115, -119, -115, -119, -115, -119, -113, -118, -112,
-117, -111, -117, -111, -117, -110, -116, -109, -116, -108, -116, -107, -114,
-107, -114, -106, -113, -105, -113, -103, -113, -104, -112, -101, -110, -102,
-110, -100, -110, -100, -108, -99, -109, -98, -107, -97, -107, -97, -106, -95,
-105, -94, -104, -94, -103, -93, -103, -92, -102, -91, -101, -89, -100, -89,
-99, -88, -98, -87, -98, -86, -97, -85, -95, -83, -95, -82, -92, -81, -91, -80,
-91, -79, -89, -78, -89, -77, -87, -75, -87, -75, -85, -73, -84, -72, -83, -71,
-81, -70, -80, -69, -79, -68, -78, -66, -75, -65, -76, -64, -74, -62, -72, -62,
-72, -61, -69, -60, -68, -58, -66, -56, -65, -56, -64, -53, -62, -53, -61, -51,
-59, -50, -57, -49, -55, -47, -54, -46, -53, -44, -51, -43, -49, -41, -47, -41,
-45, -38, -44, -37, -42, -36, -40, -34, -40, -34, -37, -30, -36, -30, -33, -28,
-32, -26, -30, -26, -28, -24, -26, -22, -24, -20, -23, -19, -21, -17, -19, -16,
-17, -14, -16, -13, -14, -12, -12, -9, -10, -8, -8, -6, -6, -5, -4, -4, -3, -2,
0, 0, };

#endif /* AKWF_stereo_0112_512_H_ */
