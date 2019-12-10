#ifndef TOUCHER_H
#define TOUCHER_H

using namespace std;
using namespace sf;

struct point
{
	int x;
	int y;
};

void Position_Curseur(int*, int* , RenderWindow&);
void Ajoute_point(vector<point>,int*, RenderWindow&);
void Dessine_plus_points(vector<point>, int , RenderWindow&);

#endif
