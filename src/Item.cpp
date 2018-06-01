#include "Item.h"

Item::Item(std::string name, int level, int rarity, int buyValue, int sellValue)
{
	this->name = name;
	this->buyValue = buyValue;
	this->sellValue = sellValue;
	this->level = level;
	this->rarity = rarity;
}

Item::~Item()
{
}