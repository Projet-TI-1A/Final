#ifndef TOUCHER_H
#define TOUCHER_H

using namespace std;
using namespace sf;

typedef struct
{
	int x;
	int y;
} point ;

void Position_Curseur(int*, int* , RenderWindow&);
void Ajoute_point(vector<point>,int*, RenderWindow&);
void Dessine_plus_points(vector<point>, int , RenderWindow&, int);

#endif
