//
// Created by Francesco on 06/09/2017.
//

//necessary to create path string and handle files
#include <fstream>
#include <sstream>
#include <sys/stat.h>

#include <vector>
#include "Game.h"

Game::Game() : window("Max Eloy's Magical Experience", sf::Vector2u(960, 640)), hero() {

    hero.getHeroSprite().setOrigin(GetWindow()->GetWindowSize().x - hero.getHeroTexture().getSize().x/2,
                                   GetWindow()->GetWindowSize().y - hero.getHeroTexture().getSize().y);
    RestartCycleClock();
    srand(time(NULL));
}

Game::~Game() {}

sf::Time Game::GetCycleElapsedTime(){
    return cycleElapsedTime;
}

void Game::RestartCycleClock(){
    cycleElapsedTime = cycleClock.restart();
}

void Game::RestartTimestepClock() {
    timestepElapsedTime = fixedTimestepClock.restart();
}

sf::Time Game::GetTimestepElapsedTime() {
    return timestepElapsedTime;
}

Window* Game::GetWindow(){
    return &window;
}

void Game::HandleInput() {
    sf::Event event;
    while(window.getWindow().pollEvent(event)) {
        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Down) {
            hero.Move(0);
        }
        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left) {
            hero.Move(1);
        }
        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right) {
            hero.Move(2);
        }
        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Up) {
            hero.Move(3);
        }
        else if(event.type == sf::Event::Closed){
            //TODO confirmation prompt
            GetWindow()->setIsOpen(false);
        }
        else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F5){
            GetWindow()->ToggleFullscreen();
        }
    }
    // TODO Input handling.
}

void Game::Render(){
    window.BeginDraw(); // Clear.

    //TODO simplify with functions

    //Draw Objects
    window.Draw(hero.getHeroSprite());

    window.EndDraw(); // Display.
}

bool Game::SaveGame(unsigned short int slot) {

    //MinGW has a bug with to_string(), so we use an alternate method
    std::fstream saveFile;
    std::ostringstream temp;
    temp << slot;
    std::string savePath = "assets\\saves\\save_" + temp.str() + ".txt";
    try {
        saveFile.open(savePath, std::fstream::out | std::fstream::trunc);
        //TODO write data to file
        saveFile.close();
    }
    catch(int e){
        //TODO exception
        return false;
    }
    return true;
}

bool Game::LoadGame(unsigned short int slot) {

    //use the same method to get the filename and path
    std::fstream saveFile;
    std::ostringstream temp;
    temp << slot;
    std::string savePath = "assets\\saves\\save_" + temp.str() + ".txt";
    try {
        saveFile.open(savePath, std::fstream::in);
        //TODO read data from file
        saveFile.close();
        return true;
    }
    catch(int e){
        //TODO exception and error message
        return false;
    }
}

bool Game::DoesFileExist(const std::string& path) {
    struct stat buffer;
    return (stat (path.c_str(), &buffer) == 0);
}

bool Game::CheckFiles() {

    //TODO compact the process/declaration/population of the vector (txt file?)
    //create vector of all the assets
    std::vector<std::string> filePaths;
    filePaths.push_back("assets\\backgrounds\\logo.png");
    filePaths.push_back("assets\\backgrounds\\menu.png");
    filePaths.push_back("assets\\backgrounds\\sewers.png");
    filePaths.push_back("assets\\fonts\\menuFont.ttf");
    filePaths.push_back("assets\\music\\battle.ogg");
    filePaths.push_back("assets\\music\\city.ogg");
    filePaths.push_back("assets\\music\\menu.ogg");
    filePaths.push_back("assets\\music\\sewers.ogg");
    filePaths.push_back("assets\\music\\swamp.ogg");
    filePaths.push_back("assets\\saves\\save_1.txt");
    filePaths.push_back("assets\\saves\\save_2.txt");
    filePaths.push_back("assets\\saves\\save_3.txt");
    filePaths.push_back("assets\\sfx\\locked.wav");
    filePaths.push_back("assets\\sprites\\circense.png");
    filePaths.push_back("assets\\sprites\\criminale.png");
    filePaths.push_back("assets\\sprites\\geniere.png");
    filePaths.push_back("assets\\sprites\\untore.png");
    filePaths.push_back("assets\\sprites\\npc.png");
    filePaths.push_back("assets\\map.png");


    //TODO Check for error files to throw errors if the others aren't there


    bool filesFound = true;
    for(const std::string& file : filePaths){
        if(!DoesFileExist(file)) {
            filesFound = false;
            break;
        }
    }

    return filesFound;
}