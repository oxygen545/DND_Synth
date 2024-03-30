#ifndef __THROWS_H__
#define __THROWS_H__
#include <Arduino.h>

struct CharacterSavingThrows
{
    uint8_t SpellsPerDay[7] = {0, 0, 0, 0, 0, 0, 0};
    uint8_t KnownSpells = 0;
    uint8_t Fortitude[6] = {0, 0, 0, 0, 0, 0};
    uint8_t Reflex[6] = {0, 0, 0, 0, 0, 0};
    uint8_t Will[6] = {0, 0, 0, 0, 0, 0};
};


#endif // __THROWS_H__