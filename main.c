#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"
int main(){
    Pile_gouts *tas;
    char *nom_pile;
    if ((tas = (Pile_gouts *) malloc (sizeof (Pile_gouts))) == NULL)
        return -1;
    if ((nom_pile = (char *) malloc (50 * sizeof (char))) == NULL)
        return -1;
    initialiser_gouts(tas);
    nom_pile="Myrtille";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Banane";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Pomme";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Abricot";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Fraise";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Vanille";
    ajouter_gouts(tas,nom_pile);
    nom_pile="Chocolat";
    ajouter_gouts(tas, nom_pile);
    afficher_gouts(tas);
    /* tas=Element_str *l_gouts ?*/
    File_Commandes *suite;
    char *nom_file;
    if ((suite = (File_Commandes *) malloc (sizeof (File_Commandes))) == NULL)
        return -1;
    if ((nom_file = (char *) malloc (50 * sizeof (char))) == NULL)
        return -1;
    initialiser_commande(suite);
        printf ("Entrez la commande : ");
        scanf ("%s", nom_file);
        ajouter_commande(suite, suite->fin_file, nom_file);
        afficher_commande(suite);
}