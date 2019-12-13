#include <SFML/Graphics.hpp>
#include <iostream>
#include "toucher.h"
#include "interface.h"

using namespace std;
using namespace sf;


/********************************************************************************/

void temps_total(int t, RenderWindow& window)/*temps total de la simulation*/
      int h, m, s;
      h=t//3600;
      m=(t%3600)//60;
      s=(t%3600)%60;
      
      Font MyFont;
      if (!MyFont.LoadFromFile("arial.ttf", 50)) /*Police d'ecriture*/
      {
            // Erreur
      }
      score.setString("Temps total de l'opération : "s + std::to_string(h) "h " "s + std::to_string(m) "min " "s + std::to_string(s) "s ");

    

void temps_erreurs(int temps_exterieur , int perte__temps, RenderWindow& window) /*temps total de la simulation*/
{
     Font MyFont;
      if (!MyFont.LoadFromFile("arial.ttf", 50)) /*Police d'ecriture*/
      {
            // Erreur
      }
      score.setString("Temps de dissection a l'exterieur de la tumeur : "s + std::to_string(temps_erreur) );
      score.setString("perte de temps: "s + std::to_string(perte_temps) ); /*(bistouri éteint contact avec exterieur muqueuse*/

