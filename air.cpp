#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "interface.h"
#include "toucher.h"
#include "zone.h"
#include <vector>
/*#define diametre 360*/
#define nbzone 5

using namespace std;
using namespace sf;


/*tableau aire de taille 360/5 x largeurecran */
/*pour calculer aire pas besoin de tableau juste besoin nombre pixels
  ds le tableau et enlever les pixels (i,j) qui sont pas ds cercle*/

int calculaire(int k,int largeur,int a,int b,int r, int R)
{
	int i,j=0,e,aire,z,f,x,l,diametre;
	diametre=2*r;
	e=k*(diametre/nbzone);
	f=(k-1)*(diametre/nbzone);
	aire=(diametre/nbzone)*largeur;
	z=a+r-e;
	i=z;
	x=a+r-f;
	while (i>=z && i<x)
	{ 	j=0;
		l=320;
		while(!zone(k,i,j,a,b,r,R,e))
		{	
			j+=1;
			aire=aire-1;
		}
		while (!zone(k,i,l,a,b,r,R,e))
		{
			l-=1;
			aire=aire-1;
		}
		i+=1;
	}	
	return aire;
}

/*int main()
{	int aire=0;
	
	aire=calculaire(2,320,240,160,300);
	printf("%i \n",aire);
	return 0;
}*/
