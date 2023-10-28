#include <SFML/Graphics.hpp>
#include <iostream>
#define ancho 20 
#define largo 10

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 620), "TETRIS");

    sf::RectangleShape shape[ancho][largo];

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (int j = 0; j < ancho; j++)
        {
            for (int i = 0; i < largo; i++)
            {
                window.draw(shape[i][j]);
                shape[i][j].setPosition((i * 30)+10, (j * 30)+10);
                shape[i][j].setSize(sf::Vector2f(30.f, 30.f));
                shape[i][j].setFillColor(sf::Color::Black);
                shape[i][j].setOutlineColor(sf::Color::White);
                shape[i][j].setOutlineThickness(1);
            }

        }

        window.display();
    }

    return 0;
}