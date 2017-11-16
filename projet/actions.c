/**
obj:
function
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"
#define TRUE 1
#define FALSE 0

//Lorsque l'utilisateur a choisi la 1ère option dans le menu d'accueil
int option1(int temp[],int puls[],int ligne)
{
  int i;
    for(i=0;i<ligne;i++)
        {
            //Afficher les valeurs récuperé du fichier CSV
            printf(" %d %d\n",temp[i],puls[i]);
        }
        return 1;
}



//lorsque l'utilisateur a choisi la 2ème option dans le menu d'accueil
int option2(int temp[],int puls[], int ligne)
{
    int reponse = 0;
    printf("\n Voulez-vous trier pour le pouls dans l'ordre :\n (1) croissant \n (2) decroissant \n\n Voulez vous trier  pour le temps dans l'ordre :\n (3) croissant\n (4) decroissant \n\n Vous choisissez : ");
    scanf("%d",&reponse);

    int z = ligne;
    int i = 0 , x=0;
    int tmp = 0;
    int desordre = TRUE;

    //Fonction variant selon l'entrée de l'utilisateur
    switch (reponse)
    {
    case 1:

    while (desordre)
    {
        desordre = FALSE;

        //boucle mettant en place le tri à bulle
        for (i = 0; i < ligne-1; i++)
        {
            if(temp[i] > temp[i+1])
            {
                //Inverse les valeurs du temps et du pouls
                tmp = temp[i];
                temp[i] = temp[i+1];
                temp[i+1] = tmp;
                tmp = puls[i];
                puls[i] = puls[i+1];
                puls[i+1] = tmp;

                //Tant que desordre est égale à 1, la condition est vérifiée
                desordre = TRUE;

            }
        }
    }
    for(x=0;x<=z-1;x++)
    {
         printf("%d %d\n",temp[x],puls[x]);
    }
break;


    case 2:
    while (desordre)
    {
        desordre = FALSE;
        //boucle mettant en place le tri à bulle
        for (i = 0; i < ligne-1; i++)
        {
            if(temp[i] < temp[i+1])
            {

                //Inverse les valeurs du temps et du pouls
                tmp = temp[i];
                temp[i] = temp[i+1];
                temp[i+1] = tmp;
                tmp = puls[i];
                puls[i] = puls[i+1];
                puls[i+1] = tmp;


                //Tant que desordre est égale à 1, la condition est vérifiée
                desordre = TRUE;

            }
        }
    }
    for(x=0;x<=z-1;x++)
    {
         printf("%d %d\n",temp[x],puls[x]);
    }

    break ;

    case 3:
    for(i=0;i<ligne;i++)
        {
            printf("%d %d\n",temp[i],puls[i]);
        }
        break;

case 4:
    while (desordre)
    {
        desordre = FALSE;
        //boucle mettant en place le tri à bulle
        for (i = 0; i < ligne-1; i++)
        {
            if(puls[i] < puls[i+1])
            {
                //Inverse les valeurs du temps et du pouls
                tmp = puls[i];
                puls[i] = puls[i+1];
                puls[i+1] = tmp;
                tmp = temp[i];
                temp[i] = temp[i+1];
                temp[i+1] = tmp;

                desordre = TRUE;

            }
        }
    }
    for(x=0;x<=z-1;x++)
    {
         printf("%d %d\n",temp[x],puls[x]);
    }
    break ;

        default:
            return 0;
            break;
}
}


    //lorsque l'utilisateur a choisi la 3ème option dans le menu d'accueil
int option3(int temp[],int puls[],int ligne)
{
    int T = -1,i,c;
    printf("\nchoisir l'instant T ou vous voulez voir le rythme caridaque en temp\n");
    scanf("%d",&c);
    printf("\nles temp pour a linstant T choisi est de : %d",temp[T+c]);
    return puls[T];

}

//lorsque l'utilisateur a choisi la 4ème option dans le menu d'accueil
int option4(int temp[],int puls[],int ligne)
{
    float v1,v2;
    printf("\n\nChoisier entre combien et combien vous voulez calculer la moyenne??\npremier nombre  : ");
    scanf("%fl", &v1);
    printf("\ndeuxieme nombre  : ");
    scanf("%fl", &v2);
    float j = 0,n=0;
        int i;
        for(i=v1;i<=v2;i++)
            {
                n += puls[i];
            }
        j= n/(v2-v1+1);
        printf("%fl",j);
        return j;
}

//lorsque l'utilisateur a choisi la 5ème option dans le menu d'accueil
int option5(int ligne)
{
    printf("il y a actuellement %d valeur enregistees",ligne);

    return 1;
}

//lorsque l'utilisateur a choisi la 6ème option dans le menu d'accueil
int option6(int temp[],int puls[],int ligne)
{
    int max = 0;
    int min = 300;
    int mintps = 30000;
    int maxtps = 0;
    int i;
    for (i = 0; i < ligne; i++)
    {
        if (temp[i] < min)
        {
            //calcule le minimum
            min = temp[i];
            mintps = puls[i];
        }
        if (temp[i] > max)
        {
            //calcule le maximum
            max = temp[i];
            maxtps = puls[i];
        }
    }
printf(" le maximum est %d pour un puls de %d et le minimum est %d pour un puls de %d\n\n", max, maxtps, min, mintps);

    return 1;
}
