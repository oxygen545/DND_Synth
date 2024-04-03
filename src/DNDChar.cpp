#include "DNDChar.h"

CharacterCompanion::CharacterCompanion()
{
}

CharacterCompanion::~CharacterCompanion()
{
}

CharacterFamiliar::CharacterFamiliar()
{
}

CharacterFamiliar::~CharacterFamiliar()
{
}

DNDChar::DNDChar()
{
}

DNDChar::~DNDChar()
{
}

void DNDChar::Generate()
{
#ifdef ORIGINAL_VER
    createStats();
    chooseClass();
    // chooseRace();

    // chooseGender();
    // chooseSize();
#endif
#ifdef VER_35
    if (random(0, 1))
    {
        chooseRace();
        chooseClass();
    }
    else
    {
        chooseClass();
        chooseRace();
    }
    createStats();
    adjustStats();
    adjustRaceModifiers();
    chooseAlignment();
    createSavingThrows();
#endif
}

// generates a random number between 1 and number of sides. Rolls numRolls times and throws out the lowest number it toss == true before returning the sum
uint8_t DNDChar::rollStat(uint8_t numRolls, uint8_t sides, bool toss)
{
    long rolls[numRolls];
    long lowest = sides;
    uint8_t total = 0;
    for (int8_t r = 0; r < numRolls; r++)
    {
        // make numRolls rolls
        rolls[r] = random(1, sides);
        if (rolls[r] < lowest)
        {
            lowest = rolls[r];
        }
        total += rolls[r];
    }
    if (toss)
    {
        return total - lowest;
    }
    return total;
}

// Create the basic Stats based on the DNDVersion defined
void DNDChar::createStats()
{
    CharacterStat tempStats[6]; // for later versions where stats can be swapped around
    for (int8_t i = 0; i < 6; i++)
    {
#ifdef ORIGINAL_VER:
        tempStats[i].Stat[BASE_STAT] = rollStat(3, 6, false);
        myStats[i].Stat[BASE_STAT] = tempStats[i].Stat[BASE_STAT];
#endif
#ifdef VER_35
        tempStats[i].Stat[BASE_STAT] = rollStat(4, 6, true);
#endif
    }
#ifdef ORIGINAL_VER
    myMoney.gold = rollStat(3, 6, false) * 10;
#endif
}

CharacterClass DNDChar::getRecClass()
{
    int8_t HighestStat[2] = {0, 0};
    int8_t LowestStat[2] = {0, 99};
    // find the highest stat
    for (int8_t i = 0; i < 6; i++)
    {
        if (myStats[i].Stat[BASE_STAT] > HighestStat[1])
        {
            HighestStat[1] = myStats[i].Stat[BASE_STAT];
            HighestStat[0] = i;
        }
        if (myStats[i].Stat[BASE_STAT] < LowestStat[1])
        {
            LowestStat[1] = myStats[i].Stat[BASE_STAT];
            LowestStat[0] = i;
        }
    }
    switch (HighestStat[0]) // Which Stat was the highest
    {
    case STR:
        return FIGHTINGMAN;
        break;
    case DEX:
        return 3;
        break;
    case CON:
        return 3;
        break;
    case INT:
        return MAGICUSER;
        break;
    case WIS:
        return CLERIC;
        break;
    case CHA:
        return 3;
        break;
    }
}

void DNDChar::chooseClass()
{
#ifdef ORIGINAL_VER
    uint8_t recClass = getRecClass();
    switch (recClass)
    {
    case FIGHTINGMAN:
        myClass = FIGHTINGMAN;
        break;
    case MAGICUSER:
        myClass = MAGICUSER;
        break;
    case CLERIC:
        myClass = CLERIC;
        myRace = HUMAN;
        break;
    case OTHER:
        myClass = (CharacterClass)random(FIGHTINGMAN,CLERIC);
        break;
    default:
        break;
    }
    return;
#endif
#ifdef VER_35
myClass = (CharacterClass)random(BARBARIAN, WIZARD);
switch (myClass)
{
case BARBARIAN:
    // STR DEX WIS CON
    // NonLawful Alignment
    mySkillPoints += (4 + myStats[INT].Stat[ABILITY_MOD]) * 4;
    mySavingThrows.Fortitude[1] = 2;
    AttackBonus += 3;
    break;
case BARD:
    mySkillPoints += (6 + myStats[INT].Stat[ABILITY_MOD] * 4);
    mySavingThrows.Reflex[1] = 2;
    mySavingThrows.Will[1] = 2;
    mySavingThrows.SpellsPerDay[0] = 2;
    mySavingThrows.KnownSpells = 4;
    break;
case CLERIC:
    mySkillPoints += (2 + myStats[INT].Stat[ABILITY_MOD] * 4);
    mySavingThrows.Fortitude[1] = 2;
    mySavingThrows.Will[1] = 2;
    mySavingThrows.SpellsPerDay[0] = 3;
    mySavingThrows.SpellsPerDay[1] = 1;
    break;
case DRUID:
    mySkillPoints += (4 + myStats[INT].Stat[ABILITY_MOD] * 4);
    mySavingThrows.Fortitude[1] = 2;
    mySavingThrows.Will[1] = 2;
    mySavingThrows.SpellsPerDay[0] = 3;
    mySavingThrows.SpellsPerDay[1] = 1;
    myCompanion = new CharacterCompanion();
    // Add Companion Stats here
    break;
case FIGHTER:
    mySkillPoints += (2 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case MONK:
    mySkillPoints += (4 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case PALADIN:
    mySkillPoints += (2 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case RANGER:
    mySkillPoints += (6 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case ROGUE:
    mySkillPoints += (8 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case SORCERER:
    myFamiliar = new CharacterFamiliar();
    mySkillPoints += (2 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
case WIZARD:
    mySkillPoints += (2 + myStats[INT].Stat[ABILITY_MOD] * 4);
    break;
}
mySavingThrows.Fortitude[1] = 2;
mySavingThrows.Fortitude[1] = 2;
mySavingThrows.Fortitude[1] = 2;
#endif
}

void DNDChar::adjustRaceModifiers()
{
    switch (myRace)
    {
    case DWARF:
        myStats[CON].Stat[BASE_STAT] += 2;
        myStats[CHA].Stat[BASE_STAT] -= 2;
        break;
    case ELF:
        myStats[DEX].Stat[BASE_STAT] += 2;
        myStats[CON].Stat[BASE_STAT] -= 2;
        break;
    case GNOME:
        myStats[INT].Stat[BASE_STAT] += 2;
        myStats[WIS].Stat[BASE_STAT] -= 2;
        break;
    case HALFLING:
        myStats[DEX].Stat[BASE_STAT] += 2;
        myStats[STR].Stat[BASE_STAT] -= 2;
        break;
    case HALF_ORC:
        myStats[STR].Stat[BASE_STAT] += 2;
        myStats[INT].Stat[BASE_STAT] -= 2;
        if (myStats[INT].Stat[BASE_STAT] < 3)
        {
            myStats[INT].Stat[BASE_STAT] = 3;
        }
        myStats[CHA].Stat[BASE_STAT] -= 2;
        break;
    case HUMAN:
    case HALF_ELF:
        break;
    }
}

void DNDChar::chooseRace()
{
#ifdef ORIGINAL_VER
    myRace = (CharacterRace)random(HUMAN, HALFLING);
#endif

#ifdef ADVANCED_VER
    myRace = (CharacterRace)random(DWARF, HUMAN);
    if (myRace == DWARF)
    {
        myRace = (CharacterRace)random(HILLDWARF, MOUNTAINDWARF);
    }
    else if (myRace == ELF)
    {
        myRace = (CharacterRace)random(HIGHELF, DARKELF);
    }
    switch (myRace)
    {
    case HALFLING:
        myStats[DEX].Stat[ABILITY_MOD] += 2;
        myVitals.Speed = 25;
        break;
    case HUMAN:
        myStats[STR].Stat[ABILITY_MOD] += 1;
        myStats[DEX].Stat[ABILITY_MOD] += 1;
        myStats[CON].Stat[ABILITY_MOD] += 1;
        myStats[INT].Stat[ABILITY_MOD] += 1;
        myStats[WIS].Stat[ABILITY_MOD] += 1;
        myStats[CHA].Stat[ABILITY_MOD] += 1;
        myVitals.Speed = 30;
        break;
    case HILLDWARF:
        myStats[CON].Stat[ABILITY_MOD] += 2;
        myStats[WIS].Stat[ABILITY_MOD] += 1;
        myVitals.HP += 1;
        myVitals.Speed = 25;
        break;
    case MOUNTAINDWARF:
        myStats[CON].Stat[ABILITY_MOD] += 2;
        myStats[STR].Stat[ABILITY_MOD] += 2;
        myVitals.Speed = 25;
        break;
    case HIGHELF:
        myStats[DEX].Stat[ABILITY_MOD] += 2;
        myStats[INT].Stat[ABILITY_MOD] += 1;
        myVitals.Speed = 30;
        break;
    case WOODELF:
        myStats[DEX].Stat[ABILITY_MOD] += 2;
        myStats[WIS].Stat[ABILITY_MOD] += 1;
        myVitals.Speed = 30;
        break;
    case DARKELF:
        myStats[DEX].Stat[ABILITY_MOD] += 1;
        myStats[WIS].Stat[ABILITY_MOD] += 2;
        myVitals.Speed = 30;
        break;
    }
#endif

#ifdef VER_35
    myRace = (CharacterRace)random(DWARF, HUMAN);
    switch (myRace)
    {
    case HUMAN:
        myVitals.Height = random((5.4 * 12), (6.2 * 12));
        myVitals.Weight = random(125, 250);
        myVitals.Speed = 30;
        myVitals.Size = MEDIUM;
        mySkillPoints += 4;
        break;
    case DWARF:
        myVitals.Height = random((4 * 12), (4.5 * 12));
        myVitals.Weight = random(115, 200);
        myVitals.Speed = 20;
        myVitals.Size = MEDIUM;
        break;
    case ELF:
        myVitals.Height = random((4.5 * 12), (5.5 * 12));
        myVitals.Weight = random(95, 135);
        myVitals.Speed = 30;
        myVitals.Size = MEDIUM;
        break;
    case GNOME:
        myVitals.Height = random((3 * 12), (3.5 * 12));
        myVitals.Weight = random(125, 250);
        myVitals.Speed = 20;
        myVitals.Size = SMALL;
        myArmorClass.SizeMod++;
        break;
    case HALF_ELF:
        myVitals.Height = random((5 * 12), (6 * 12));
        myVitals.Weight = random(100, 180);
        myVitals.Speed = 30;
        myVitals.Size = MEDIUM;
        break;
    case HALF_ORC:
        myVitals.Height = random((6 * 12), (7 * 12));
        myVitals.Weight = random(180, 250);
        myVitals.Speed = 30;
        myVitals.Size = MEDIUM;
        break;
    case HALFLING:
        myVitals.Height = random((2.8 * 12), (3.2 * 12));
        myVitals.Weight = random(30, 35);
        myVitals.Speed = 20;
        myVitals.Size = SMALL;
        myArmorClass.SizeMod++;
        break;
    }
#endif
}

void DNDChar::chooseGender()
{
    myGender = (CharacterGender)random(MALE, FEMALE);
}

void DNDChar::chooseSize()
{
    switch (myRace)
    {
    case HALFLING:
        myVitals.Height = 21 + rollStat(2, 4, false);
        myVitals.Weight = 35;
        break;
    case HUMAN:
        myVitals.Height = 56 + rollStat(2, 10, false);
        myVitals.Weight = 110 * rollStat(2, 4, false);
        break;
    case HILLDWARF:
        myVitals.Height = 44 + rollStat(2, 4, false);
        myVitals.Weight = 115 * rollStat(2, 6, false);
        break;
    case MOUNTAINDWARF:
        myVitals.Height = 48 + rollStat(2, 4, false);
        myVitals.Weight = 130 * rollStat(2, 6, false);
        break;
    case HIGHELF:
        myVitals.Height = 54 + rollStat(2, 10, false);
        myVitals.Weight = 90 * rollStat(1, 4, false);
        break;
    case WOODELF:
        myVitals.Height = 54 + rollStat(2, 10, false);
        myVitals.Weight = 100 * rollStat(1, 4, false);
        break;
    case DARKELF:
        myVitals.Height = 54 + rollStat(2, 10, false);
        myVitals.Weight = 90 * rollStat(1, 4, false);
        break;
    default:
        break;
    }
}

void DNDChar::chooseAlignment()
{
    myAlignment = (CharacterAlignment)random(LAWFUL_GOOD, CHAOTIC_EVIL);
}

void DNDChar::createSavingThrows()
{
}

void DNDChar::createHitPoints()
{
    switch (myClass)
    {
    case BARBARIAN:
        myVitals.XP = rollStat(2, 12);
        break;
    case BARD:
    case ROGUE:
        myVitals.XP = rollStat(2, 6);
        break;
    case CLERIC:
    case DRUID:
    case MONK:
    case RANGER:
        myVitals.XP = rollStat(2, 8);
        break;
    case FIGHTER:
    case PALADIN:
        myVitals.XP = rollStat(2, 10);
        break;
    case SORCERER:
        myVitals.XP = rollStat(2, 4);
        break;
    case WIZARD:
        myVitals.XP = rollStat(2, 4);
        break;
    }
}