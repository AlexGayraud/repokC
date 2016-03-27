#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

#include "cagnotte.h"
#include "carte.h"
#include "joueur.h"
#include "partie.h"

struct table {
    int typeJeu; // Variable désignant le type de poker
    int nbJoueur; //Nombre de joueurs dans la table
    int numTable;
    Cagnotte tabCagnotte[8]; //Tableau contenant les différents pots
    Joueur * tabJoueur[8];
    Carte defausse[5];
    Carte centrale[5];
    int nbrRelance;
    Partie * adrPartie; //Adresse de la partie
}Table;


int getDealer(Joueur * tabJoueur[],int nbJoueur);
int joueurSuivantDebout(Joueur * tabJoueur[],int nbJoueur);

#endif // TABLE_H_INCLUDED
