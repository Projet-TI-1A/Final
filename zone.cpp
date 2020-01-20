#include <iostream>
/*#include "toucher.h"*/
/*#include "zone.h"*/

int cercle(int i,int j,int a,int b,int r);
int zone(int i,int j,int a,int b,int r, int e);

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
		error=0;
	}
else 
	{
		error=1;
	}
return error;
}
