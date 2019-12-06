#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

void Position_Curseur(int *x, int *y)/*Récupère la postion de la souris relative à la fenêtre*/
{
	Vector2i localPosition = Mouse::getPosition(window);
	*x = localPosition[0];
	*y = localPosition[1];
}


