#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include "zone.h"
#include <vector>
#define R 5
using namespace std;
using namespace sf;


int main()
{
	int ligneX=400, ligneY=20, taille=0, taille_erreur=0, x, y , Dessin = false;
	vector<point> tab_point; 
	vector<point> tab_erreur;
	
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
	
	temps_debut=clock();
	

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
				if (event.key.code == Keyboard::Space)
				{
					Dessin = true;
				}
			}
			
			
			if (event.type == Event::KeyReleased)
			{
				if (event.key.code == Keyboard::Space)
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
			p1.x = x;
			p1.y = y;
			
			
			if (zone(x,y,240,160,150, 72))
				{
				tab_point.push_back(p1);
				taille ++;
				}
			else
				{
				tab_erreur.push_back(p1);
				taille_erreur++;
				}
			
			
		}
		
		window.clear();
		/*window.draw(sprite);*/
		Grand_cercle(window);
		
		Position_ligne(ligneX, ligneY,window);
		
		Dessine_plus_points(tab_point, tab_erreur, taille, taille_erreur, window, R);
		window.display();
		/*test_fin(aire_completer(r,k,condition6),temps_debut); */
	}
	
	
	
	
	

	return 0;
}
