#include <SFML/Graphics.hpp>
#include <iostream>
#include "toucher.h"
#include "interface.h"

using namespace std;
using namespace sf;



/********************************************************************************/

void Grand_cercle(RenderWindow& window)/*Permet de trace le cercle représentant la tumeur*/
{
	CircleShape shape(180);
	shape.setFillColor(Color(255,214,246,150));
	shape.setOutlineThickness(20);
	shape.setOutlineColor(sf::Color(253,108,158));
	shape.setPosition(150,30);
	window.draw(shape);

}

/********************************************************************************/

void Position_ligne(int x, int y,RenderWindow& window)/*Permet de mettre la ligne à la position (x,y)*/
{
	RectangleShape line(Vector2f(450,5));
	line.rotate(90);
	line.setPosition(x,y);
	line.setFillColor(Color::Red);
	window.draw(line);

}

/********************************************************************************/

void Dessine_point(point p, RenderWindow& window, int R)/*Dessine un point de taille Rpx à la position (x,y)*/
{
	int x, y;
	p.get(x,y);
	CircleShape point(R);
	point.setFillColor(Color(200,150,246));
	point.setPosition(x,y);
	window.draw(point);

}

/********************************************************************************/
	void Dessine_erreur(point p, RenderWindow& window, int R)/*Dessine un point de taille Rpx à la position (x,y)*/
{
	int x,y;
	p.get(x,y);
	CircleShape point(R);
	point.setFillColor(Color(255,0,0));
	point.setPosition(x,y);
	window.draw(point);

}

/*******************************************************************************/
void Dessine_plus_points(tabpoint tab,tabpoint erreur, RenderWindow& window,int R)
{
	point p1;
	int taille=tab.gettaille(), taille2=erreur.gettaille(), i;
	
	for (i=0; i<taille; i++)
	{
		tab.get(p1,i);
		Dessine_point(p1, window, R);
	}
	for (i=0;i<taille2;i++)
	{
		erreur.get(p1,i);
		Dessine_erreur(p1, window, R);
	}
}









