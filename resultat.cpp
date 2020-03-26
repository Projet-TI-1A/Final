#include <iostream>
#include "resultat.h"
#include "toucher.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;


/********calcul le pourcentage d'impacts a l'interieur de la zone*********/

int erreuraire(int &erreurs, int &points)

		{return(points*100/float(points+erreurs));}
