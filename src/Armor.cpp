#include "Armor.h"

Armor::Armor(int type, int defence, std::string name, int level,
			   int rarity, int buyValue, int sellValue)
	: Item(name, level, rarity, buyValue, sellValue)
{
	this->type = type;
	this->defence = defence;
}

Armor::~Armor()
{
}

std::string Armor::toString() const
{
	std::string str = std::to_string(this->type) + " " +
					  std::to_string(this->defence);

	return str;
}

Armor *Armor::clone() const {
	return new Armor(*this);
}