#ifndef AKWF_1691_512_H_
#define AKWF_1691_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1691_512_NUM_CELLS 512
#define AKWF_1691_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1691_512_DATA [] = {0,
4, 6, 10, 13, 16, 18, 21, 24, 27, 31, 33, 36, 38, 41, 44, 46, 49, 52, 55, 58,
60, 62, 65, 68, 70, 73, 75, 78, 79, 82, 84, 87, 89, 92, 94, 95, 97, 99, 102,
104, 105, 107, 108, 110, 112, 114, 114, 116, 117, 118, 119, 119, 121, 122, 122,
123, 124, 125, 125, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 126, 126, 126, 125, 123, 123, 123, 122, 121, 121, 120, 118, 118, 117,
116, 115, 113, 112, 111, 110, 109, 107, 105, 104, 102, 102, 100, 99, 97, 96, 95,
93, 91, 89, 88, 85, 82, 81, 79, 77, 75, 73, 71, 69, 67, 66, 63, 61, 59, 56, 54,
52, 48, 46, 43, 40, 37, 35, 32, 29, 26, 24, 21, 17, 14, 12, 9, 5, 2, -1, -3, -7,
-9, -12, -14, -17, -19, -22, -23, -26, -29, -30, -32, -34, -36, -39, -40, -42,
-43, -44, -45, -47, -48, -49, -50, -52, -52, -53, -54, -55, -56, -58, -59, -60,
-61, -62, -63, -65, -65, -66, -67, -69, -70, -72, -73, -74, -76, -77, -78, -80,
-82, -83, -84, -86, -87, -88, -89, -91, -91, -92, -93, -94, -95, -95, -96, -96,
-96, -96, -96, -97, -96, -95, -96, -95, -94, -92, -91, -90, -89, -86, -85, -84,
-81, -80, -78, -76, -72, -70, -67, -65, -62, -60, -57, -53, -51, -48, -45, -43,
-39, -36, -33, -31, -27, -26, -22, -20, -17, -15, -12, -10, -8, -5, -3, -1, 0,
3, 5, 7, 8, 10, 12, 14, 15, 18, 20, 21, 22, 23, 25, 26, 28, 29, 31, 32, 33, 35,
36, 37, 39, 39, 41, 42, 43, 45, 46, 48, 49, 50, 52, 52, 54, 55, 56, 58, 57, 59,
61, 61, 63, 63, 63, 65, 66, 66, 66, 68, 69, 70, 70, 71, 71, 72, 73, 72, 72, 73,
74, 74, 74, 74, 74, 74, 75, 75, 75, 74, 74, 74, 74, 74, 73, 73, 73, 73, 72, 73,
72, 72, 71, 70, 69, 69, 67, 68, 67, 67, 65, 65, 65, 64, 63, 63, 62, 62, 61, 61,
60, 59, 59, 58, 56, 55, 54, 53, 52, 52, 50, 49, 48, 48, 46, 45, 44, 42, 41, 40,
37, 35, 33, 32, 30, 27, 25, 23, 21, 19, 16, 14, 12, 8, 6, 4, 1, -2, -5, -7, -10,
-13, -15, -18, -20, -23, -24, -28, -30, -32, -34, -37, -40, -41, -44, -45, -48,
-49, -51, -54, -55, -57, -58, -61, -62, -64, -65, -67, -69, -70, -71, -72, -74,
-75, -77, -78, -80, -81, -82, -83, -84, -86, -87, -88, -90, -90, -92, -92, -95,
-96, -97, -99, -100, -100, -101, -103, -102, -104, -104, -105, -105, -106, -106,
-107, -106, -106, -106, -106, -106, -105, -104, -104, -102, -101, -101, -99,
-97, -96, -95, -93, -90, -89, -87, -85, -82, -80, -77, -75, -72, -69, -65, -63,
-59, -57, -54, -51, -48, -46, -41, -38, -36, -33, -30, -27, -23, -20, -17, -13,
-11, -8, -4, -1, };

#endif /* AKWF_1691_512_H_ */