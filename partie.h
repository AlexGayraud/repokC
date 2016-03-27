#ifndef PARTIE_H_INCLUDED
#define PARTIE_H_INCLUDED

#include "table.h"

struct partie {
    int nbrJoueur; // Nombre de joueur au total
    int nbrJoueurParTable;
    int typeJeu;
    Table * tabTable[];
    int cagnotteBase;
    int bigBlind;
    int smallBlind;

}Partie;

#endif // PARTIE_H_INCLUDED
