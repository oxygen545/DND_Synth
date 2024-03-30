#ifndef AKWF_stereo_0174_512_H_
#define AKWF_stereo_0174_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0174_512_NUM_CELLS 1024
#define AKWF_stereo_0174_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0174_512_DATA
[] = {1, 50, 2, 67, 4, 61, 6, 67, 7, 63, 8, 67, 10, 64, 11, 68, 13, 67, 16, 69,
18, 69, 19, 70, 20, 70, 22, 72, 24, 72, 25, 73, 27, 72, 29, 73, 30, 74, 32, 74,
34, 76, 36, 76, 38, 76, 40, 77, 42, 77, 43, 78, 45, 78, 47, 78, 48, 79, 50, 79,
52, 80, 54, 80, 55, 82, 57, 81, 59, 82, 61, 82, 63, 83, 63, 82, 67, 82, 67, 83,
70, 83, 71, 83, 72, 83, 74, 84, 75, 85, 76, 86, 79, 85, 79, 86, 81, 85, 83, 86,
83, 86, 85, 86, 86, 85, 88, 86, 89, 85, 89, 86, 91, 86, 93, 86, 94, 86, 95, 86,
95, 85, 97, 86, 97, 86, 98, 86, 100, 86, 100, 86, 101, 85, 102, 86, 102, 85,
103, 86, 104, 84, 105, 86, 105, 84, 106, 85, 106, 85, 106, 83, 107, 84, 107, 84,
108, 83, 108, 83, 108, 82, 109, 82, 109, 81, 109, 81, 110, 81, 110, 81, 109, 81,
110, 80, 110, 79, 109, 79, 109, 79, 110, 78, 110, 78, 109, 77, 110, 77, 109, 77,
109, 77, 109, 77, 110, 76, 110, 75, 109, 75, 110, 75, 110, 74, 109, 74, 109, 74,
108, 74, 108, 73, 107, 73, 108, 72, 108, 72, 107, 71, 107, 71, 107, 72, 106, 70,
107, 70, 106, 71, 106, 70, 106, 70, 105, 69, 105, 69, 105, 69, 104, 69, 104, 68,
104, 68, 104, 68, 104, 67, 103, 67, 103, 67, 103, 67, 103, 67, 102, 66, 103, 66,
102, 67, 101, 66, 102, 65, 102, 66, 101, 66, 101, 65, 101, 65, 101, 65, 101, 64,
100, 65, 100, 65, 100, 64, 99, 64, 99, 65, 99, 64, 99, 63, 98, 63, 98, 63, 99,
63, 98, 63, 98, 63, 97, 63, 98, 62, 98, 63, 98, 62, 98, 62, 96, 61, 97, 62, 96,
62, 96, 61, 96, 61, 95, 61, 96, 61, 95, 60, 95, 59, 94, 60, 95, 60, 94, 60, 93,
58, 93, 59, 94, 58, 92, 58, 92, 57, 92, 57, 92, 57, 91, 56, 90, 55, 90, 55, 90,
54, 88, 53, 89, 53, 88, 53, 87, 51, 86, 52, 85, 50, 84, 50, 84, 48, 84, 49, 82,
47, 81, 46, 81, 47, 80, 46, 78, 44, 77, 43, 76, 43, 75, 41, 75, 41, 74, 39, 72,
39, 72, 38, 70, 37, 70, 36, 68, 35, 67, 34, 66, 33, 64, 31, 62, 30, 62, 29, 60,
28, 59, 27, 58, 25, 55, 24, 55, 23, 53, 22, 52, 20, 50, 18, 48, 18, 47, 16, 45,
14, 44, 14, 42, 12, 41, 11, 39, 9, 37, 8, 36, 7, 34, 5, 33, 4, 32, 2, 29, 2, 27,
0, 26, -1, 25, -3, 24, -5, 21, -5, 19, -8, 18, -8, 17, -9, 16, -11, 14, -13, 13,
-14, 10, -15, 8, -16, 7, -18, 7, -19, 5, -21, 3, -21, 1, -23, 0, -24, -1, -25,
-2, -27, -4, -29, -6, -30, -7, -31, -8, -33, -10, -35, -11, -36, -13, -37, -14,
-38, -15, -39, -17, -40, -18, -42, -20, -43, -20, -45, -22, -46, -23, -47, -24,
-49, -26, -50, -27, -52, -27, -53, -28, -54, -30, -55, -31, -56, -33, -58, -33,
-58, -35, -60, -35, -61, -36, -62, -38, -64, -39, -65, -40, -67, -41, -67, -42,
-68, -42, -70, -44, -71, -45, -71, -46, -73, -47, -74, -49, -76, -49, -76, -50,
-77, -52, -78, -52, -79, -54, -81, -54, -82, -55, -83, -56, -84, -57, -84, -58,
-86, -59, -87, -60, -88, -61, -89, -62, -90, -63, -91, -64, -92, -65, -93, -67,
-95, -67, -95, -68, -96, -69, -97, -70, -99, -71, -98, -72, -100, -73, -100,
-74, -102, -75, -102, -77, -104, -77, -104, -78, -106, -80, -106, -80, -106,
-81, -108, -83, -108, -84, -109, -85, -110, -87, -112, -86, -112, -88, -113,
-89, -113, -91, -113, -91, -115, -93, -115, -94, -116, -94, -117, -95, -118,
-96, -117, -97, -119, -99, -119, -100, -119, -101, -120, -102, -120, -102, -121,
-104, -121, -104, -121, -106, -122, -106, -122, -108, -122, -109, -123, -110,
-123, -109, -124, -111, -123, -113, -124, -113, -124, -114, -124, -115, -124,
-117, -125, -117, -125, -117, -125, -118, -125, -119, -125, -120, -124, -120,
-125, -121, -124, -122, -124, -122, -124, -123, -123, -124, -123, -124, -124,
-125, -123, -126, -122, -125, -122, -126, -122, -126, -121, -126, -121, -126,
-121, -127, -119, -127, -119, -127, -118, -128, -118, -128, -116, -128, -116,
-128, -115, -128, -114, -128, -113, -128, -113, -127, -112, -128, -111, -127,
-109, -127, -108, -126, -108, -127, -106, -127, -105, -127, -104, -126, -103,
-126, -102, -125, -100, -124, -99, -124, -98, -124, -96, -124, -94, -123, -92,
-122, -92, -121, -90, -120, -88, -120, -87, -119, -86, -119, -83, -118, -82,
-117, -80, -116, -79, -115, -77, -114, -76, -114, -74, -113, -72, -111, -70,
-110, -69, -109, -66, -108, -65, -107, -63, -106, -61, -105, -60, -105, -58,
-103, -55, -102, -54, -101, -52, -99, -49, -99, -49, -97, -46, -96, -45, -94,
-42, -94, -40, -93, -40, -91, -38, -90, -35, -88, -33, -87, -31, -86, -30, -85,
-29, -84, -27, -83, -25, -82, -23, -80, -21, -79, -20, -79, -17, -77, -17, -76,
-14, -76, -13, -74, -11, -72, -9, -72, -9, -71, -7, -68, -5, -68, -2, -66, -1,
-65, 0, -64, 2, -63, 3, -62, 5, -62, 6, -60, 7, -59, 9, -58, 10, -57, 11, -56,
13, -55, 15, -54, 16, -52, 17, -52, 18, -51, 19, -50, 20, -49, 21, -49, 23, -46,
24, -45, 26, -45, 27, -44, 27, -43, 29, -41, 29, -40, 31, -40, 32, -38, 34, -38,
35, -36, 36, -35, 37, -34, 38, -32, 39, -32, 40, -30, 41, -30, 42, -28, 43, -27,
45, -26, 44, -25, 46, -24, 47, -22, 47, -21, 48, -20, 50, -18, 51, -17, 51, -16,
53, -15, 53, -13, 55, -11, 54, -10, 57, -10, 55, -8, 59, -6, 56, -5, 62, -4, 56,
-1, 68, 0, 40, };

#endif /* AKWF_stereo_0174_512_H_ */
