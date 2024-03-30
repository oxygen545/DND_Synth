#ifndef AKWF_0401_512_H_
#define AKWF_0401_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0401_512_NUM_CELLS 512
#define AKWF_0401_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0401_512_DATA [] = {4,
11, 12, 14, 15, 18, 20, 23, 25, 26, 27, 25, 26, 28, 31, 34, 37, 39, 38, 39, 41,
44, 48, 52, 57, 60, 64, 67, 70, 71, 72, 76, 81, 87, 92, 95, 98, 102, 103, 106,
108, 107, 107, 108, 110, 110, 109, 109, 109, 109, 108, 107, 109, 109, 109, 107,
104, 102, 98, 94, 94, 93, 94, 93, 93, 92, 92, 89, 87, 85, 82, 80, 78, 78, 80,
82, 85, 87, 91, 92, 93, 93, 91, 86, 83, 81, 77, 74, 71, 70, 72, 72, 72, 74, 74,
76, 77, 76, 74, 71, 67, 64, 62, 62, 63, 66, 66, 67, 65, 67, 69, 72, 74, 77, 76,
77, 79, 79, 79, 81, 83, 87, 91, 94, 97, 100, 99, 98, 98, 99, 100, 102, 101, 100,
98, 96, 93, 91, 89, 90, 92, 94, 94, 94, 97, 100, 101, 101, 99, 97, 96, 96, 96,
97, 98, 102, 104, 105, 107, 107, 108, 110, 112, 116, 119, 120, 121, 119, 120,
122, 124, 123, 123, 122, 119, 116, 113, 112, 110, 107, 105, 104, 103, 103, 102,
102, 104, 104, 105, 109, 114, 121, 124, 127, 127, 127, 127, 127, 124, 120, 116,
114, 113, 112, 110, 109, 106, 104, 102, 102, 100, 99, 99, 97, 98, 98, 99, 98,
100, 103, 103, 104, 107, 111, 114, 113, 114, 114, 115, 115, 114, 114, 115, 117,
116, 117, 117, 117, 117, 118, 115, 112, 111, 108, 104, 99, 95, 94, 94, 95, 96,
96, 100, 80, 29, 4, -6, -12, -13, -15, -16, -19, -21, -23, -26, -27, -26, -25,
-25, -29, -30, -35, -38, -38, -38, -39, -41, -44, -48, -53, -58, -62, -65, -68,
-70, -72, -73, -77, -82, -88, -92, -95, -99, -101, -105, -106, -108, -107, -107,
-108, -109, -109, -109, -109, -108, -108, -108, -107, -109, -109, -109, -107,
-104, -102, -96, -94, -94, -94, -93, -93, -92, -92, -92, -89, -86, -84, -81,
-80, -78, -78, -81, -82, -86, -88, -91, -92, -93, -93, -89, -85, -83, -79, -76,
-72, -70, -71, -72, -72, -73, -74, -74, -76, -77, -76, -74, -70, -65, -63, -61,
-62, -65, -65, -67, -66, -65, -67, -69, -73, -75, -76, -77, -77, -79, -79, -81,
-81, -84, -89, -92, -95, -98, -99, -99, -98, -99, -100, -102, -101, -101, -99,
-97, -95, -92, -91, -90, -90, -92, -93, -95, -94, -97, -99, -100, -100, -98,
-97, -96, -96, -97, -97, -100, -101, -104, -106, -107, -107, -108, -110, -114,
-117, -119, -120, -120, -120, -121, -122, -123, -123, -121, -121, -119, -114,
-113, -111, -109, -107, -105, -104, -103, -103, -102, -102, -104, -104, -105,
-110, -116, -122, -124, -126, -127, -128, -128, -127, -123, -120, -116, -114,
-112, -111, -109, -108, -105, -104, -102, -102, -99, -99, -98, -98, -97, -98,
-99, -99, -101, -102, -104, -106, -108, -111, -113, -114, -115, -115, -116,
-115, -113, -114, -115, -117, -117, -117, -116, -116, -116, -118, -115, -111,
-110, -108, -103, -98, -95, -94, -95, -94, -96, -96, -100, -71, -20, -2, };

#endif /* AKWF_0401_512_H_ */