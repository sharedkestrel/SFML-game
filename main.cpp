#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include "config.h"
#include "Game.h"

using namespace std;

int main(int argc, char* argv[]) {

    Game game;

    while (game.GetWindow()->IsOpen()) {

        game.HandleInput();
        game.Update();
        game.Render();
        game.RestartClock();

    }
}