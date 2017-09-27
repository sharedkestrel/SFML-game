//
// Created by Filippo on 06/09/2017.
//

#ifndef UNDEFINED_GAME_H
#define UNDEFINED_GAME_H

#include <fstream>
#include "Window.h"
#include "Criminale.h"

class Game {

public:

    Game();
    ~Game();

    void HandleInput();
    void Render();

    Window* GetWindow();

    sf::Time GetCycleElapsedTime();
    sf::Time GetTimestepElapsedTime();
    void RestartCycleClock();
    void RestartTimestepClock();

    bool SaveGame(unsigned short int slot);
    bool LoadGame(unsigned short int slot);

    bool CheckFiles();
    bool DoesFileExist(const std::string& path);

private:

    Criminale hero;
    Window window;
    sf::Clock cycleClock;
    sf::Clock fixedTimestepClock;
    sf::Time cycleElapsedTime;
    sf::Time timestepElapsedTime;

    //TODO tile array/vector

};


#endif //UNDEFINED_GAME_H
