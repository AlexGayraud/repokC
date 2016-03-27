#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED

struct carte {
    int type; // 1 = Trefle / 2 = Pique / 3 = Carreau / 4 = Coeur
    int puissance; // Allant de 2 à 14
}Carte;

struct paquetDeCarte {
    Carte tabCarte[52];
}PaquetDeCarte;

#endif // CARTE_H_INCLUDED
