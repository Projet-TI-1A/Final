#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include <vector>
#define R 5
using namespace std;
using namespace sf;


int main()
{
	Clock clock; // démarre le chrono
	Time elapsed1 = clock.getElapsedTime();
	cout << elapsed1.asSeconds() << std::endl;
	clock.restart();
	int ligneX=400, ligneY=50, taille=0, x, y , Dessin = false;
	vector<point> tab_point;
	
	RenderWindow window(VideoMode(480,320), "SFML works!",Style::Fullscreen);
	window.clear();
	Grand_cercle(window);
	Position_ligne(ligneX, ligneY,window);
	
	point p1;
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				{window.close();}
			
			
			else if (event.type == Event::KeyPressed)
			{
				if (Keyboard::isKeyPressed(Keyboard::Space))
				{
					Dessin = true;
				}
			}
			
			else if (event.type == Event::KeyReleased)
			{
				if (Event.Key.Code == Keyboard::Space)
					Dessin = false ;
			}
			
			else if (event.type == Event::KeyPressed)
			{
				if (Keyboard::isKeyPressed(Keyboard::Q))
				{
					window.close();
				}
			}
		}
		
		if (Dessin)
		{
			/*Ajoute_point(tab_point, &taille, window);
			cout << "mouse x: " << event.mouseButton.x << endl;
			cout << "mouse y: " << event.mouseButton.y << endl;
			cout << "taille : " << taille << endl;
			cout << "x = " << tab_point[taille-1].x << " et y = " << tab_point[taille-1].y << endl;*/
			
			/* La fonction Ajoute_point est identique à la suite du code mais ne fonctionne pas ...*/
			Position_Curseur(&x, &y, window);
			p1.x = x;
			p1.y = y;
			
			tab_point.push_back(p1);
			taille ++;
		}
		
		window.clear();
		Grand_cercle(window);
		
		Position_ligne(ligneX, ligneY,window);
		Dessine_point(x,y, window, R);
		Dessine_plus_points(tab_point, taille, window, R);
		window.display();
	}
	Time elapsed1 = clock.getElapsedTime();
	cout << elapsed1.asSeconds() << std::endl;
	clock.restart();
	return 0;
}



