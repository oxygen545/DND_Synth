#ifndef AKWF_1426_512_H_
#define AKWF_1426_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1426_512_NUM_CELLS 512
#define AKWF_1426_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1426_512_DATA [] = {0,
0, 1, 2, 2, 2, 2, 1, 3, 3, 2, 2, 2, 2, 3, 2, 2, 3, 3, 1, 2, 2, 2, 2, 2, 1, 2, 2,
2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 3, 2, 2, 2, 3, 2,
2, 3, 3, 3, 3, 4, 3, 3, 2, 3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 3,
3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 4, 3, 4,
3, 3, 3, 4, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 3, 3, 4, 3, 3, 3, 3,
3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 2, 3, 2, 3, 3, 3, 4, 3, 3, 4, 2, 3, 2, 2, 2,
3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 2, 2, 3, 2, 3, 2,
1, 3, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1,
1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1,
0, 1, 0, 1, 0, -1, 0, 0, 0, 1, 0, 0, 13, 30, 33, 35, 39, 48, 57, 64, 67, 69, 70,
69, 70, 71, 71, 72, 73, 74, 76, 79, 84, 89, 94, 99, 102, 104, 104, 104, 104,
103, 103, 102, 101, 99, 97, 94, 92, 89, 87, 84, 83, 81, 78, 76, 73, 71, 69, 66,
64, 62, 60, 56, 54, 51, 48, 45, 41, 38, 35, 31, 27, 25, 21, 18, 15, 11, 9, 7, 4,
2, 0, -2, -4, -6, -6, -8, -9, -11, -12, -12, -14, -16, -16, -18, -19, -21, -23,
-24, -26, -29, -30, -32, -35, -37, -39, -43, -44, -47, -50, -53, -56, -58, -62,
-64, -66, -69, -72, -74, -77, -79, -81, -84, -87, -88, -90, -93, -95, -97, -98,
-100, -102, -103, -106, -107, -109, -112, -114, -115, -118, -119, -120, -121,
-123, -123, -125, -125, -127, -126, -127, -127, -127, -127, -128, -128, -127,
-128, -128, -127, -128, -127, -128, -126, -126, -124, -124, -122, -120, -119,
-118, -117, -115, -113, -112, -110, -109, -108, -106, -105, -103, -101, -100,
-98, -97, -95, -94, -92, -91, -89, -87, -86, -84, -83, -82, -80, -78, -77, -76,
-75, -73, -73, -70, -70, -68, -68, -66, -65, -64, -63, -62, -61, -59, -59, -58,
-56, -56, -54, -52, -52, -50, -50, -47, -47, -45, -43, -43, -41, -40, -39, -37,
-35, -34, -33, -31, -31, -28, -27, -26, -24, -23, -22, -20, -19, -18, -17, -15,
-14, -13, -12, -10, -10, -9, -8, -6, -6, -5, -5, -5, -4, -3, -3, -3, -2, -1, -1,
0, 0, };

#endif /* AKWF_1426_512_H_ */
