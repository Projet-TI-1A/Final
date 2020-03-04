#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include "zone.h"
#include "parametre.h"
#include "air.h"
#include <vector>


using namespace std;
using namespace sf;


int main()
{
	int ligneX=400, ligneY=20, taille=0, taille_erreur=0, nbzones=4, x, y ,k=0, Dessin = false;
	tabpoint tab_point;
	tabpoint tab_erreur;
	vector<point> tab_point; 
	vector<point> tab_erreur;
	const int e=2*int(r/nbzones);
	int aire=0, airetotale=0;
	int **tab_pixel = new int* [L];
        for (int i = 0; i < L; i++)
        {tab_pixel[i] = new int[e];}
 
        
	
	
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
			
			if (zone(k, x, y, xcentre, ycentre, r, R, e))
				{
				tab_point.push_back(p1);
				taille ++;
				remplissage(k,x, y, xcentre, r, R, e, aire, tab_pixel);
				}
			else
				{
				tab_erreur.push_back(p1);
				taille_erreur++;
				}
			
			airetotale= calculaire(k,l,xcentre, ycentre, r);
			switch ( aire_completee(aire, airetotale, condition80, condition95) )   //en fonction de l'aire on fait telle action mais on teste pas les autres
				{
					case 2: //95%
					k+=1;
					break;
					case 1 : //80%
					//mettre les carrés verts?
					break;
					default:
					//rien faire
					break;
				}
			
		}
/*
		for (int i = 0; i < L; i++)
			{delete [] tab_pixel[i];
  			delete [] tab_pixel;}
		*/
		window.clear();
		Grand_cercle(window);
		
		Position_ligne(ligneX, ligneY,window);
		
		Dessine_plus_points(tab_point, tab_erreur, window, R);
		window.display();
		/*test_fin(aire_completer(r,k,condition6),temps_debut); */
	}
	
	
	
	
	

	return 0;
}
