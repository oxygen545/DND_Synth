#ifndef __DNDCHAR_H__
#define __DNDCHAR_H__
#include <Arduino.h>
#include "CharacterDefines.h"
#include "CharacterRace.h"
#include "CharacterClass.h"

//#include "CharacterThrows.h"
//#include "CharacterSkills.h"
struct CharacterStat
{
    int8_t Stat[5] = {0, 0, 0, 0, 0};
};
class DNDChar
{
public:
    DNDChar();
    ~DNDChar();
    char Name[20] = "";
    uint8_t Age = 0;
    float Height = 0;
    uint8_t Weight = 0;
    int8_t Speed = 0;
    CharacterSize Size = SMALL;
    uint8_t XP = 0;
    uint8_t LVL = 0;
    int8_t HP = 0;
    int8_t HD = 0;
    CharacterStat myStats[6];
    CharacterRace myRace;
    CharacterClass myClass = OTHER;
    CharacterGender myGender;
    CharacterMoney myMoney;
    CharacterAlignment myAlignment;    
    
    void *myCompanion = nullptr;
    void *myFamiliar = nullptr;
     CharacterSavingThrows mySavingThrows;
    CharacterArmorClass myArmorClass;
    uint8_t AttackBonus = 0;
    uint8_t mySkillPoints = 0;
    int8_t Damage = 0;

    // Strength Modifiers
    int8_t hitProbablity = 0;
    int8_t damageAdjustment = 0;
    int16_t weightAdjustment = 0;
    int8_t openDoors = 0;
    int8_t openGates = 0;

    // Intelligence  Modifiers

    // Wisdom  Modifiers
    int8_t spellFailure = 0; // Clerics Only
    uint8_t spellBonus = 0;  // Clerics Only

    // Dexterity Modifiers
    int8_t pickPockets = 0;   // Thieves only
    int8_t pickLocks = 0;     // Thieves only
    int8_t removeTrap = 0;    // Thieves only
    int8_t moveSilently = 0;  // Thieves only
    int8_t hideInShadows = 0; // Thieves only



private:
    uint16_t index = 0;

public:
    void Generate();
    uint8_t rollStat(uint8_t numRolls, uint8_t sides, bool toss);
    void createStats();
    CharacterClass getRecClass();
    void chooseRace();
    void chooseClass();
    void chooseGender();
    void chooseSize();
    void adjustRaceModifiers();
    void chooseAlignment();
    void createSavingThrows();
    void createHitPoints();
};

class CharacterCompanion : public DNDChar
{
public:
    CharacterCompanion();
    ~CharacterCompanion();
};

class CharacterFamiliar : public DNDChar
{
public:
    CharacterFamiliar();
    ~CharacterFamiliar();
};

#endif // __DNDCHAR_H__