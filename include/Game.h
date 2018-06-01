#ifndef GAME_H
#define GAME_H

#include "Character.h"
#include "Enemy.h"
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
	void travel();

	// Accessors
	inline bool getPlaying() const { return this->playing; };

	// Modifiers
};

#endif // !GAME_H