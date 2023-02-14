#include <stdio.h>
#include <stdlib.h>
#include "../header/exo2.h"

// Fonction principale de test.
void C_2() {
    PtrTableauDouble d1 = NULL;
    unsigned int t1 = 5;

    // Allocation de mémoire pour la structure elle-même
    d1 = (TableauDouble*)malloc(sizeof(TableauDouble));

    // Allocation de mémoire pour le tableau de double
    PtrTableauDouble_construire(d1, t1);

    // Affichage du tableau de double
    PtrTableauDouble_afficher(d1);

    // Modification d'un élément du tableau
    PtrTableauDouble_modifier(d1, 2, 3.13589985);

    // Affichage du tableau de double après modification
    PtrTableauDouble_afficher(d1);

    // Affichage de la valeur d'un élément du tableau
    printf("%5.10f\n", PtrTableauDouble_get(d1, 2));

    // Modification d'un élément du tableau
    PtrTableauDouble_set(d1, 2, 62.1);

    // Affichage du tableau de double après modification
    PtrTableauDouble_afficher(d1);

    // Libération de la mémoire allouée pour le tableau de double
    PtrTableauDouble_liberer(d1);

    // Tentative d'afficher le tableau après l'avoir libéré provoquerait une erreur
    //TableauDouble_afficher(d1);

    // Libération de la mémoire allouée pour la structure elle-même
    free(d1);

    return;
}

void exo2(void) {
    C_2();
    return;
}
