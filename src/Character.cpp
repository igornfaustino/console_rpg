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

void Character::initialize(const std::string name)
{
	this->name = name;
	this->level = 2;
	this->exp = 0;
	this->expNext = static_cast<int>(50 + (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 2) + (17 * this->level) - 12));

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
	std::cout << "== Character Sheet ==" << std::endl
			  << std::endl;
	std::cout << "- Name: " << this->name << std::endl;
	std::cout << "- Level: " << this->level << std::endl;
	std::cout << "- Exp: " << this->exp << std::endl;
	std::cout << "- Exp to next level: " << this->expNext << std::endl;
	std::cout << std::endl;
	std::cout << "- Strenght: " << this->strenght << std::endl;
	std::cout << "- Vitality: " << this->vitality << std::endl;
	std::cout << "- Dexterity: " << this->dexterity << std::endl;
	std::cout << "- Intelligence: " << this->intelligence << std::endl;
	std::cout << std::endl;
	std::cout << "- Hp: " << this->hp << "/" << this->hpMax << std::endl;
	std::cout << "- Stamina: " << this->stamina << "/" << this->staminaMax << std::endl;
	std::cout << "- Damage: " << this->damageMin << "-" << damageMax << std::endl;
	std::cout << "- Defence: " << this->defence << std::endl;
	std::cout << "- Luck: " << this->luck << std::endl;
	std::cout << std::endl;
}

std::string Character::getAsString() const
{
	return std::to_string(this->xPos) + " " +
		   std::to_string(this->yPos) + " " +
		   this->name + " " +
		   std::to_string(this->level) + " " +
		   std::to_string(this->exp) + " " +
		   std::to_string(this->strenght) + " " +
		   std::to_string(this->vitality) + " " +
		   std::to_string(this->dexterity) + " " +
		   std::to_string(this->intelligence) + " " +
		   std::to_string(this->hp) + " " +
		   std::to_string(this->stamina) + " " +
		   std::to_string(this->statPoints) + " " +
		   std::to_string(this->skillPoints);
}

void Character::levelUp()
{

	while (this->exp >= this->expNext)
	{
		this->exp -= this->expNext;
		this->level++;
		this->expNext = static_cast<int>(50 + (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 2) + (17 * this->level) - 12));

		this->statPoints++;
		this->skillPoints++;
	}
}