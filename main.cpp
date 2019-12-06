#include <SFML/Graphics.hpp>
#include <iostream>
#include "INTERFACE_H"

using namespace std;
using namespace sf;

int main()
{
	int ligneX=400, ligneY=50, X, Y;
	
	Fenetre();
	Grand_cercle();
	Position_ligne(ligneX, ligneY);
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				{window.close();}
			
			if (event.type == Event::MouseMoved)
			{
				Position_Curseur(&x, &y);
				cout << "Coord Souris" << x << "," << y << "\n";
			}
			
			if (event.type == Event::MouseButtonPressed)
			{
				if (event.mouseButton == Mouse::Left)
				{
					Position_Curseur(&x, &y);
					Dessine_point(x, y);
				}
			}
		}

	window.clear();
	window.draw(shape);
	window.draw(line);
	window.draw(point);
	window.display();
	}
	
	return 0;
}


