#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include <vector>

using namespace std;
using namespace sf;


int main()
{
	int ligneX=400, ligneY=50, taille=0, x, y; 
	vector<point> tab_point;
	
	RenderWindow window(VideoMode(700,700), "SFML works!");
	window.clear();
	Grand_cercle(window);
	Position_ligne(ligneX, ligneY,window);
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				{window.close();}
			
			
			if (event.type == Event::MouseButtonPressed)
			{
				if ((Mouse::isButtonPressed(Mouse::Left)))
				{
					Ajoute_point(tab_point, &taille, window);
					cout << taille;
					Position_Curseur(&x, &y, window);
								
				}
			}
		}
	window.clear();
	Grand_cercle(window);
	Position_ligne(ligneX, ligneY,window);
	Dessine_point(x,y, window);
	Dessine_plus_points(tab_point, taille, window);
	
	window.display();
	}
	
	return 0;
}

/* Faire un mega tableau qui append les points qui ont été dessinés et les affiches a chaque fois */


