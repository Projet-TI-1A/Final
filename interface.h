
#ifndef INTERFACE_H
#define INTERFACE_H
#include "toucher.h"

using namespace sf;
using namespace std;

void Grand_cercle(RenderWindow&);
void Position_ligne(int ,int, RenderWindow&);
void Dessine_point(int , int,RenderWindow&, int );
int cercle(int ,int ,int ,int ,int );
int zone(int ,int ,int ,int ,int , int );
int remplissage(int ,int ,int ,int ,int , int ,int*);
void Dessine_plus_points(vector<point>, vector<point>, int, int,  RenderWindow&,int );
void Dessine_erreur(int x, int y, RenderWindow& window, int R);

#endif
