#ifndef CAGNOTTE_H_INCLUDED
#define CAGNOTTE_H_INCLUDED
#include "joueur.h"

struct cagnotte {
    int somme; //Somme de la cagnotte
    Joueur joueur; // Référence du joueur ayant provoqué l'ouverture de ce pot ALL_IN
}Cagnotte;

#endif // CAGNOTTE_H_INCLUDED
