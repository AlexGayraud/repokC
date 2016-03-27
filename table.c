#include <stdio.h>
#include <stdlib.h>
#include "table.h"

int getDealer(Joueur * tabJoueur[], int nbJoueur)
{
    int haveDealer = 0;
    int numJoueur;
    int indiceAncienDealer;
    int indiceNewDealer;
    int carteHaute = 0;

    for(numJoueur = 0; numJoueur < nbJoueur-1; numJoueur++)
    {
        if(tabJoueur[numJoueur]->dealer == 1)
        {
            indiceAncienDealer = numJoueur;
            haveDealer = 1;
            tabJoueur[numJoueur]->dealer = 0;
            //A dev
            indiceNewDealer = JoueurSuivantDebout(tabJoueur,indiceAncienDealer);
            //return indiceNewDealer;
        }
    }
    if(haveDealer == 0)
    {
        for(numJoueur = 0; numJoueur < nbJoueur-1; numJoueur++)
        {
            distribuerCarte(tabJoueur[numJoueur]);
        }
        for(numJoueur = 0; numJoueur < nbJoueur-1; numJoueur++)
        {
            indiceNewDealer = 0;
            carteHaute = 0;
            if(tabJoueur[numJoueur]->carte[0].puissance > carteHaute)
            {
                indiceNewDealer = numJoueur;
            }
        }
        //return indiceNewDealer;
    }
    return indiceNewDealer
}

int joueurSuivantDebout(Joueur * tabJoueur[],int nbJoueur, int idJoueurActuel)
{
    //Indice du prochain joueur debout
    int indiceJoueurSuivant = 0;
    //Booleen afin de savoir si on a trouve le joueur ou non
    int joueurTrouve = 0;
    int cpt = 1;
    int id;
    do while(joueurTrouve == 0 && cpt <= nbJoueur+1)
    {
        id = (cpt+idJoueurActuel)%nbJoueur;
        // On regarde si il est debout
        if(tabJoueur[id]->etat == 3)
        {
            indiceJoueurSuivant = id;
            joueurTrouve = 1;
        }
        cpt++;
    }
    return indiceJoueurSuivant;
}
