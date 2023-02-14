#include <stdio.h>
#include <stdlib.h>
#include "../header/exo2.h"

// Fonction principale de test.
void C_2() {
    PtrTableauDouble d1 = NULL;
    unsigned int t1 = 5;

    
    d1 = (TableauDouble*)malloc(sizeof(TableauDouble));

    PtrTableauDouble_construire(d1, t1);
    PtrTableauDouble_afficher(d1);
    PtrTableauDouble_modifier(d1, 2, 3.13589985);
    PtrTableauDouble_afficher(d1);
    printf("%5.10f\n", PtrTableauDouble_get(d1, 2));
    PtrTableauDouble_set(d1, 2, 62.1);
    PtrTableauDouble_afficher(d1);
    PtrTableauDouble_liberer(d1);

    //TableauDouble_afficher(d1); Tentative d'afficher le tableau après l'avoir libéré provoquerait une erreur (segmentation fault)
    free(d1);

    return;
}

void exo2(void) {
    C_2();
    return;
}
