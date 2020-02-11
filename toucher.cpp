#include <SFML/Graphics.hpp>
#include <iostream>
#include "toucher.h"
#include "interface.h"


using namespace std;
using namespace sf;

void Position_Curseur(int *x, int *y, RenderWindow& window)/*Récupère la postion de la souris relative à la fenêtre*/
{
	Vector2i localPosition = Mouse::getPosition(window);
	*x = localPosition.x;
	*y = localPosition.y;
}

/*******************************************************************************/

void Ajoute_point(vector<point> tab_point, int* taille, RenderWindow& window)
{
	int x, y;
	point p1;
	Position_Curseur(&x, &y, window);
	p1.x = x;
	p1.y = y;
	
	tab_point.push_back(p1);
	*taille = *taille + 1 ;
	tab_point.push_back(p1);
}

/*********************************************************************************/

void point::set(int& x, int& y)
{
	this->x=x;
	this->y=y;
}

void point::get(int& x, int& y)
{
	x=this->x;
	y=this->y;
}

void point::point(){}

void point::point(int x, int y)
{
	this->x=x;
	this->y=y;
}

