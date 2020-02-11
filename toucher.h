#ifndef TOUCHER_H
#define TOUCHER_H
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class point
{
private :
	int x;
	int y;

public :
	point();
	point(int, int);
	void set(int, int );
	void get(int, int );
};

void Position_Curseur(int*, int* , RenderWindow&);
void Ajoute_point(vector<point>,int*, RenderWindow&);
void Dessine_plus_points(vector<point>, int , RenderWindow&, int);

#endif
