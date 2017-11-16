#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"

// Ce code s'occupe uniquement du menu d'accueil

int Menu_utilisateur(int valeurMenu,int puls[],int temp[],int ligne)
{
    printf("-------*Menu de l electrocardiometre*-------\n\n\n Souhaitez vous :\n\n 1) Afficher les donnees dans l ordre du fichier .csv \n 2) Afficher les donnees en ordre croissant/decroissant \n 3) Rechercher et afficher les donnes pour un temps particulier \n 4) Afficher la moyenne de pouls dans une plage de temps donnee \n 5) Afficher le nombre de lignes de donnees actuellement en memoire \n 6) Rechercher et afficher les maximums/minimum de pouls \n 7) Quitter le programme \n\n Vous choisissez : ");
    scanf("%d",&valeurMenu);

    //Fonction renvoyant sur une option diffèrente selon la réponse de l'utilisateur
    switch (valeurMenu)
    {
        case 1:
            option1(temp,puls,ligne);
            break;

        case 2:
            option2(temp,puls,ligne);
            break;
        case 3:
            option3(temp,puls,ligne);
            break;

        case 4:
            option4(temp,puls,ligne);
            break;

        case 5:
            option5(ligne);
            break;

        case 6:
            option6(temp,puls,ligne);
            break;

        case 7:
            printf(" Aurevoir et à bientôt ! ");
            return 0;
            break;

        default:
            return 0;
            break;

    }return valeurMenu;
};

