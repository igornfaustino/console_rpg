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
	void initialize(const int from);

  public:
	Inventory();
	virtual ~Inventory();

	void addItem(const Item &item);
	void removeItem(unsigned int index);

	inline void debugPrint() const {
		
		for(size_t i = 0; i < this->nrOfItems; i++)
		{
			std::cout << this->itemArr[i]->debugPrint() << std::endl;
		}
		
	}
};

#endif // !INVENTORY_H