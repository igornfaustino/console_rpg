#include <string>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

class Character
{
  private:
    double xPos;
    double yPos;

    string name;
    int level;
    int exp;
    int expNext;

    int strenght;
    int vitality;
    int dexterity;
    int intelligence;

    int hp;
    int hpMax;
    int stamina;
    int staminaMax;
    int damageMin;
    int damageMax;
    int defence;
    int luck;

    int skillPoints;
    int statPoints;

  public:
    Character();
    virtual ~Character();

    // Functions
    void initialize(const string name);
    void printToScreen() const;
    void levelUp();

    // Accessors
    inline const double &getX() const { return this->xPos; }
    inline const double &getY() const { return this->yPos; }
    inline const string &getName() const { return this->name; }
    inline const int &getLevel() const { return this->level; }
    inline const int &getExp() const { return this->exp; }
    inline const int &getExpNext() const { return this->expNext; }
    inline const int &getHp() const { return this->hp; }
    inline const int &getHpMax() const { return this->hpMax; }
    inline const int &getStamina() const { return this->stamina; }
    inline const int &getDamageMin() const { return this->damageMin; }
    inline const int &getDamageMax() const { return this->damageMax; }
    inline const int &getDefence() const { return this->defence; }

    // Modifiers
};
