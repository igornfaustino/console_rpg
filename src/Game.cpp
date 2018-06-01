#include "Game.h"

Game::Game()
{
	this->choise = 0;
	this->playing = true;
	this->activeCharacter = 0;
	this->fileName = "characters.txt";
}

Game::~Game()
{
}

// Functions

// TODO. Make a first menu
// - Create New
// - Load file
void Game::initGame()
{
	std::cout << "== CONSOLE RPG ==" << std::endl
			  << std::endl;

	std::cout << "0: New Character" << std::endl;
	std::cout << "1: Load Characters" << std::endl;
	std::cout << "2: Quit Game" << std::endl;

	std::cout << std::endl
			  << "Choise: ";
	std::cin >> this->choise;
	std::cin.ignore();

	switch (this->choise)
	{
	case 0:
		createNewCharacter();
		break;
	case 1:
		loadCharacters();
		break;
	case 2:
		this->playing = false;
		break;
	default:
		initGame();
		break;
	}
}

void Game::mainMenu()
{
	std::cout << "MAIN MENU" << std::endl
			  << std::endl;

	std::cout << "0: Travel" << std::endl;
	std::cout << "1: Shop" << std::endl;
	std::cout << "2: Level Up" << std::endl;
	std::cout << "3: Rest" << std::endl;
	std::cout << "4: Character Sheet" << std::endl;
	std::cout << "5: Create a New Character" << std::endl;
	std::cout << "6: save Character" << std::endl;
	std::cout << "7: load Character" << std::endl;
	std::cout << "8: Quit" << std::endl;

	std::cout << std::endl
			  << "Choise: ";

	std::cin >> this->choise;
	// std::cin.ignore();

	switch (this->choise)
	{
	case 4:
		if (this->characters.size() == 0)
		{
			std::cout << "== No character ==" << std::endl
					  << std::endl;
			break;
		}
		this->characters[this->activeCharacter].printToScreen();
		break;
	case 5:
		std::cin.ignore();
		createNewCharacter();
		break;
	case 6:
		saveCharacters();
		break;
	case 7:
		break;
	case 8:
		this->playing = false;
		break;
	default:
		break;
	}
}

void Game::createNewCharacter()
{
	std::string name;
	std::cout << "Enter name for character: ";
	getline(std::cin, name);

	this->characters.push_back(Character());
	this->activeCharacter = this->characters.size() - 1;
	this->characters[this->activeCharacter].initialize(name);
}

void Game::saveCharacters()
{
	std::ofstream outFile(this->fileName);

	if (outFile.is_open())
	{

		for (size_t i = 0; i < this->characters.size(); i++)
		{
			outFile << this->characters[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

void Game::loadCharacters()
{
}

void Game::travel()
{
}