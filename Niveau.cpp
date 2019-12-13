#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include <vector>

using namespace std
using namespace sf
/**********************************************************/


void Set_Area(int R,vector<point> tab_point,int* tab_color) /*Utilise Area sur tous les points) 
{
	for (int i=0, i<taille, i++)
	{
		Area(tab_point[i].x, tab_point[i].y, tab_color, R)
	}
}

/*****************************************************************/


void Area(int x, int y, tab_color, R); /*Met les points autour de (x,y) à 1*/
{
	tab_color[y][x] = 1;
	for (int i = 0, i<=R, i++)
	
}
