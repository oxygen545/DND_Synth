#ifndef __CHARACTERCLASS_H__
#define __CHARACTERCLASS_H__
#include "CharacterDefines.h"


#ifdef ORIGINAL_VER
enum CharacterClass
{
    FIGHTINGMAN,
    MAGICUSER,
    CLERIC,
    OTHER
}
#endif
#ifdef ADVANCED_VER
enum CharacterClass
{
    CLERIC,
    FIGHTER,
    ROGUE,
    WIZARD,
    BARBARIAN,
    BARD,
    DRUID,
    MONK,
    PALADIN,
    RANGER,
    SORCERER
};

#endif __CHARACTERCLASS_H__