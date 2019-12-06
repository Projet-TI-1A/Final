#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

void Fenetre(void)/*Fonction qui permet d'ouvrir la fenêtre*/
{
	RenderWindow window(VideoMode(700,700), "SFML works!",Style::Fullscreen);/*Fonction qui permet d'ouvrir la fenêtre*/
}

/********************************************************************************/

void Grand_cercle(void)/*Permet de trace le cercle représentant la tumeur*/
{
	CircleShape shape(180);
	shape.setFillColor(Color(255,214,246));
	shape.setOutlineThickness(20);
	shape.setOutlineColor(sf::Color(253,108,158));
	shape.setPosition(150,30);
}

/********************************************************************************/

void Position_ligne(int x, y)/*Permet de mettre la ligne à la position (x,y)*/
{
	RectangleShape line(Vector2f(450,5));
	line.rotate(90);
	line.setPosition(x,y);
	line.setFillColor(Color::Red);
}

/********************************************************************************/

void Dessine_point(int x, int y)/*Dessine un point de taille 5px à la position (x,y)*/
{
	CircleShape point(5);
	point.setFillColor(Color(200,150,246));
	point.setPosition(x,y);
}

#endif
