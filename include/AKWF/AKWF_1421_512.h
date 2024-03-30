#ifndef AKWF_1421_512_H_
#define AKWF_1421_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1421_512_NUM_CELLS 512
#define AKWF_1421_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1421_512_DATA [] = {0,
3, 5, 5, 8, 9, 11, 12, 14, 16, 18, 19, 21, 22, 23, 25, 27, 27, 28, 29, 31, 32,
32, 34, 34, 33, 34, 34, 34, 36, 36, 36, 36, 36, 36, 36, 36, 35, 35, 33, 34, 33,
32, 31, 30, 29, 28, 28, 27, 26, 25, 25, 24, 23, 22, 22, 20, 20, 18, 17, 17, 16,
15, 13, 12, 12, 12, 12, 11, 12, 10, 9, 9, 8, 7, 9, 7, 7, 9, 9, 8, 8, 8, 9, 9,
10, 10, 10, 11, 12, 13, 14, 14, 14, 14, 15, 16, 17, 18, 20, 20, 22, 22, 23, 24,
24, 25, 26, 27, 28, 29, 29, 30, 31, 32, 33, 33, 35, 35, 35, 36, 36, 38, 38, 38,
39, 40, 40, 41, 42, 42, 43, 43, 43, 44, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47,
47, 48, 47, 48, 48, 48, 49, 48, 48, 48, 48, 48, 48, 48, 48, 49, 48, 48, 49, 50,
49, 50, 49, 49, 50, 50, 49, 50, 50, 50, 49, 50, 51, 50, 51, 51, 51, 51, 50, 49,
49, 49, 48, 49, 48, 48, 49, 48, 48, 47, 47, 46, 46, 46, 47, 48, 47, 45, 44, 42,
37, 32, 27, 22, 18, 13, 10, 7, 2, -1, -4, -8, -13, -19, -25, -29, -33, -38, -43,
-48, -54, -60, -64, -70, -74, -79, -84, -88, -90, -94, -96, -100, -103, -107,
-110, -114, -117, -119, -122, -124, -126, -127, -127, -128, -128, -128, -127,
-127, -126, -126, -123, -123, -121, -119, -117, -115, -112, -110, -104, -101,
-97, -92, -87, -83, -77, -74, -68, -64, -59, -55, -50, -45, -41, -36, -32, -28,
-24, -19, -14, -10, -6, -2, 2, 5, 8, 11, 14, 17, 18, 21, 23, 25, 28, 32, 33, 35,
38, 40, 41, 42, 44, 44, 45, 45, 45, 45, 43, 43, 42, 41, 40, 39, 37, 35, 34, 30,
28, 25, 22, 18, 15, 11, 8, 3, 1, -3, -6, -9, -13, -15, -18, -21, -24, -27, -30,
-33, -37, -40, -42, -46, -47, -50, -52, -53, -56, -57, -59, -60, -62, -62, -64,
-66, -66, -67, -67, -68, -68, -68, -69, -68, -67, -65, -65, -64, -62, -60, -59,
-57, -54, -52, -50, -48, -45, -43, -41, -37, -34, -31, -27, -25, -21, -17, -15,
-12, -9, -6, -3, -1, 2, 5, 8, 10, 12, 15, 18, 21, 23, 26, 28, 31, 33, 35, 36,
38, 39, 40, 42, 42, 43, 45, 45, 46, 48, 48, 48, 48, 47, 48, 48, 48, 47, 46, 45,
44, 43, 41, 39, 38, 37, 35, 34, 33, 32, 29, 28, 26, 23, 21, 19, 17, 14, 12, 10,
8, 6, 4, 1, 0, -1, -3, -5, -7, -9, -11, -13, -15, -17, -19, -21, -23, -25, -26,
-27, -29, -30, -31, -32, -32, -32, -34, -34, -35, -35, -36, -37, -37, -39, -38,
-38, -36, -36, -36, -35, -33, -33, -33, -31, -29, -29, -28, -26, -26, -24, -22,
-22, -20, -19, -18, -15, -14, -12, -11, -8, -8, -5, -3, -1, };

#endif /* AKWF_1421_512_H_ */
