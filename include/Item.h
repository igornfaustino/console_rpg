#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <math.h>
#include <iostream>
#include <iomanip>

// this is an abstract class
class Item
{
  private:
	std::string name;
	int level;
	int rarity;
	int buyValue;
	int sellValue;

  public:
	Item(std::string name = "NONE", int level = 0, int rarity = 0, int buyValue = 0, int sellValue = 0);
	virtual ~Item();

	virtual Item *clone() const = 0;

	inline std::string debugPrint() const
	{
		return this->name;
	}

	// Accessors
	inline const std::string &getName() const { return this->name; }
	inline const int &getLevel() const { return this->level; }
	inline const int &getRarity() const { return this->rarity; }
	inline const int &getBuyValue() const { return this->buyValue; }
	inline const int &getSellValue() const { return this->sellValue; }

	// Modifiers
};

#endif // !ITEM_H