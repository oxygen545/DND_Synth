#ifndef AKWF_0423_512_H_
#define AKWF_0423_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0423_512_NUM_CELLS 512
#define AKWF_0423_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0423_512_DATA [] =
{-57, -128, -109, -83, -57, -40, -26, -19, -12, -8, -5, -4, -2, -1, 0, 0, -1, 2,
1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1,
1, 1, 2, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 2, 1, 1, 0, 2, 1, 2, 1,
2, 2, 1, 1, 1, 1, 2, 2, 1, 0, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1,
2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 0, 1, 1, 2, 1, 1,
1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0, 2, 2, 1, 0, 1, 1, 1,
1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 0, 1, 1, 1, 1, 2, 1, 0, 1, 1, 0, 1,
2, 1, 1, 1, 1, 1, 2, 1, 0, 1, 1, 1, 0, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 2, 1,
1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 0,
1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 0, 2, 1, 1, 2,
1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 0, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1,
2, 2, 1, 1, 1, 2, 1, 2, 0, 0, 0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0,
1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1,
2, 1, 1, 1, 1, 1, 1, 1, 0, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 2, 1, 1, 2, 0, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 0, 1, 2, 1, 1, 2, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 2, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 2, 1, 1, 1, 1,
2, 1, 1, 1, 2, 2, 1, 2, };

#endif /* AKWF_0423_512_H_ */
