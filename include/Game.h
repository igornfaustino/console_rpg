#include "Character.h"
#include <ctime>
#include "Functions.h"

using namespace std;

class Game
{
private:
    int choise;
    bool playing;

    // character
    Character character;

public:
    Game();
    virtual ~Game();

    // Operators

    // Functions
    void initGame();
    void mainMenu();

    // Accessors
    inline bool getPlaying() const { return this->playing; };

    // Modifiers
};
