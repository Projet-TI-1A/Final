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
	int ligneX=400, ligneY=20, x, y , Dessin = false, k;
	tabpoint tab_point; 
	tabpoint tab_erreur;
	
	Text text;
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
	
// Display the list of all the video modes available for fullscreen
	/*std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
	for (std::size_t i = 0; i < modes.size(); ++i)
	{
		sf::VideoMode mode = modes[i];
		std::cout << "Mode #" << i << ": "
		<< mode.width << "x" << mode.height << " - "
		<< mode.bitsPerPixel << " bpp" << std::endl;
	}*/
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
				if ((event.key.code == Keyboard::N) or (event.key.code == Keyboard::B))
				{
					Dessin = true;
				}
				
				if (Keyboard::isKeyPressed(Keyboard::Q))
				{
					window.close();
				}
			}
			
			
			if (event.type == Event::KeyReleased)
			{
				if ((event.key.code == Keyboard::N) or (event.key.code == Keyboard::B))
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
			p1.set(x, y);
			
			
			if (zone(x,y,240,160,150, 72))
				{
				tab_point.append(p1);
				}
			else
				{
				tab_erreur.append(p1);
				}
		}
		
		if (1)
			{
				Font font;
				if (!font.loadFromFile("arial.ttf"))
				{
					cout << "Load fail" << endl;
				}
				
				text.setFont(font);
				text.setString("FINI");
				text.setCharacterSize(24);
				text.setFillColor(sf::Color::Blue);
				text.setPosition(100, 20);
			}
		
		window.clear();
		Grand_cercle(window);
		
		Position_ligne(ligneX, ligneY,window);
		Dessine_plus_points(tab_point, tab_erreur, window, R);
		window.draw(text);
		window.display();
		
		/*test_fin(aire_completer(r,k,condition6),temps_debut); */
	}
	
	
	
	

	return 0;
}
