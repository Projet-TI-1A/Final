
#ifndef INTERFACE_H
#define INTERFACE_H
#include "toucher.h"

using namespace sf;
using namespace std;

void Grand_cercle(RenderWindow&);
void Position_ligne(int ,int, RenderWindow&);
void Dessine_point(point ,RenderWindow&, int );
void Dessine_plus_points(tabpoint, tabpoint, RenderWindow&,int );
void Dessine_restant(int k,int i, int y, int e, int r,int R, int xcentre, RenderWindow& window);
void Dessine_erreur(int x, int y, RenderWindow& window, int R);

#endif
