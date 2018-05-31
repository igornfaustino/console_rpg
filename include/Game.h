#include "Character.h"
#include <ctime>
#include "Functions.h"
#include <vector>

class Game
{
  private:
	int choise;
	bool playing;

	// character
	std::vector<Character> characters;
	int activeCharacter;

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
