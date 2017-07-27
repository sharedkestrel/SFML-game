#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(int argc, char* argv[]) {

    sf::Window game(sf::VideoMode(1280, 720), "Max Eloy's Magical Experience");

    while (game.isOpen()) {

        //Load LOADING SCREEN sprites and display them

        //Load MENU

            //start game

            //load game

            //options
                //Video (window size)
                //Audio (volume soundtrack, SFX)
                //Keybindings
                //Difficulty
                //back

            //exit
                //confirmation prompt
                //if(YES) { game.close() }
                //if(NO) { closeThePrompt() }

        sf::Event Event;
        while (game.pollEvent(Event)) {
            if (Event.type == sf::Event::Closed)
                game.close();
        }
        game.display();
    }
}