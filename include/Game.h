#include "Character.h"
#include "Functions.h"
#include <ctime>
#include <vector>
#include <fstream>

class Game
{
private:
	int choise;
	bool playing;

	// character
	std::vector<Character> characters;
	int activeCharacter;
	std::string fileName;

public:
	Game();
	virtual ~Game();

	// Operators

	// Functions
	void initGame();
	void mainMenu();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();

	// Accessors
	inline bool getPlaying() const { return this->playing; };

	// Modifiers
};
