#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include "zone.h"
#include <vector>
#include "parametre.h"

using namespace std;
using namespace sf;


int main()
{
	int ligneX=400, ligneY=20, x, y , Dessin = false;
	tabpoint tab_point; 
	tabpoint tab_erreur;
	
	RenderWindow window(VideoMode(480,320), "SFML works!",Style::Fullscreen);
	window.clear();
	sf::Texture texture;
	if (!texture.loadFromFile("background_im22.jpg", sf::IntRect(0,0,480,320)))
	{ /* Erreur*/ }
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setScale(sf::Vector2f(1.5f,1.5f));
	
	Grand_cercle(window);
	Position_ligne(ligneX, ligneY,window);
	
	
	

	point p1;
	
	while (window.isOpen())
	{
		int temps_debut =clock();
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				{window.close();}
			
			
			if (event.type == Event::KeyPressed)
			{
				if ((event.key.code == Keyboard::N) or (event.key.code == Keyboard::Comma) or (event.key.code == Keyboard::B))
				{
					Dessin = true;
				}
			}
			
			
			if (event.type == Event::KeyReleased)
			{
				if ((event.key.code == Keyboard::Comma) or (event.key.code == Keyboard::N) or (event.key.code == Keyboard::B))
					Dessin = false ;
			}
			
			
			if (event.type == Event::KeyPressed)
			{
				if (Keyboard::isKeyPressed(Keyboard::Q))
				{
					window.close();
				}
			}
		}
		
			if (Dessin)
		{
			Position_Curseur(&x, &y, window);
			p1.set(x, y);
			
			
			if (zone(x,y,240,160,150, 72))
				{
				tab_point.append(p1);
				}
			else
				{
				tab_erreur.append(p1);
				}
			
			if (aire_completee)
			{
				sf::String Text("FINI", SetFont(sf::Font::GetDefaultFont(), 50);
			}
		}
		
		window.clear();
		Grand_cercle(window);
		
		Position_ligne(ligneX, ligneY,window);
		
		Dessine_plus_points(tab_point, tab_erreur, window, R);
		window.display();
		
		/*test_fin(aire_completer(r,k,condition6),temps_debut); */
	}
	
	
	
	

	return 0;
}
