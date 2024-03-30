#ifndef AKWF_1629_512_H_
#define AKWF_1629_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1629_512_NUM_CELLS 512
#define AKWF_1629_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1629_512_DATA [] =
{11, 24, 22, 24, 23, 24, 24, 25, 25, 26, 25, 26, 26, 26, 26, 27, 27, 27, 27, 28,
27, 28, 28, 28, 29, 29, 30, 29, 30, 30, 30, 31, 30, 31, 31, 32, 32, 32, 32, 32,
33, 33, 32, 34, 33, 34, 34, 35, 34, 35, 35, 35, 36, 36, 35, 36, 36, 37, 37, 38,
37, 38, 38, 38, 39, 39, 39, 39, 40, 39, 39, 40, 40, 41, 40, 42, 41, 42, 41, 42,
42, 42, 43, 43, 44, 43, 44, 44, 44, 44, 45, 45, 45, 46, 46, 45, 45, 46, 45, 45,
44, 44, 45, 43, 44, 43, 43, 42, 42, 42, 42, 41, 41, 42, 41, 41, 41, 40, 40, 40,
39, 39, 39, 39, 39, 38, 38, 38, 37, 37, 37, 37, 37, 36, 36, 35, 35, 35, 34, 34,
34, 34, 34, 34, 33, 33, 32, 32, 33, 32, 32, 31, 31, 31, 30, 31, 30, 30, 30, 30,
29, 29, 28, 29, 27, 29, 27, 29, 27, 28, 25, 27, 25, 27, 24, 27, 25, 26, 24, 24,
24, 24, 20, -54, 8, 33, 16, 29, 18, 27, 21, 26, 23, 26, 23, 27, 23, 27, 25, 27,
25, 27, 27, 27, 27, 27, 27, 28, 29, 28, 29, 28, 30, 28, 30, 29, 31, 31, 31, 31,
31, 31, 32, 31, 32, 32, 32, 33, 33, 34, 34, 33, 34, 34, 34, 34, 35, 35, 35, 35,
36, 36, 37, 37, 37, 37, 37, 37, 38, 38, 38, 38, 38, 39, 38, 40, 40, 41, 40, 41,
40, 41, 41, 42, 42, 42, 42, 42, 42, 43, 43, 44, 44, 44, 44, 44, 44, 45, 45, 45,
44, 43, 44, 44, 43, 43, 44, 42, 42, 43, 42, 42, 41, 40, 41, 41, 41, 40, 40, 40,
40, 39, 38, 39, 38, 39, 38, 37, 37, 37, 37, 36, 36, 36, 35, 35, 35, 35, 35, 35,
35, 35, 34, 33, 33, 32, 33, 33, 32, 32, 32, 31, 31, 31, 31, 30, 30, 30, 30, 30,
28, 29, 28, 29, 28, 28, 28, 27, 28, 26, 27, 27, 27, 26, 27, 25, 26, 25, 25, 25,
24, 24, 23, 22, 23, 23, 24, 22, 23, 21, 22, 22, 22, 21, 21, 21, 20, 20, 21, 22,
-36, -58, -52, -56, -53, -56, -54, -56, -53, -54, -54, -55, -54, -55, -55, -55,
-54, -55, -54, -55, -55, -54, -54, -55, -54, -55, -54, -54, -55, -55, -54, -54,
-55, -54, -55, -55, -54, -54, -54, -55, -55, -53, -54, -54, -55, -53, -55, -54,
-57, -49, -83, -121, -115, -117, -116, -117, -117, -118, -118, -117, -118, -118,
-118, -119, -118, -118, -118, -119, -119, -119, -120, -120, -120, -120, -119,
-120, -121, -120, -121, -121, -121, -121, -121, -122, -121, -121, -122, -122,
-122, -122, -123, -122, -122, -122, -123, -123, -124, -123, -124, -123, -124,
-124, -123, -124, -123, -125, -125, -126, -125, -126, -124, -125, -126, -126,
-125, -125, -127, -126, -126, -126, -127, -125, -128, -125, -128, -125, -128,
-123, -128, -120, -127, -79, };

#endif /* AKWF_1629_512_H_ */