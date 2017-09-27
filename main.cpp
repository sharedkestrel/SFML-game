
#include "Game.h"

int main(int argc, char* argv[]) {

    Game game;

    //TODO multiple return codes for CheckFiles()
    //check if all the files are there before starting the game
    if(game.CheckFiles()) {

        while (game.GetWindow()->IsOpen()) {

            game.HandleInput();
            game.Render();
            game.RestartCycleClock();

        }
    }
    else
        return EXIT_FAILURE;
}