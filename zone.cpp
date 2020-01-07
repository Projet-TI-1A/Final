#include <iostream>
/*#include "toucher.h"*/
/*#include "zone.h"*/

using namespace std;

int cercle(int i,int j,int a,int b,int r);
int zone(int i,int j,int a,int b,int r, int e);
int remplissage(int i,int j,int a,int b,int r, int e,int *resul);


int remplissage(int x,int y,int a,int b,int r, int e,int *resul)
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




int cercle(int i,int j,int a,int b,int r)
{
int verif=0;

if (((i-a)^2+(j-b)^2)<=r^2)
	{
		verif=1;
	}
return verif;
}




int zone(int i,int j,int a,int b,int r, int e)
{
int l=320,L=480;
int verif_cercle=0;
int error=0;

verif_cercle=cercle(i,j,a,b,r);

if (i>=a+r-e and verif_cercle==1)
	{
		error=1;
	}
else 
	{
		error=0;
	}
return error;
}


