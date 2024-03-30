#ifndef AKWF_stereo_0125_512_H_
#define AKWF_stereo_0125_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0125_512_NUM_CELLS 1024
#define AKWF_stereo_0125_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0125_512_DATA
[] = {0, -18, 4, -21, 8, -16, 11, -14, 16, -9, 20, -7, 23, -2, 28, -1, 32, 5,
35, 7, 39, 11, 42, 15, 46, 18, 51, 21, 54, 26, 57, 29, 61, 33, 64, 36, 68, 40,
72, 44, 74, 47, 78, 50, 82, 54, 84, 57, 88, 61, 90, 65, 93, 67, 96, 71, 98, 73,
101, 78, 104, 80, 106, 84, 108, 87, 109, 89, 112, 91, 114, 93, 116, 96, 117, 99,
119, 101, 121, 104, 122, 105, 123, 107, 124, 110, 125, 110, 126, 111, 126, 113,
126, 114, 127, 117, 127, 118, 127, 118, 127, 119, 127, 119, 127, 120, 127, 121,
127, 121, 127, 122, 127, 122, 127, 122, 126, 123, 126, 123, 124, 122, 125, 123,
125, 123, 124, 122, 124, 123, 122, 123, 123, 122, 122, 122, 122, 122, 121, 122,
121, 122, 119, 122, 119, 121, 119, 120, 119, 120, 117, 121, 116, 120, 117, 120,
116, 119, 115, 118, 114, 118, 114, 118, 113, 117, 112, 117, 112, 116, 111, 116,
110, 115, 110, 115, 108, 114, 107, 113, 105, 112, 104, 111, 102, 110, 100, 110,
99, 108, 96, 106, 95, 106, 93, 104, 91, 102, 89, 100, 86, 98, 82, 97, 81, 95,
78, 93, 75, 90, 73, 89, 69, 85, 66, 83, 62, 80, 58, 77, 55, 75, 51, 71, 47, 68,
43, 65, 39, 62, 36, 59, 32, 55, 27, 53, 23, 48, 18, 45, 14, 41, 10, 37, 6, 33,
1, 29, -4, 25, -8, 22, -12, 17, -17, 13, -21, 9, -25, 6, -28, 2, -33, -3, -36,
-6, -40, -10, -43, -14, -47, -18, -51, -21, -53, -25, -56, -28, -59, -31, -61,
-35, -64, -38, -67, -42, -70, -44, -71, -48, -74, -51, -76, -54, -79, -57, -81,
-59, -82, -61, -84, -64, -86, -66, -87, -68, -90, -71, -90, -74, -92, -76, -95,
-78, -95, -80, -97, -82, -97, -85, -99, -85, -101, -88, -102, -89, -103, -91,
-103, -92, -105, -94, -105, -95, -105, -96, -105, -97, -107, -98, -108, -100,
-107, -100, -108, -101, -108, -102, -108, -103, -108, -104, -109, -104, -109,
-104, -108, -105, -108, -105, -108, -105, -109, -106, -107, -107, -107, -107,
-108, -107, -107, -106, -106, -106, -105, -106, -105, -106, -105, -106, -104,
-105, -103, -105, -103, -104, -102, -105, -101, -104, -100, -104, -100, -102,
-99, -102, -98, -102, -97, -101, -96, -101, -95, -99, -95, -98, -93, -97, -92,
-97, -91, -96, -90, -95, -90, -95, -88, -93, -87, -92, -86, -91, -84, -90, -83,
-89, -82, -87, -80, -86, -79, -86, -78, -85, -76, -83, -75, -82, -74, -80, -73,
-79, -71, -78, -70, -76, -68, -76, -67, -75, -65, -72, -64, -72, -61, -70, -60,
-68, -58, -67, -56, -65, -53, -63, -52, -62, -50, -60, -47, -59, -46, -58, -43,
-55, -41, -53, -38, -52, -36, -50, -34, -48, -31, -46, -28, -45, -26, -41, -23,
-39, -19, -37, -17, -35, -14, -32, -12, -31, -8, -28, -6, -26, -1, -22, 2, -20,
4, -17, 8, -14, 11, -12, 14, -9, 17, -6, 22, -3, 26, 0, 28, 3, 33, 7, 36, 9, 39,
12, 43, 16, 47, 19, 49, 23, 54, 27, 57, 29, 61, 32, 64, 36, 68, 40, 71, 43, 73,
47, 78, 50, 80, 54, 83, 58, 86, 61, 89, 63, 93, 66, 96, 71, 98, 73, 101, 77,
103, 80, 105, 82, 107, 86, 109, 88, 110, 92, 113, 93, 115, 95, 116, 98, 117,
101, 119, 103, 121, 104, 121, 107, 122, 109, 123, 110, 124, 111, 124, 113, 124,
114, 125, 115, 125, 117, 124, 118, 126, 118, 126, 119, 126, 120, 124, 121, 124,
121, 124, 121, 124, 122, 122, 122, 123, 122, 123, 122, 121, 122, 121, 121, 120,
122, 120, 121, 120, 121, 119, 121, 117, 120, 117, 120, 116, 119, 115, 118, 113,
118, 113, 117, 112, 116, 112, 116, 111, 115, 110, 115, 109, 113, 108, 113, 107,
112, 106, 111, 104, 111, 104, 109, 102, 109, 101, 107, 100, 106, 99, 105, 98,
105, 97, 104, 94, 102, 92, 101, 92, 100, 90, 98, 88, 97, 86, 96, 83, 94, 82, 92,
80, 91, 76, 89, 74, 87, 72, 85, 69, 83, 66, 81, 63, 79, 61, 77, 57, 74, 55, 71,
52, 69, 48, 67, 45, 64, 42, 61, 38, 58, 35, 55, 31, 52, 27, 48, 24, 46, 20, 43,
16, 40, 12, 36, 9, 32, 4, 29, 1, 25, -4, 23, -8, 18, -11, 16, -15, 12, -19, 9,
-24, 4, -27, 1, -30, -2, -35, -6, -38, -10, -42, -13, -45, -17, -48, -21, -52,
-24, -55, -28, -59, -31, -61, -34, -64, -38, -67, -41, -71, -44, -73, -47, -74,
-50, -78, -54, -80, -56, -83, -59, -84, -61, -86, -63, -88, -66, -90, -68, -92,
-71, -94, -74, -96, -77, -97, -78, -99, -80, -101, -82, -102, -85, -104, -87,
-105, -89, -105, -90, -107, -93, -108, -94, -110, -96, -111, -98, -113, -100,
-113, -102, -114, -103, -116, -105, -116, -106, -117, -108, -118, -109, -117,
-110, -119, -111, -119, -113, -119, -113, -120, -115, -121, -116, -121, -116,
-122, -118, -121, -118, -121, -118, -122, -118, -122, -119, -122, -120, -121,
-120, -121, -120, -121, -120, -120, -121, -120, -120, -120, -121, -120, -120,
-119, -120, -119, -121, -118, -120, -118, -120, -117, -120, -116, -120, -115,
-120, -116, -119, -114, -119, -114, -118, -113, -118, -112, -118, -112, -117,
-112, -116, -110, -116, -110, -115, -109, -114, -108, -114, -108, -114, -107,
-112, -106, -111, -106, -110, -104, -110, -104, -109, -102, -108, -101, -106,
-100, -106, -98, -104, -98, -104, -97, -102, -95, -101, -94, -100, -93, -98,
-92, -97, -91, -96, -88, -94, -86, -93, -85, -91, -84, -91, -82, -90, -80, -88,
-77, -87, -76, -84, -74, -83, -72, -81, -69, -80, -68, -78, -64, -76, -63, -75,
-59, -73, -58, -70, -54, -68, -52, -66, -49, -65, -46, -62, -43, -59, -40, -57,
-37, -54, -33, -51, -31, -48, -26, -47, -24, -43, -20, -41, -16, -37, -12, -35,
-9, -29, -6, -30, -2, -17, };

#endif /* AKWF_stereo_0125_512_H_ */