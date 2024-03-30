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

void DNDChar::Generate(){
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
    adjustRaceModifiers();
    chooseAlignment();
    createSavingThrows();
}

void DNDChar::createStats()
{
    CharacterStat tempStats[6];
    for (int8_t i = 0; i < 6; i++)
    {
        tempStats[i].Stat[BASE_STAT] = rollStat(4, 6);
    }
}

// generates a random number between 1 and number of sides. Rolls numRolls times and throws out the lowest before returning the sum
uint8_t DNDChar::rollStat(uint8_t numRolls, uint8_t sides)
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
    return total - lowest;
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
}

void DNDChar::chooseClass()
{
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