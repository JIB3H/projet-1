#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

char* fgets(char* chaine, int nbreDeCaracteresALire, FILE* pointeurSurFichier);
int Charger_ligne();
void Memoire_donnees(int ligne, int temp[], int puls[]);


#endif // DONNEES_H_INCLUDED
