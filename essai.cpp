#include <SFML/Graphics.hpp>
#include "math.h"
#include <iostream>
using namespace std;
using namespace sf; 

int main()
{
    int i,C=101; float y;
    RenderWindow window(VideoMode(800, 600), "My window");


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::KeyPressed)
			{
				if (Keyboard::isKeyPressed(Keyboard::Q))
				{
					window.close();
				}
			}

        }
	ConvexShape polygon;
	polygon.setPointCount(301);
	for (i=50;i<201;i++)
	{ y= sqrt(100*100 - (i-100)*(i-100))+100;
	polygon.setPoint(i-50, sf::Vector2f(i, y));
	y= -sqrt(100*100 - (250-i-100)*(250-i-100))+100;
	polygon.setPoint(i+100, sf::Vector2f(250-i, y));
	} 
	
	// valable pr xcentre=100 ycentre=100 
	// setPoint ( indice du point, sf::Vector2f(x,y))
	polygon.setOutlineColor(sf::Color::Red);
	polygon.setOutlineThickness(5);
	/*polygon.setPosition(0, 0);*/


        window.clear(sf::Color::Blue);

        window.draw(polygon);
        window.display();
    }
    
	
	return 0;
}


