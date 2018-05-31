#include "Game.h"

Game::Game()
{
	this->choise = 0;
	this->playing = true;
	this->activeCharacter = 0;
}

Game::~Game()
{
}

// Functions
void Game::initGame()
{
	std::string name;
	std::cout << "Enter name for character: ";
	getline(std::cin, name);
	this->character.initialize(name);
}

void Game::mainMenu()
{
	std::cout << "MAIN MENU" << std::endl
			  << std::endl;

	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level Up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character Sheet" << std::endl;
	std::cout << "6: Create a New Character" << std::endl;
	std::cout << "7: save Character" << std::endl;
	std::cout << "8: load Character" << std::endl;

	std::cout << std::endl
			  << "Choise: ";

	std::cin >> this->choise;

	switch (this->choise)
	{
	case 0:
		this->playing = false;
		break;
	case 5:
		this->characters[this->activeCharacter].printToScreen();
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	default:
		break;
	}
}