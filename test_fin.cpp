#include <iostream>
#include <ctime>
#include <time.h>
#include "test.h"

using namespace std;
 

int chrono(int fin,int temps_debut)
{
//temps en secondes
time_t temps_fin; 
time_t temps_operation;  
 
 

if (fin == 2)

{
  time(&temps_fin);
temps_operation = temps_fin-temps_debut;
}

return temps_operation;
}


/*int main()
{	time_t temps; int a;
	time(&temps); cout << temps;
	cout << chrono(1,temps);
	
	cin >> a;
	
	
	
	cout << chrono(2,temps);
	return 0;
}*/

/*int test_fin(bool fin,int temps_debut)
{
int test=0;

test=chrono(fin,temps_debut);

if (test =! 0)
{
cout << "Le temps total de l'opération est :" << test << endl;
}
return 0;
}*/
