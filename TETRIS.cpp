#include <SFML/Graphics.hpp>
#include <iostream>
#define n 4

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 700), "TETRIS");

    sf::RectangleShape shape2[n][n];
  

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                window.draw(shape2[i][j]);
                shape2[i][j].setPosition(i * 55, j * 55);
                shape2[i][j].setSize(sf::Vector2f(50.f, 50.f));
                shape2[i][j].setFillColor(sf::Color::Cyan);
            }
        }
        window.display();
    }

    return 0;
}