#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
  private:
	int damageMin;
	int damageMax;

  public:
	Weapon(
		int damageMin = 0,
		int DamageMax = 0,
		std::string name = "NONE",
		int level = 0,
		int rarity = 0,
		int buyValue = 0,
		int sellValue = 0);
	virtual ~Weapon();

	// Pure Virtual
	virtual Weapon *clone() const;

	// Functions
	std::string toString() const;
};

#endif // !WEAPON_H