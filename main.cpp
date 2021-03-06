#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include "zone.h"
#include "parametre.h"
#include "air.h"
#include <vector>
#include "ligne.h"

using namespace std;
using namespace sf;


int main()
{
	int x, y,E,k=0, Dessin = false;
	tabpoint tab_point;
	tabpoint tab_erreur;
	const int e=2*int(r/nbzone);
	int ligneX= xcentre +r-(k+1)*e, ligneY=20;
	int airetotale[nbzone];
	int aire=0;
	E = e+1;
	int **tab_pixel = new int* [E];
        for (int i = 0; i < E; i++)
        {tab_pixel[i] = new int[L];}
	
	for (int i = 0; i < nbzone; i++)
      	{airetotale[i] = calculaire(i,e,l,xcentre, ycentre, r, R);} 
	
        
	
	
	RenderWindow window(VideoMode(480,320), "SFML works!"/*,Style::Fullscreen*/);
	window.clear();
	sf::Texture texture;
	if (!texture.loadFromFile("background_im22.jpg", sf::IntRect(0,0,480,320)))
	{ /* Erreur*/ }
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setScale(sf::Vector2f(1.5f,1.5f));
	
	
	
	

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
				if (event.key.code == Keyboard::B)
				{
					Dessin = true;
				}
				
				if ((event.key.code == Keyboard::Q) or (event.key.code == Keyboard::N))
				{
					window.close();
				}
			}
			
			
			if (event.type == Event::KeyReleased)
			{
				if (event.key.code == Keyboard::B)
				{
					Dessin = false ;
				}
				
				if(event.key.code == Keyboard::Comma)
				{
					restart(tab_point, tab_erreur, k, temps_debut);
				}
			}
		}
		
			if (Dessin)
			{	
				Position_Curseur(&x, &y, window);
				p1.set(x,y); 
				if (zone(k, x, y, xcentre, ycentre, r, R, e)==1)
					{
					tab_point.append(p1);
					remplissage(k,x, y, xcentre,ycentre, r, R, e, aire, tab_pixel); 
					}
				 
			
			 if (zone(k, x, y, xcentre, ycentre, r, R, e)==2)
					{
						tab_erreur.append(p1);
					}
				
				
				
				switch ( aire_completee(aire, airetotale[k], condition80, condition95) )   //en fonction de l'aire on fait telle action mais on teste pas les autres
				{
					case 2: //95%
					k+=1;
					//l1.set(xcentre+r-(k+1)*e, ligneY);
					//l2.set(xcentre+r-(k+1)*e+e, ligneY);
					//réinitialisation des tableaux
					aire=0;
					ligneX= xcentre +r-(k+1)*e;
					tab_point.reset();
					tab_erreur.reset();
					for (int i = 0; i < e; i++)
        					for(int j = 0; j < L; j++)
							{tab_pixel[i][j]=0;}
					break;
					case 1 : 
					//80%
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
		ZoneFinie(window, k, e, xcentre, ycentre, r);
		Position_ligne(ligneX, ligneY,window);
		Position_ligne(ligneX+e, ligneY,window);
		
		Dessine_plus_points(tab_point, tab_erreur, window, R);
		if (aire_completee(aire, airetotale[k], condition80, condition95)==1 ){
			for (int i=0;i<e;i++){
				for (int y=0;y<l;y++){
					if (tab_pixel[i][y]==0  &&  zone(k, i+(xcentre+r-e*(k+1)), y, xcentre, ycentre, r, R, e)==1)
						{Dessine_restant(k,i,y, e, r, R, xcentre, window);}
					}
				}
			}
		
		/*if (aire_completee(aire, airetotale[k], condition80, condition95)==1 ){
			for (int i=0;i<e;i++){
				for (int y=0;y<l;y++){
					if (tab_pixel[i][y]==0  &&  zone(k, i+(xcentre+r-e*(k+1)), y, xcentre, ycentre, r, R, e))
						{Dessine_restant(k,i,y, e, r, R, xcentre, window);}
					}
				}
			}*/
		window.display();
		/*test_fin(aire_completee(aire,airetotale[nbzone],condition95,condition80),temps_debut);*/
	}
	
	
	
	
	

	return 0;
}