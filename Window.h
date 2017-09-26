//
// Created by Francesco on 06/09/2017.
//

#ifndef UNDEFINED_WINDOW_H
#define UNDEFINED_WINDOW_H

#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window {

public:

    Window(const std::string& title, const sf::Vector2u& size);
    ~Window();

    void BeginDraw();
    void EndDraw();

    bool IsOpen();
    bool IsFullscreen();
    sf::Vector2u GetWindowSize();

    sf::RenderWindow &getWindow();

    void setIsOpen(bool isOpen);

    void ToggleFullscreen();

    void Draw(sf::Drawable& drawable);
private:
    void Setup(const std::string title, const sf::Vector2u& size);
    void Create();
    void Destroy();

    sf::RenderWindow window;
    sf::Vector2u windowSize;
    std::string windowTitle;

    bool isFullscreen;
    bool isOpen;

};


#endif //UNDEFINED_WINDOW_H
