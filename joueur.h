#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

struct joueur {
    char pseudo[25];
    int mise;
    int cagnottePersonnel;
    int meilleurCombinaison;
    int carteHaute;
    int etat; // Etat du joueur : 1 = Couche / 2 = Mise / 3 = En attente / 4 = ALLIN
    int dealer; // Oui -> 1 , NON = 0
}Joueur;

#endif // JOUEUR_H_INCLUDED
