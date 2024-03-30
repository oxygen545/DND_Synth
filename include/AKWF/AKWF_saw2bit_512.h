#ifndef AKWF_saw2bit_512_H_
#define AKWF_saw2bit_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_saw2bit_512_NUM_CELLS 512
#define AKWF_saw2bit_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_saw2bit_512_DATA [] =
{102, 127, 122, 127, 124, 127, 125, 127, 125, 127, 126, 127, 126, 127, 126, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 126, 127, 127, 126, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 126, 127, 126, 127, 127,
127, 127, 126, 126, 127, 127, 126, 127, 127, 127, 127, 127, 126, 127, 127, 127,
127, 126, 127, 126, 126, 127, 126, 127, 126, 127, 127, 127, 126, 127, 127, 126,
126, 127, 127, 126, 126, 126, 126, 127, 127, 127, 126, 126, 126, 126, 127, 126,
126, 126, 126, 126, 126, 125, 127, 125, 126, 125, 126, 125, 126, 126, 125, 126,
126, 126, 126, 126, 126, 126, 126, 125, 126, 125, 126, 126, 126, 126, 126, 126,
126, 125, 125, 125, 125, 126, 125, 125, 125, 126, 125, 125, 126, 125, 125, 126,
125, 126, 126, 125, 126, 125, 125, 125, 125, 125, 125, 125, 126, 124, 125, 125,
125, 125, 125, 126, 124, 125, 124, 125, 124, 126, 124, 126, 125, 124, 124, 125,
125, 125, 125, 125, 125, 125, 125, 124, 125, 125, 124, 125, 125, 124, 125, 124,
125, 123, 126, 124, 125, 123, 125, 124, 125, 124, 125, 124, 125, 123, 124, 124,
124, 124, 122, 126, 122, 125, 122, 127, 120, 127, 119, 127, 115, 127, 109, 127,
53, -128, -117, -128, -124, -128, -127, -128, -128, -127, -128, -127, -127,
-127, -128, -126, -128, -127, -128, -126, -128, -127, -128, -127, -128, -128,
-128, -127, -128, -127, -128, -128, -127, -128, -128, -128, -127, -128, -128,
-128, -127, -128, -127, -127, -127, -128, -127, -128, -128, -128, -127, -128,
-128, -127, -128, -128, -127, -127, -127, -128, -127, -128, -128, -127, -128,
-127, -128, -127, -127, -128, -127, -127, -127, -128, -127, -127, -127, -127,
-127, -127, -127, -127, -128, -127, -127, -127, -127, -127, -127, -127, -127,
-126, -126, -127, -127, -127, -127, -127, -127, -127, -128, -126, -126, -127,
-126, -126, -127, -126, -127, -126, -127, -126, -127, -127, -127, -126, -126,
-126, -127, -127, -126, -127, -126, -127, -126, -127, -127, -126, -127, -127,
-127, -127, -126, -126, -127, -126, -126, -126, -125, -126, -126, -126, -126,
-126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -126, -125, -126,
-126, -125, -125, -126, -127, -126, -125, -125, -125, -126, -126, -125, -126,
-125, -126, -126, -126, -126, -126, -126, -125, -126, -125, -126, -125, -126,
-125, -125, -125, -125, -125, -126, -125, -125, -126, -126, -125, -126, -125,
-125, -125, -126, -126, -126, -125, -125, -124, -125, -125, -125, -125, -125,
-125, -125, -125, -125, -124, -126, -125, -125, -125, -124, -124, -126, -124,
-125, -124, -125, -125, -125, -125, -125, -124, -125, -124, -125, -125, -125,
-124, -125, -124, -126, -124, -125, -124, -124, -125, -124, -125, -123, -125,
-123, -126, -122, -128, -120, -128, -116, -127, -79, };

#endif /* AKWF_saw2bit_512_H_ */