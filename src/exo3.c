#include <stdio.h>
#include <stdlib.h>
#include "../header/exo3.h"

#include <stdio.h>
#include <string.h>

void creation_livre(struct Livre *livre, char* nom, char* auteur, char* maison_edition, char* code_barre) {
    livre->nom = malloc(strlen(nom) + 1);
    strcpy(livre->nom, nom);
    livre->auteur = malloc(strlen(auteur) + 1);
    strcpy(livre->auteur, auteur);
    livre->maison_edition = malloc(strlen(maison_edition) + 1);
    strcpy(livre->maison_edition, maison_edition);
    livre->code_barre = malloc(strlen(code_barre) + 1);
    strcpy(livre->code_barre, code_barre);
}


void modification_attribut(struct Livre *livre, char* attribut, char* nouvelle_valeur) {
    if (strcmp(attribut, "nom") == 0) {
        strcpy(livre->nom, nouvelle_valeur);
    } else if (strcmp(attribut, "auteur") == 0) {
        strcpy(livre->auteur, nouvelle_valeur);
    } else if (strcmp(attribut, "maison_edition") == 0) {
        strcpy(livre->maison_edition, nouvelle_valeur);
    } else if (strcmp(attribut, "code_barre") == 0) {
        strcpy(livre->code_barre, nouvelle_valeur);
    }
}

char *selection_attribut(struct Livre livre, char *attribut) {
  static char resultat[100];
  if (strcmp(attribut, "nom") == 0) {
    strcpy(resultat, livre.nom);
  } else if (strcmp(attribut, "auteur") == 0) {
    strcpy(resultat, livre.auteur);
  } else if (strcmp(attribut, "maison_edition") == 0) {
    strcpy(resultat, livre.maison_edition);
  } else if (strcmp(attribut, "code_barre") == 0) {
    strcpy(resultat, livre.code_barre);
  } else {
    strcpy(resultat, "Attribut non trouvé");
  }
  return resultat;
}


void affichage_informations(struct Livre livre) {
    printf("Nom: %s\nAuteur: %s\nMaison d'édition: %s\nCode barre: %s\n", livre.nom, livre.auteur, livre.maison_edition, livre.code_barre);
}

void exo3() {
    struct Livre livre;
  
    creation_livre(&livre, "Livre 1", "Auteur 1", "Maison d'édition 1", "Code barre 1");
    printf("Informations du livre avant modification:\n");
    affichage_informations(livre);
  
    modification_attribut(&livre, "nom", "Nouveau nom");
    modification_attribut(&livre, "maison_edition", "ESGI");
    printf("Informations du livre après modification:\n");
    affichage_informations(livre);

    char* nom = selection_attribut(livre, "nom");
    printf("Nom du livre: %s\n", nom);

    return;
}