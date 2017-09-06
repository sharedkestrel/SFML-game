//
// Created by Francesco on 06/09/2017.
//

#include "Window.h"

Window::Window(const std::string& title, const sf::Vector2i& size){
    Setup(title,size);
}

Window::~Window(){
    Destroy();
}

void Window::Setup(const std::string title, const sf::Vector2i& size){
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

void Window::Draw(sf::Drawable& l_drawable){
    window.draw(l_drawable);
}

sf::Vector2i Window::GetWindowSize(){
    return windowSize;
}

void Window::ToggleFullscreen(){
    isFullscreen = !isFullscreen;
    Destroy();
    Create();
}

void Window::Update(){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            isOpen = false;
        }
        else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F5){
            ToggleFullscreen();
        }
    }
}
