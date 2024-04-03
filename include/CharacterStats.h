#ifndef __CHARACTERSTATS_H__
#define __CHARACTERSTATS_H__
#include <Arduino.h>
#include "CharacterDefines.h"


struct CharacterArmorClass
{
    uint8_t AC = 0;
    int8_t ArmorBonus = 0;
    int8_t ShieldBonus = 0;
    int8_t DexMod = 0;
    int8_t SizeMod = 0;
    int8_t NaturalMod = 0;
    int8_t DeflectionMod = 0;
    int8_t DamageReduction = 0;
};

#endif //__CHARACTERSTATS_H__