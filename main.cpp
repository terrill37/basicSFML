#include <iostream>

#include <SFML/Graphics.hpp>


int main(){
    sf::RenderWindow  window(sf::VideoMode(200, 200), "SFML works!");//, sf::Style::Titlebar);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    //std::cout<<window.isOpen()<<std::endl;
    //if(window.isOpen()){ 
    //    std::cout<<"open"<<std::endl;
    //}
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed) 
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
