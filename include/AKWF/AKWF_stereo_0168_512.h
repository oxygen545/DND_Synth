#ifndef AKWF_stereo_0168_512_H_
#define AKWF_stereo_0168_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0168_512_NUM_CELLS 1024
#define AKWF_stereo_0168_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0168_512_DATA
[] = {0, 56, 3, 75, 4, 67, 6, 74, 8, 70, 9, 74, 12, 73, 14, 76, 17, 74, 18, 76,
20, 75, 22, 77, 23, 76, 26, 78, 27, 79, 30, 79, 31, 79, 33, 81, 36, 80, 37, 81,
39, 81, 41, 81, 43, 82, 43, 83, 46, 82, 48, 82, 49, 83, 50, 83, 51, 84, 53, 83,
55, 85, 56, 84, 58, 86, 60, 86, 61, 87, 62, 87, 63, 88, 65, 89, 66, 89, 69, 90,
68, 90, 71, 90, 71, 91, 73, 91, 75, 91, 76, 91, 77, 91, 77, 91, 79, 91, 80, 91,
81, 90, 82, 91, 83, 90, 85, 89, 85, 89, 86, 89, 88, 89, 88, 88, 89, 89, 90, 88,
91, 87, 91, 87, 92, 88, 94, 86, 95, 87, 96, 86, 96, 86, 97, 86, 99, 86, 100, 86,
100, 86, 101, 86, 103, 85, 103, 86, 104, 85, 104, 85, 105, 85, 106, 85, 108, 85,
108, 84, 109, 84, 110, 84, 110, 83, 111, 83, 112, 83, 113, 83, 113, 82, 114, 82,
115, 81, 116, 82, 116, 82, 117, 83, 117, 85, 119, 86, 118, 87, 119, 90, 120, 91,
120, 94, 121, 96, 120, 98, 121, 99, 122, 101, 123, 103, 122, 105, 123, 107, 124,
109, 125, 113, 124, 114, 125, 116, 125, 118, 126, 120, 127, 123, 127, 123, 127,
125, 127, 125, 126, 126, 126, 126, 125, 126, 124, 125, 123, 124, 121, 123, 121,
121, 119, 121, 117, 118, 115, 118, 113, 116, 112, 114, 111, 113, 109, 111, 108,
109, 106, 108, 104, 106, 104, 104, 101, 103, 100, 101, 98, 100, 98, 98, 95, 96,
93, 95, 93, 95, 91, 93, 90, 91, 89, 90, 87, 89, 85, 87, 84, 86, 82, 85, 81, 83,
79, 82, 77, 81, 77, 80, 75, 80, 74, 78, 73, 77, 72, 76, 71, 75, 69, 75, 67, 73,
65, 73, 64, 71, 62, 71, 61, 70, 60, 69, 58, 68, 57, 68, 56, 66, 54, 66, 53, 64,
51, 62, 50, 61, 49, 58, 48, 56, 47, 53, 45, 51, 44, 48, 42, 47, 42, 44, 41, 41,
40, 38, 39, 36, 38, 33, 36, 30, 35, 29, 35, 26, 35, 24, 33, 21, 32, 19, 31, 16,
30, 14, 29, 12, 28, 9, 27, 8, 26, 5, 26, 3, 25, 0, 24, -1, 24, -4, 23, -6, 22,
-8, 21, -10, 20, -12, 20, -13, 19, -15, 17, -18, 17, -20, 17, -21, 15, -23, 16,
-25, 15, -26, 14, -29, 13, -30, 13, -32, 11, -34, 11, -34, 10, -35, 11, -37, 10,
-38, 11, -40, 10, -41, 10, -42, 10, -42, 10, -44, 10, -45, 10, -45, 10, -46, 10,
-47, 9, -49, 10, -49, 9, -49, 9, -51, 9, -51, 10, -52, 9, -53, 10, -54, 9, -55,
10, -56, 10, -57, 10, -57, 10, -58, 10, -60, 10, -60, 10, -60, 10, -62, 9, -62,
9, -63, 9, -64, 10, -64, 10, -65, 9, -65, 8, -66, 7, -67, 6, -67, 5, -68, 4,
-69, 1, -70, 0, -71, -2, -71, -4, -72, -6, -73, -8, -74, -10, -73, -12, -75,
-14, -76, -16, -77, -18, -77, -20, -78, -22, -78, -24, -78, -26, -79, -27, -79,
-30, -80, -31, -81, -33, -81, -35, -81, -37, -83, -39, -83, -40, -82, -42, -84,
-44, -83, -46, -85, -46, -84, -49, -85, -50, -85, -52, -85, -54, -85, -55, -87,
-57, -86, -58, -87, -60, -88, -61, -88, -62, -88, -63, -89, -65, -89, -66, -90,
-67, -90, -68, -90, -70, -91, -72, -91, -73, -93, -74, -93, -75, -92, -77, -93,
-78, -93, -79, -93, -80, -92, -81, -92, -83, -91, -83, -92, -85, -91, -85, -91,
-86, -92, -88, -91, -89, -91, -90, -90, -91, -90, -92, -89, -93, -90, -93, -88,
-95, -89, -95, -88, -97, -88, -98, -88, -98, -88, -99, -88, -99, -87, -100, -87,
-102, -88, -102, -88, -103, -87, -104, -88, -105, -86, -105, -86, -108, -86,
-107, -86, -109, -86, -110, -86, -111, -86, -111, -85, -112, -85, -113, -85,
-113, -85, -114, -84, -115, -84, -116, -84, -116, -84, -117, -83, -118, -84,
-118, -84, -118, -87, -119, -88, -119, -90, -120, -91, -120, -93, -121, -95,
-121, -97, -122, -100, -123, -102, -123, -103, -123, -105, -123, -107, -124,
-109, -124, -112, -125, -115, -126, -116, -126, -118, -126, -120, -127, -122,
-128, -124, -128, -126, -128, -127, -128, -127, -128, -128, -126, -128, -126,
-126, -125, -126, -124, -125, -122, -124, -121, -123, -119, -122, -118, -120,
-117, -118, -115, -117, -113, -115, -112, -114, -110, -112, -109, -110, -108,
-108, -105, -108, -104, -106, -103, -104, -101, -103, -100, -102, -98, -100,
-96, -98, -95, -97, -93, -96, -91, -94, -90, -92, -89, -91, -87, -90, -86, -89,
-85, -87, -84, -86, -81, -84, -80, -83, -78, -83, -79, -82, -77, -80, -75, -79,
-74, -79, -72, -78, -71, -76, -69, -76, -68, -75, -66, -74, -65, -73, -64, -72,
-62, -71, -61, -70, -59, -70, -58, -69, -57, -68, -55, -67, -54, -65, -53, -63,
-51, -61, -49, -59, -49, -57, -47, -55, -46, -52, -45, -50, -45, -47, -44, -45,
-42, -42, -40, -40, -40, -38, -39, -35, -38, -32, -37, -30, -36, -27, -35, -25,
-34, -22, -33, -20, -31, -18, -32, -15, -30, -13, -29, -10, -29, -9, -27, -6,
-27, -5, -26, -2, -25, 0, -24, 2, -23, 4, -23, 6, -22, 7, -21, 10, -21, 12, -20,
14, -19, 16, -19, 18, -18, 20, -18, 22, -16, 23, -16, 25, -15, 27, -14, 29, -14,
30, -13, 31, -12, 33, -12, 34, -12, 36, -11, 37, -11, 38, -11, 40, -10, 40, -12,
41, -11, 43, -11, 42, -11, 44, -11, 45, -11, 46, -11, 47, -11, 48, -11, 49, -11,
50, -11, 50, -10, 52, -12, 52, -11, 53, -10, 53, -12, 54, -12, 55, -11, 56, -11,
56, -11, 58, -12, 59, -10, 59, -11, 60, -10, 60, -10, 61, -11, 60, -11, 63, -11,
61, -10, 65, -9, 63, -9, 67, -7, 64, -5, 69, -4, 63, -2, 76, -1, 44, };

#endif /* AKWF_stereo_0168_512_H_ */