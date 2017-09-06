//
// Created by Francesco on 06/09/2017.
//

#include "Game.h"

Game::Game() : window("Max Eloy's Magical Experience", sf::Vector2i(900, 600)) {
    RestartClock();
    srand(time(NULL));
}

Game::~Game() {}

sf::Time Game::GetElapsedTime(){
    return elapsedTime;
}

void Game::RestartClock(){
    elapsedTime = gameClock.restart();
}

Window* Game::GetWindow(){
    return &window;
}

void Game::HandleInput(){
    // TODO Input handling.
}

void Game::Update(){
    window.Update();
    // TODO HandleInput();
}

void Game::Render(){
    window.BeginDraw(); // Clear.

    //Draw Objects

    window.EndDraw(); // Display.
}