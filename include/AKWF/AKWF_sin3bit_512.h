#ifndef AKWF_sin3bit_512_H_
#define AKWF_sin3bit_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_sin3bit_512_NUM_CELLS 512
#define AKWF_sin3bit_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_sin3bit_512_DATA [] =
{35, 47, 42, 46, 42, 44, 43, 43, 43, 44, 43, 44, 43, 43, 43, 43, 44, 43, 43, 43,
43, 43, 43, 44, 44, 43, 43, 43, 43, 43, 44, 43, 43, 43, 44, 43, 43, 43, 44, 44,
44, 44, 43, 42, 43, 43, 42, 43, 43, 44, 43, 44, 43, 43, 43, 43, 43, 43, 43, 43,
43, 44, 43, 44, 43, 43, 42, 43, 43, 43, 43, 44, 43, 43, 43, 43, 44, 42, 44, 42,
45, 39, 48, 33, 87, 127, 123, 127, 124, 127, 126, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126,
127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127,
126, 127, 126, 127, 127, 127, 126, 127, 127, 127, 126, 127, 126, 127, 126, 127,
126, 127, 126, 127, 126, 127, 127, 125, 127, 122, 127, 66, 33, 46, 38, 44, 39,
44, 40, 44, 40, 42, 41, 42, 41, 42, 41, 42, 42, 41, 42, 42, 42, 41, 42, 41, 41,
41, 42, 41, 42, 41, 42, 42, 41, 41, 42, 41, 42, 41, 42, 41, 42, 41, 41, 41, 41,
42, 41, 42, 41, 41, 41, 41, 41, 42, 41, 41, 40, 42, 41, 41, 41, 42, 42, 41, 41,
41, 42, 41, 41, 40, 42, 40, 43, 41, 43, 41, 42, 39, 43, 38, 45, 37, 49, 17, -51,
-40, -46, -42, -44, -44, -44, -44, -43, -44, -42, -44, -43, -44, -43, -44, -43,
-43, -44, -45, -43, -44, -44, -44, -43, -44, -43, -44, -43, -44, -43, -44, -44,
-44, -43, -43, -43, -43, -43, -44, -44, -43, -44, -44, -43, -43, -43, -44, -44,
-43, -44, -44, -44, -44, -44, -44, -44, -43, -44, -44, -43, -43, -44, -43, -43,
-43, -44, -44, -44, -42, -44, -44, -44, -43, -43, -43, -43, -43, -43, -45, -41,
-46, -36, -100, -128, -124, -128, -126, -128, -127, -128, -127, -128, -128,
-128, -128, -128, -128, -128, -127, -128, -127, -128, -128, -128, -128, -128,
-128, -128, -128, -127, -128, -127, -128, -127, -128, -128, -127, -127, -127,
-128, -127, -127, -128, -127, -128, -127, -128, -128, -127, -128, -127, -127,
-127, -128, -127, -128, -128, -127, -127, -128, -127, -127, -128, -127, -126,
-127, -127, -126, -127, -127, -127, -127, -128, -127, -127, -127, -128, -126,
-127, -126, -128, -127, -128, -126, -128, -126, -128, -126, -126, -128, -51,
-38, -44, -40, -44, -40, -44, -40, -43, -41, -43, -41, -42, -41, -42, -41, -42,
-42, -42, -42, -42, -42, -42, -41, -42, -41, -41, -42, -41, -42, -42, -42, -42,
-42, -41, -41, -41, -42, -42, -41, -42, -42, -42, -42, -42, -42, -42, -42, -42,
-41, -41, -42, -41, -42, -41, -42, -41, -42, -41, -41, -41, -42, -41, -42, -41,
-41, -42, -42, -41, -41, -41, -42, -41, -41, -42, -41, -42, -41, -43, -41, -43,
-38, -46, -27, };

#endif /* AKWF_sin3bit_512_H_ */