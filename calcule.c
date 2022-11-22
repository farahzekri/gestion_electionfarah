#include "calcule.h"
#include <stdio.h>


void TPHF( char *filename, float *f, float *h)
{
     
    int nf=0;
    int nh =0;
    int nb_vote=0;
   
    user u;

    FILE *f1=fopen(filename, "r");
    if(f1!=NULL)
    {
        while(fscanf(f1," %s %s %s %s %d %d %d %s %s %s %s %s ",u.cin,u.nom,u.prenom,u.id_bureau,&u.dateN.jour,
                         &u.dateN.mois,&u.dateN.annee,u.email,u.tel,u.role,u.sexe,u.vote)!=EOF)
        {
          if((strcmp(u.role,"electeur"))==0)
          {
             nb_vote=nb_vote+1;
              if((strcmp(u.sexe,"h"))==0)
               {
               
                nh=nh+1;
               }
             
              else if ((strcmp(u.sexe,"f"))==0) 
              {
             
               nf=nf+1;
              }
          }
             
        }
     
      *f=(float)nf/nb_vote;
      *h=(float)nh/nb_vote;
      
      
    }
    fclose(f1);
}
float TPE(char *filename)
{
   int nb_electeur_vote=0;
   int nb_electeur=0;
   float tauxpele;
   user u;
   FILE *f1=fopen(filename,"r");
   if(f1!=NULL)
   {
    while(fscanf(f1," %s %s %s %s %d %d %d %s %s %s %s %s ",u.cin,u.nom,u.prenom,u.id_bureau,&u.dateN.jour,
                         &u.dateN.mois,&u.dateN.annee,u.email,u.tel,u.role,u.sexe,u.vote)!=EOF)
    {
          if((strcmp(u.role,"electeur"))==0)
          {
            nb_electeur=nb_electeur+1;
             if((strcmp(u.vote,"1"))==0)
              {
                nb_electeur_vote=nb_electeur_vote+1;
              }
          }

    }

   
   }
   tauxpele= (float)nb_electeur_vote/nb_electeur;
  fclose(f1);
return tauxpele;
}
