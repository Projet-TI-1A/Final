#include <iostream>
#include "toucher.h"
#include "zone.h"


/******************************************************************/

int zone(int i,int j,int a,int b,int r, int e)
{
int l,L=480;
int error=0;

l=(i-a)*(i-a)+(j-b)*(j-b);

if ((i>=a+r-e) && (l<=r*r))
	{
		error=1;
	}
else 
	{
		error=0;
	}
return error;
}

/*****************************************************************/

int remplissage(int x,int y,int a,int b,int r, int e,int **resul)
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




