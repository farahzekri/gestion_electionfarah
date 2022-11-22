#ifndef CALCULE_H_INCLUDED
#define CALCULE_H_INCLUDED
#include <stdio.h>
#include  <string.h>
typedef struct 
{
  int jour;
  int mois;
  int annee;
}date1;

typedef struct 
{
  char cin[20];
  char nom[20];
  char prenom[20];
  char id_bureau[20];
  date1 dateN;
  char email[50];
  char tel[20];
  char role[20];
  char sexe[20];
  char  vote[3];
}user;
void TPHF( char *filename, float *f, float *h);
float TPE(char *filename);
#endif
