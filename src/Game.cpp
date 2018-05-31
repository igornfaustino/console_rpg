#include "Game.h"

Game::Game()
{
    choise = 0;
    playing = true;
}

Game::~Game()
{
}

// Functions

void Game::mainMenu()
{
    cout << "MAIN MENU" << endl << endl;

    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level Up" << endl;
    cout << "4: Rest" << endl;

    cout << endl << "Choise: ";

    cin >> choise;

    switch (choise)
    {
    case 0:
        playing = false;
        break;
    default:
        break;
    }
}