#ifndef __CHARACTERRACE_H__
#define __CHARACTERRACE_H__
#include "CharacterDefines.h"

#ifdef ORIGINAL_VER
enum CharacterRace
{
    HUMAN,
    DWARF,
    ELF,
    HALFLING
};

#endif

#ifdef VER_35
enum CharacterRace
{
    DWARF,
    ELF,
    HALFLING,
    HUMAN,
    HILLDWARF,
    MOUNTAINDWARF,
    HIGHELF,
    WOODELF,
    DARKELF
};
#endif


#endif __CHARACTERRACE_H__
