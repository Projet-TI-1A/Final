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

void Ajoute_point(vector<point> tab_point,int* taille, RenderWindow& window)
{
	int x, y;
	point p1;
	Position_Curseur(&x, &y, window);
	p1.x = x;
	p1.y = y;
	*taille ++;
	tab_point.push_back(p1);
}


