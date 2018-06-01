#ifndef INVENTORY_H
#define INVENTORY_H

#include "Weapon.h"
#include "Armor.h"

class Inventory
{
  private:
	unsigned int cap;
	unsigned int nrOfItems;
	Item **itemArr;
	void expand();
	void initialize(const int from = 0);

  public:
	Inventory();
	Inventory(const Inventory &obj);
	virtual ~Inventory();

	// Functions
	void addItem(const Item &item);
	void removeItem(unsigned int index);

	// Operators
	Item &operator[](const int index);

	inline void debugPrint() const
	{

		for (size_t i = 0; i < this->nrOfItems; i++)
		{
			std::cout << this->itemArr[i]->debugPrint() << std::endl;
		}
	}

	// Accessors
	inline const unsigned int &size() const { return this->nrOfItems; }
};

#endif // !INVENTORY_H