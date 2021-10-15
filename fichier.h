#ifndef PROJET_PATISSIER_FICHIER_H
#define PROJET_PATISSIER_FICHIER_H
typedef struct Element_str {
    char *donnee;
    struct Element_str *next;
}Element;
typedef struct Pile_gouts {
    Element*debut_pile;
    int taille_pile;
} Pile_gouts;
typedef struct File_Commandes{
    Element*debut_file;
    Element*fin_file;
    int taille_file;
}File_Commandes;
void initialiser_gouts (Pile_gouts *tas);
int ajouter_gouts (Pile_gouts *tas, char *donnee);
void afficher_gouts (Pile_gouts * tas);
void initialiser_commande(File_Commandes * suite);
int ajouter_commande(File_Commandes * suite, Element * courant, char *donnee);
void afficher_commande(File_Commandes *suite);
#endif