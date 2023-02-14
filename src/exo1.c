#include <stdio.h>
#include <stdlib.h>
#include "../header/exo1.h"

int C_1() {
    PtrTableauDouble d1 = NULL;
    unsigned t1 = 5;

    TableauDouble_construire(&d1, t1);
    TableauDouble_afficher(d1, t1);

    TableauDouble_modifier(d1, t1, 2, 3.13589985);
    TableauDouble_afficher(d1, t1);

    printf("%5.10f\n", TableauDouble_get(d1, t1, 2));
    TableauDouble_set(d1, t1, 2, 62.1);
    printf("%5.10f\n", TableauDouble_get(d1, t1, 2));

    TableauDouble_afficher(d1, t1);
    TableauDouble_liberer(d1);

    //TableauDouble_afficher(d1, t1); // This line causes a segmentation fault since d1 has been deleted.

    return 0;
}

void exo1() {
    C_1();
    return;
} 

