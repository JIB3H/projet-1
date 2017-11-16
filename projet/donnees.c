#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 1000
#include "donnees.h"


//Déclaration de la fonction permettant de lire le fichier généré par le code Processing
int Charger_ligne()
{
    int nligne = 0;
    FILE* fichier = NULL;
    //création du tableau de caractère
    char chaine[TAILLE_MAX] = "";
    //Lecture du fichier Battements.csv
    fichier = fopen("Battements.csv", "r");
    //Charge le nombres de lignes
    if (fichier != NULL)
    {
      while (fgets(chaine,TAILLE_MAX,fichier) != NULL)
      {
        nligne ++;
      }

    }else {
        printf("Erreur fichier introuvable");
}

fclose(fichier);
return nligne;

}

//Fonction mettant en mémoire les données du fichier Battement.csv
void Memoire_donnees(int ligne,int temp[],int puls[])
{
    int i = 0;
    FILE* fichier = NULL;
    //Lecture du fichier Battements.csv
    fichier = fopen("Battements.csv", "r");
    //Mets en mémoire les éléments du fichier
    if (fichier != NULL)
    {
      while (i <= ligne)
      {
            fscanf(fichier,"%d;%d",&puls[i],&temp[i]);
            i++;
      }

    } else  {
        printf("Erreur fichier introuvable");
            }
//ferme le fichier Battements.csv
fclose(fichier);
}
