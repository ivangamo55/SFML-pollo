#include <iostream>
#include<SFML/Graphics.hpp>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    sf::CircleShape ojo1_pollo(30.f);
    sf::CircleShape ojo2_pollo(30.f);
    sf::CircleShape pupila1_pollo(10.f);
    sf::CircleShape pupila2_pollo(10.f);
    sf::CircleShape pico_pollo;

    //color de las formas
    shape.setFillColor(sf::Color::Yellow);
    ojo1_pollo.setFillColor(sf::Color::White);
    ojo2_pollo.setFillColor(sf::Color::White);
    pupila1_pollo.setFillColor(sf::Color::Black);
    pupila2_pollo.setFillColor(sf::Color::Black);
    pico_pollo.setFillColor(sf::Color::Red);


    //pocision de las formas
    shape.setPosition(50, 50);
    ojo1_pollo.setPosition(50, 50);
    ojo2_pollo.setPosition(130, 50);
    pupila1_pollo.setPosition(60, 65);
    pupila2_pollo.setPosition(140, 65);

    pico_pollo.setRadius(20.f);
    pico_pollo.setPointCount(3);
    pico_pollo.setPosition(145, 150);
    pico_pollo.rotate(180);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(ojo1_pollo);
        window.draw(ojo2_pollo);
        window.draw(pupila1_pollo);
        window.draw(pupila2_pollo);
        window.draw(pico_pollo);
        window.display();
    }

    return 0;
}
