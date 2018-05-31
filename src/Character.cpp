#include "Character.h"

Character::Character()
{
    this->xPos = 0.0;
    this->yPos = 0.0;

    this->name = "NONE";
    this->level = 1;
    this->exp = 0;
    this->expNext = 0;

    this->strenght = 0;
    this->vitality = 0;
    this->dexterity = 0;
    this->intelligence = 0;

    this->hp = 0;
    this->hpMax = 0;
    this->stamina = 0;
    this->staminaMax = 0;    
    this->damageMin = 0;
    this->damageMax = 0;
    this->defence = 0;
    this->luck = 0;

    this->skillPoints = 0;
    this->statPoints = 0;
}

Character::~Character()
{
}

void Character::initialize(const string name)
{
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->expNext = (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 3) + (17 * this->level) - 11);

    this->strenght = 5;
    this->vitality = 5;
    this->dexterity = 5;
    this->intelligence = 5;

    this->hp = 10;
    this->hpMax = 10;
    this->stamina = 10;
    this->staminaMax = 10;
    this->damageMin = 2;
    this->damageMax = 4;
    this->defence = 4;
    this->luck = 1;
}

void Character::printToScreen() const
{
    cout << "== Character Sheet ==" << endl << endl;
    cout << "- Name: " << this->name << endl;
    cout << "- Level: " << this->level << endl;
    cout << "- Exp: " << this->exp << endl;
    cout << "- Exp to next level: " << this->expNext << endl;
    cout << endl;
    cout << "- Strenght: " << this->strenght << endl;
    cout << "- Vitality: " << this->vitality << endl;
    cout << "- Dexterity: " << this->dexterity << endl;
    cout << "- Intelligence: " << this->intelligence << endl;
    cout << endl;
    cout << "- Hp: " << this->hp << "/" << this->hpMax << endl;
    cout << "- Stamina: " << this->stamina  << "/" << this->staminaMax << endl;
    cout << "- Damage: " << this->damageMin << "-" << damageMax << endl;
    cout << "- Defence: " << this->defence << endl;
    cout << "- Luck: " << this->luck << endl;
    cout << endl;
}

void Character::levelUp()
{

    while (this->exp >= this->expNext)
    {
        this->exp -= this->expNext;
        this->level++;
        this->expNext = (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 3) + (17 * this->level) - 11);
        this->statPoints++;
        this->skillPoints++;
    }
}