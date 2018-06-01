#include <string>
#include <stdlib.h>

class Enemy
{
  private:
	int hp;
	int hpMax;
	int level;
	int damageMin;
	int damageMax;
	float dropChance;
	int defence;
	int accuracy;

  public:
	Enemy(int level = 0);
	~Enemy();

	// Functions
	inline bool isAlive() const { return this->hp > 0; }
	std::string getAsString() const;
	inline void takeDamage(int damage) { this->hp -= damage; }
	inline int getDamage() const { return rand() % (this->damageMax - this->damageMin + 1) + this->damageMin; }
	inline int getExp() const { return this->level * 100; }
};
