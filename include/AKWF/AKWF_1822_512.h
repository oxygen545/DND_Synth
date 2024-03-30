#ifndef AKWF_1822_512_H_
#define AKWF_1822_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1822_512_NUM_CELLS 512
#define AKWF_1822_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1822_512_DATA [] =
{10, 48, 82, 108, 121, 127, 127, 126, 122, 117, 112, 107, 102, 99, 96, 92, 88,
86, 83, 81, 79, 76, 75, 73, 71, 69, 69, 66, 66, 65, 64, 63, 62, 61, 61, 60, 58,
58, 57, 57, 55, 56, 55, 55, 53, 54, 53, 53, 51, 52, 50, 52, 50, 52, 48, 50, 47,
51, 45, 53, 25, -35, 31, 53, 45, 51, 47, 51, 48, 51, 49, 51, 50, 52, 51, 52, 52,
54, 52, 54, 54, 55, 55, 56, 57, 58, 57, 58, 59, 60, 61, 62, 63, 64, 66, 66, 67,
68, 70, 71, 74, 76, 77, 79, 81, 85, 87, 90, 94, 98, 101, 106, 110, 114, 119,
123, 126, 125, 118, 103, 78, 42, 6, -27, -49, -60, -65, -64, -61, -56, -51, -47,
-42, -39, -34, -30, -27, -25, -21, -21, -21, -21, -21, -21, -21, -22, -21, -21,
-22, -22, -22, -21, -21, -21, -21, -21, -21, -22, -21, -22, -21, -22, -22, -21,
-21, -21, -21, -21, -21, -21, -22, -22, -22, -21, -22, -21, -21, -21, -21, -21,
-21, -21, -21, -22, -22, -21, -21, -21, -22, -21, -21, -21, -22, -22, -21, -21,
-22, -21, -21, -21, -21, -21, -21, -20, -21, -20, -21, -20, -21, -21, -21, -21,
-21, -22, -21, -21, -21, -21, -21, -20, -21, -21, -20, -21, -20, -21, -21, -21,
-21, -21, -21, -21, -21, -21, -20, -21, -21, -20, -21, -20, -21, -21, -21, -21,
-21, -21, -21, -21, -21, -21, -22, -21, -20, -21, -21, -20, -21, -20, -20, -21,
-21, -21, -21, -21, -20, -21, -20, -20, -21, -21, -20, -21, -20, -21, -21, -20,
-20, -21, -20, -20, -20, -20, -20, -21, -20, -20, -21, -21, -20, -21, -21, -21,
-20, -20, -21, -20, -20, -20, -21, -20, -20, -20, -21, -20, -21, -20, -21, -20,
-20, -21, -20, -20, -20, -20, -20, -21, -20, -20, -20, -19, -20, -20, -20, -20,
-20, -21, -21, -20, -20, -20, -20, -21, -20, -20, -19, -20, -20, -20, -20, -20,
-20, -20, -21, -20, -20, -19, -21, -20, -20, -20, -19, -20, -20, -20, -21, -20,
-20, -20, -20, -19, -20, -19, -20, -19, -19, -20, -20, -21, -19, -19, -20, -20,
-20, -20, -19, -19, -20, -19, -20, -19, -19, -20, -20, -20, -19, -20, -20, -19,
-20, -20, -20, -20, -20, -19, -20, -20, -20, -20, -19, -19, -19, -19, -19, -20,
-19, -19, -20, -20, -20, -20, -19, -20, -19, -20, -19, -19, -19, -19, -19, -20,
-20, -19, -20, -20, -19, -20, -19, -19, -19, -19, -19, -19, -20, -19, -20, -19,
-19, -20, -19, -19, -19, -19, -20, -19, -20, -19, -19, -19, -19, -19, -19, -20,
-18, -19, -19, -19, -20, -19, -19, -19, -20, -19, -20, -20, -19, -20, -19, -20,
-18, -19, -19, -20, -20, -19, -19, -19, -20, -19, -19, -20, -19, -20, -19, -19,
-20, -18, -19, -18, -19, -18, -19, -18, -18, -18, -20, -18, -21, -23, -26, -30,
-34, -38, -41, -47, -51, -56, -60, -62, -61, -52, -37, -10, };

#endif /* AKWF_1822_512_H_ */