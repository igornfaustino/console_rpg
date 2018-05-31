#include <string>
#include <math.h>
#include <iostream>
#include <iomanip>

class Item
{
  private:
	std::string name;
	int buyValue;
	int sellValue;

  public:
	Item();
	~Item();

	inline std::string debugPrint() const
	{
		return this->name;
	}
};
