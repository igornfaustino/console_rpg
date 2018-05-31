#include "Character.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Functions.h"

using namespace std;

class Game
{
private:
    int choise;
    bool playing;

public:
    Game();
    virtual ~Game();

    // Operators

    // Functions
    void mainMenu();

    // Accessors
    inline bool getPlaying() const { return this->playing; };

    // Modifiers
};
