#ifndef __CHARACTERSTATS_H__
#define __CHARACTERSTATS_H__
#include <Arduino.h>

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

enum CharacterClass
{
    BARBARIAN,
    BARD,
    CLERIC,
    DRUID,
    FIGHTER,
    MONK,
    PALADIN,
    RANGER,
    ROGUE,
    SORCERER,
    WIZARD
};

enum CharacterRace
{
    DWARF,
    ELF,
    GNOME,
    HALF_ELF,
    HALFLING,
    HALF_ORC,
    HUMAN
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

struct CharacterVitals
{
    char Name[20] = "";
    uint8_t Age = 0;
    float Height = 0;
    uint8_t Weight = 0;
    int8_t Speed = 0;
    CharacterSize Size = SMALL;
    uint8_t XP = 0;
    uint8_t LVL = 0;
    int8_t HP;
};

struct CharacterStat
{
    int8_t Stat[5] = {0, 0, 0, 0, 0};
};

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