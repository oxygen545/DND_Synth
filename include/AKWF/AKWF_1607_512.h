#ifndef AKWF_1607_512_H_
#define AKWF_1607_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1607_512_NUM_CELLS 512
#define AKWF_1607_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1607_512_DATA [] = {1,
6, 11, 15, 19, 23, 26, 30, 33, 36, 38, 41, 42, 43, 43, 42, 42, 41, 41, 39, 37,
35, 32, 30, 28, 27, 25, 24, 22, 21, 21, 20, 20, 21, 21, 22, 24, 27, 30, 33, 37,
40, 45, 50, 55, 61, 66, 73, 79, 85, 91, 95, 100, 104, 108, 111, 114, 115, 116,
117, 117, 118, 116, 116, 115, 114, 111, 110, 108, 107, 105, 102, 101, 98, 97,
96, 95, 94, 94, 94, 95, 97, 99, 102, 104, 107, 111, 114, 119, 122, 124, 127,
127, 127, 126, 122, 117, 110, 100, 90, 80, 69, 58, 47, 38, 30, 26, 23, 23, 24,
27, 30, 35, 42, 48, 56, 63, 70, 78, 83, 89, 93, 96, 99, 101, 102, 102, 101, 98,
94, 89, 80, 70, 56, 39, 18, -9, -34, -56, -76, -91, -102, -111, -119, -123,
-126, -127, -128, -127, -127, -126, -124, -124, -124, -123, -124, -123, -123,
-123, -122, -123, -122, -122, -120, -120, -120, -119, -118, -117, -117, -118,
-117, -119, -120, -122, -124, -125, -127, -128, -128, -127, -126, -124, -120,
-116, -110, -105, -101, -95, -88, -83, -78, -73, -69, -66, -62, -59, -57, -57,
-55, -55, -55, -55, -56, -58, -59, -60, -63, -66, -68, -70, -73, -75, -77, -79,
-80, -81, -82, -81, -81, -79, -78, -76, -73, -70, -66, -61, -57, -51, -47, -42,
-37, -31, -27, -23, -18, -13, -9, -5, -3, 1, 3, 5, 7, 8, 9, 10, 10, 9, 9, 8, 7,
6, 4, 3, 1, -1, -3, -4, -6, -7, -9, -10, -10, -11, -10, -9, -9, -7, -5, -2, 1,
3, 7, 11, 14, 19, 24, 28, 33, 37, 43, 48, 53, 58, 62, 66, 70, 74, 76, 79, 80,
81, 82, 82, 81, 80, 79, 76, 74, 73, 70, 67, 65, 62, 60, 59, 57, 56, 55, 55, 55,
56, 56, 58, 60, 62, 66, 70, 74, 79, 85, 90, 96, 102, 107, 113, 117, 121, 124,
126, 127, 127, 127, 126, 125, 123, 122, 119, 119, 118, 118, 117, 118, 117, 120,
120, 120, 121, 123, 122, 122, 123, 123, 123, 123, 124, 123, 124, 125, 125, 126,
127, 127, 127, 127, 125, 121, 117, 110, 99, 86, 70, 50, 28, 1, -24, -44, -60,
-74, -83, -91, -95, -99, -100, -102, -102, -100, -99, -95, -92, -87, -83, -76,
-69, -61, -55, -47, -39, -34, -29, -26, -23, -22, -23, -26, -33, -40, -50, -62,
-72, -84, -94, -103, -112, -119, -123, -126, -128, -128, -127, -123, -121, -117,
-115, -110, -106, -104, -100, -98, -97, -96, -94, -94, -95, -95, -95, -97, -100,
-101, -103, -104, -107, -109, -111, -113, -114, -114, -116, -117, -117, -118,
-117, -115, -114, -112, -109, -107, -103, -98, -94, -88, -83, -77, -71, -65,
-60, -54, -48, -43, -39, -35, -32, -28, -26, -24, -22, -21, -21, -20, -20, -20,
-22, -23, -23, -26, -27, -30, -31, -33, -36, -38, -39, -41, -41, -43, -43, -42,
-42, -41, -39, -37, -35, -32, -29, -26, -22, -17, -13, -9, -4, -1, };

#endif /* AKWF_1607_512_H_ */
