//
// Created by Francesco on 06/09/2017.
//

#ifndef UNDEFINED_GAME_H
#define UNDEFINED_GAME_H

#include "Window.h"

class Game {

public:

    Game();
    ~Game();

    void HandleInput();
    void Update();
    void Render();

    Window* GetWindow();

    sf::Time GetElapsedTime();
    void RestartClock();

private:

    Window window;
    sf::Clock gameClock;
    sf::Time elapsedTime;
};


#endif //UNDEFINED_GAME_H
