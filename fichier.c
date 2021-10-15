#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fichier.h"
void initialiser_gouts (Pile_gouts * tas){
    tas->debut_pile = NULL;
    tas->taille_pile=0;
}
int ajouter_gouts (Pile_gouts * tas, char *donnee){
    Element *nouveau_element;
    if ((nouveau_element = (Element*) malloc (sizeof (Element))) == NULL)
        return -1;
    if ((nouveau_element->donnee = (char *) malloc (50 * sizeof (char)))
        == NULL)
        return -1;
    strcpy (nouveau_element->donnee, donnee);
    nouveau_element->next = tas->debut_pile;
    tas->debut_pile = nouveau_element;
    tas->taille_pile++;
}
void afficher_gouts (Pile_gouts * tas){
    Element*courant;
    int i;
    courant = tas->debut_pile;

    for(i=0;i<tas->taille_pile;++i){
        printf("\t\t%s\n", courant->donnee);
        courant = courant->next;
    }
}
void initialiser_commande(File_Commandes * suite){
    suite->debut_file = NULL;
    suite->fin_file = NULL;
    suite->taille_file = 0;
}
int ajouter_commande(File_Commandes * suite, Element * courant, char *donnee){
    Element *nouveau_element;
    if ((nouveau_element = (Element *) malloc (sizeof (Element))) == NULL)
        return -1;
    if ((nouveau_element->donnee = (char *) malloc (50 * sizeof (char)))
        == NULL)
        return -1;
    strcpy (nouveau_element->donnee, donnee);

    if(courant == NULL){
        if(suite->taille_file == 0)
            suite->fin_file = nouveau_element;
        nouveau_element->next = suite->debut_file;
        suite->debut_file = nouveau_element;
    }else {
        if(courant->next == NULL)
            suite->fin_file = nouveau_element;
        nouveau_element->next = courant->next;
        courant->next = nouveau_element;
    }
    suite->taille_file++;
    return 0;
}
void afficher_commande(File_Commandes *suite){
    Element *courant;
    int i;
    courant = suite->debut_file;

    for(i=0;i<suite->taille_file;++i){
        printf(" %s ", courant->donnee);
        courant = courant->next;
    }
}