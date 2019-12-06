#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(700,700), "SFML works!");
    sf::CircleShape shape(180);
    shape.setFillColor(sf::Color(255,214,246));
    shape.setOutlineThickness(20);
    shape.setOutlineColor(sf::Color(253,108,158));
    shape.setPosition(150,30);
	
	sf::RectangleShape line(sf::Vector2f(450,5));
	line.rotate(90);
	line.setPosition(400,20);
	line.setFillColor(sf::Color::Red);
	
	
	sf::CircleShape point(5);
	point.setFillColor(sf::Color(200,150,246));
	point.setPosition(500,200);
	
	sf::Style::Fullscreen;
	
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
        window.draw(line);
        window.draw(point);
        window.display();
    }

    return 0;
}
