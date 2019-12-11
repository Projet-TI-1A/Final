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
	shape.setFillColor(Color(255,214,246));
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

void Dessine_point(int x, int y, RenderWindow& window)/*Dessine un point de taille 5px à la position (x,y)*/
{
	CircleShape point(5);
	point.setFillColor(Color(200,150,246));
	point.setPosition(x,y);
	window.draw(point);

}

/********************************************************************************/

void Dessine_plus_points(vector<point> tab, int taille, RenderWindow& window)
{
	for (int i=0; i<taille; i++)
	{
		Dessine_point(tab[i].x, tab[i].y, window);
	}

}















