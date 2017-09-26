//
// Created by Francesco on 06/09/2017.
//

#include "Window.h"

Window::Window(const std::string& title, const sf::Vector2u& size){
    Setup(title,size);
}

Window::~Window(){
    Destroy();
}

void Window::Setup(const std::string title, const sf::Vector2u& size){
    windowTitle = title;
    windowSize = size;
    isFullscreen = false;
    isOpen = true;
    window.setFramerateLimit(60);
    Create();
}

void Window::Create(){
    auto style = (isFullscreen ? sf::Style::Fullscreen
                                 : sf::Style::Default);
    window.create({ windowSize.x, windowSize.y, 32 },
                    windowTitle, style);
}

void Window::Destroy(){
    window.close();
}

void Window::BeginDraw(){
    window.clear(sf::Color::Black);
}

void Window::EndDraw(){
    window.display();
}

bool Window::IsOpen(){
    return isOpen;
}

bool Window::IsFullscreen(){
    return isFullscreen;
}

void Window::Draw(sf::Drawable& drawable){
    window.draw(drawable);
}

sf::Vector2u Window::GetWindowSize(){
    return windowSize;
}

void Window::ToggleFullscreen(){
    isFullscreen = !isFullscreen;
    Destroy();
    Create();
}

sf::RenderWindow &Window::getWindow() {
    return window;
}

void Window::setIsOpen(bool isOpen) {
    Window::isOpen = isOpen;
}
