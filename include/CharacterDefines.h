#ifndef __CHARACERDEFINES_H__
#define __CHARACERDEFINES_H__
#include <Arduino.h>

// define the DND Version here
#define ORIGINAL_VER
//#define BASIC_VER
//#define ADVANCED_VER
//#define VER_35
//#define VER_4
//#define VER_5

// define the max number of characters to create
#define MAX_CHARACTERS 4

enum STAT_NAME
{
    STR,
    DEX,
    CON,
    INT,
    WIS,
    CHA
};

enum STAT_MODS
{
    BASE_STAT,
    ABILITY_MOD,
    MAGIC_MOD,
    MISC_MOD,
    TEMP_MOD
};

enum CharacterGender
{
    MALE,
    FEMALE
};

enum CharacterAlignment
{
    LAWFUL_GOOD,
    LAWFUL_NEUTRAL,
    LAWFUL_EVIL,
    NEUTRAL_GOOD,
    TRUE_NEUTRAL,
    NEUTRAL_EVIL,
    CHAOTIC_GOOD,
    CHAOTIC_NEUTRAL,
    CHAOTIC_EVIL
};

enum CharacterSize
{
    SMALL,
    MEDIUM,
    LARGE
};

struct CharacterMoney
{
    uint32_t copper = 0;
    uint32_t silver = 0;
    uint32_t electrum = 0;
    uint32_t gold = 0;
    uint32_t platinum = 0;
};

#endif //__CHARACERDEFINES_H__