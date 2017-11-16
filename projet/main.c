#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.c"
#include "donnees.c"
#include "actions.c"

int main()
{
    int ligne = Charger_ligne(); //défini le nombre de ligne lu par le programme
    int temp[ligne];             //defini la taille des tableau par rapport au nombre de ligne
    int puls[ligne];             //defini la taille des tableau par rapport au nombre de ligne
    Memoire_donnees(ligne,puls,temp);   //stock les info dans les tableau
    Menu_utilisateur(valeurMenu,puls,temp,ligne);   //affiche le menu qui permet à l'utilisateur de séléctionner ceux qu'il veux

    return 0;
}
