#include "Weapon.h"

Weapon::Weapon(int damageMin, int damageMax, std::string name, int level,
			   int rarity, int buyValue, int sellValue)
	: Item(name, level, rarity, buyValue, sellValue)
{
	this->damageMin = damageMin;
	this->damageMax = damageMax;
}

Weapon::~Weapon()
{
}

std::string Weapon::toString() const
{
	std::string str = std::to_string(this->damageMin) + " " +
					  std::to_string(this->damageMax);

	return str;
}

Weapon *Weapon::clone() const
{
	return new Weapon(*this);
}