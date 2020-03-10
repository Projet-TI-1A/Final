#include <iostream>
#include <ctime>
#include "test_fin.h"

using namespace std;
 

int chrono(int fin,int temps_debut)
{
int temps_fin = 0; 
int temps_operation = 0;  
 
if (fin == 2)

{
temps_fin = clock();
temps_operation = temps_fin-temps_debut;
}

return temps_operation;
}


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
