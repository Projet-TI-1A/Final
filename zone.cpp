#include <iostream>
#include "toucher.h"
#include "zone.h"


/******************************************************************/
/*verifie que le point (x,y) dans la kè zone*/
int zone(int k,int x,int y,int a,int b,int r,int R, int e)
{
	//attention penser aux effets de bords erreurs de segmentation
	//k va de 0 à 4
	int l, error=0;
	l=(a-x)*(a-x)+(b-y)*(b-y);
	
	if ( (x>=a+r-(k+1)*e) && (x<=a+r-k*e) && (l<=r*r) )
	/*if (  (x>=180) && (x<310) && (l<=r*r) )*/
		{
			error=1;
		}
	else 
		{
			error=0;
		}
	return error;
}

/******************************************************************/
/*ajoutes un 1 dans la case (x,y) et alentours du tableau de la taille de la kè zone */
int remplissage(int k,int x,int y,int xa,int r,int R, int e,int &aire, int **resul)
{
int i=0,j=0;
int xp=x-(xa+r-e*(k+1)); //initialisation de x par rapport au tableau
if (resul[y][xp]!=1)
	{
	for (j=y-R+1;j<y+R-1;j++)
		{ for(i=xp-R+1;i<xp+R-1;i++)
			{
				resul[j][i]=1;
					
			}
		}
	aire+=R*R;
	resul[y][xp]=1;
	}
return 0;
}


/*******************************************************************/
/*verifie que la zone est coloriée à 95% ou 80% pour fair apparaitre les pixel isolés en coloré*/

int aire_completee(int aire,int airetotale, int condition80, int condition95)

{
	int pourcentage=(aire/airetotale)*100;
	
	if (pourcentage>condition95) {return 2;}
	else if (pourcentage>condition80) {return 1;}
	else {return 0;}
}


