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

void Dessine_point(int x, int y, RenderWindow& window, int R)/*Dessine un point de taille 5px à la position (x,y)*/
{
	CircleShape point(R);
	point.setFillColor(Color(200,150,246));
	point.setPosition(x,y);
	window.draw(point);

}

/********************************************************************************/
	void Dessine_erreur(int x, int y, RenderWindow& window, int R)/*Dessine un point de taille 5px à la position (x,y)*/
{
	CircleShape point(R);
	point.setFillColor(Color(255,0,0));
	point.setPosition(x,y);
	window.draw(point);

}

/*******************************************************************************/
void Dessine_plus_points(vector<point> tab, vector<point> erreur, int taille, int taille2, RenderWindow& window,int R)
{
	for (int i=0; i<taille; i++)
	{
		Dessine_point(tab[i].x, tab[i].y, window, R);
	}
	for (int i=0;i<taille2;i++)
	{	
		Dessine_erreur(erreur[i].x, erreur[i].y, window, R);
	}
}






int remplissage(int x,int y,int a,int b,int r, int e,int **resul)
{
int i=0,j=0;
int R=10;

	if(zone(x,y,a,b,r,e)==1)
	{
		for (i=x-R;i<x+R;i++)
			{ for(j=y-R;j<y+R;j++)
				{resul[i][j]=1;}
			}
	}


return 0;
}









