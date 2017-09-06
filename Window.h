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

    Window(const std::string& title, const sf::Vector2i& size);
    ~Window();

    void BeginDraw();
    void EndDraw();

    void Update();

    bool IsOpen();
    bool IsFullscreen();
    sf::Vector2i GetWindowSize();

    void ToggleFullscreen();

    void Draw(sf::Drawable& l_drawable);
private:
    void Setup(const std::string title, const sf::Vector2i& size);
    void Create();
    void Destroy();

    sf::RenderWindow window;
    sf::Vector2i windowSize;
    std::string windowTitle;

    bool isFullscreen;
    bool isOpen;

};


#endif //UNDEFINED_WINDOW_H
