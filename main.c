#include <stdio.h>
#include  <string.h>
#include "calcule.h"

int main ()
{
  float f=0;
  float h=0;
  
  float taux_participant_electeur=0;
  
  TPHF( "utilisateur.txt",&f,&h);
  
  printf("le taux de participant des homme est %.3f \n",h);
  printf("le taux de participant des femme est %.3f \n",f);

  taux_participant_electeur=TPE("utilisateur.txt");
  printf("le taux de participant des electeur %.3f \n",taux_participant_electeur);
return 0;
}
