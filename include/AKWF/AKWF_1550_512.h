#ifndef AKWF_1550_512_H_
#define AKWF_1550_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1550_512_NUM_CELLS 512
#define AKWF_1550_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1550_512_DATA [] = {2,
3, 4, 6, 7, 9, 10, 11, 11, 12, 14, 14, 14, 15, 16, 16, 16, 17, 17, 17, 18, 18,
18, 18, 19, 19, 19, 19, 18, 19, 20, 20, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20,
19, 20, 20, 20, 19, 19, 20, 20, 21, 20, 20, 21, 20, 19, 21, 20, 20, 20, 20, 20,
20, 20, 20, 19, 21, 21, 20, 20, 20, 20, 20, 20, 21, 20, 20, 20, 20, 21, 20, 20,
20, 21, 21, 20, 20, 20, 20, 20, 20, 21, 20, 20, 20, 20, 20, 19, 20, 20, 19, 20,
20, 20, 20, 20, 20, 20, 20, 21, 20, 20, 20, 20, 21, 19, 19, 20, 20, 20, 19, 19,
20, 20, 20, 20, 20, 20, 20, 20, 19, 20, 20, 20, 20, 20, 19, 20, 20, 19, 20, 19,
20, 20, 20, 20, 20, 19, 20, 19, 20, 19, 19, 20, 20, 20, 19, 20, 19, 20, 18, 20,
18, 21, 15, 27, -29, -124, -127, -128, -127, -128, -128, -128, -128, -128, -128,
-127, -128, -128, -128, -127, -128, -127, -127, -127, -127, -128, -128, -128,
-128, -127, -127, -128, -128, -127, -128, -128, -128, -128, -127, -128, -127,
-128, -126, -128, -127, -128, -126, -128, -127, -128, -126, -128, -124, -127,
-88, 13, 24, 20, 21, 20, 21, 21, 21, 20, 22, 20, 22, 21, 21, 21, 21, 21, 21, 21,
21, 21, 20, 21, 20, 20, 21, 21, 21, 21, 21, 21, 21, 20, 21, 20, 20, 21, 21, 21,
21, 21, 21, 20, 21, 22, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 20, 21, 21,
21, 22, 20, 21, 20, 20, 21, 20, 21, 21, 21, 21, 22, 21, 21, 21, 21, 20, 21, 20,
21, 21, 20, 20, 20, 21, 21, 20, 21, 21, 20, 21, 21, 21, 20, 21, 21, 20, 20, 20,
20, 21, 21, 21, 21, 21, 21, 20, 21, 21, 21, 20, 21, 21, 21, 20, 20, 20, 20, 21,
20, 21, 20, 20, 20, 20, 21, 21, 20, 20, 20, 21, 20, 21, 20, 21, 20, 22, 20, 22,
20, 20, 19, 21, 19, 23, 9, -89, -113, -93, -87, -74, -68, -57, -53, -45, -40,
-33, -29, -23, -20, -16, -13, -10, -7, -5, -2, 0, 2, 3, 6, 7, 8, 8, 11, 11, 13,
13, 14, 14, 15, 15, 17, 16, 17, 17, 17, 18, 19, 19, 18, 18, 20, 19, 19, 19, 19,
20, 19, 20, 20, 21, 21, 20, 20, 19, 20, 21, 21, 20, 20, 20, 20, 20, 21, 21, 21,
21, 20, 20, 21, 20, 21, 21, 20, 21, 20, 20, 21, 20, 21, 20, 21, 21, 21, 21, 20,
20, 20, 21, 21, 20, 20, 20, 21, 20, 21, 20, 21, 20, 20, 20, 21, 21, 20, 20, 20,
21, 20, 21, 20, 21, 20, 21, 19, 22, 19, 22, 19, 21, 19, 22, 17, 25, -6, -108,
-108, -92, -85, -72, -66, -56, -51, -42, -39, -31, -29, -23, -20, -16, -13, -9,
-7, -4, -1, 1, };

#endif /* AKWF_1550_512_H_ */
