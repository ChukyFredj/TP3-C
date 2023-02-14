#ifndef EXO_1_H_INCLUDED
#define EXO_1_H_INCLUDED

/*
	* @brief Correction exo1.
*/

// Définition d'un alias PtrTableauDouble pour le type double*
typedef double* PtrTableauDouble;

// Alloue de la mémoire pour un tableau de double de taille donnée
void TableauDouble_construire(PtrTableauDouble* dd, const unsigned taille) {
    *dd = (double*) malloc(taille * sizeof(double)); // Alloue de la mémoire pour le tableau
}

// Affiche les éléments d'un tableau de double de taille donnée
void TableauDouble_afficher(const PtrTableauDouble dd, const unsigned taille) {
    for (unsigned i = 0; i < taille; i++) {
        printf("%5.10f ", dd[i]); // Affiche chaque élément du tableau
    }
    printf("\n");
}

// Modifie la valeur d'un élément d'un tableau de double de taille donnée
void TableauDouble_modifier(PtrTableauDouble const dd, const unsigned taille, const unsigned index, const double valeur) {
    if (index >= 0 && index < taille) {
        dd[index] = valeur; // Modifie la valeur de l'élément du tableau d'indice index
    }
}

// Libère la mémoire allouée pour un tableau de double
void TableauDouble_liberer(PtrTableauDouble dd) {
    free(dd); // Libère la mémoire allouée pour le tableau
}

// Retourne la valeur d'un élément d'un tableau de double de taille donnée
double TableauDouble_get(PtrTableauDouble dd, const unsigned taille, const unsigned index) {
    if (index >= 0 && index < taille) {
        return dd[index]; // Retourne la valeur de l'élément du tableau d'indice index
    } else {
        return 0.0; // Retourne 0 si l'indice est invalide
    }
}

// Modifie la valeur d'un élément d'un tableau de double de taille donnée
void TableauDouble_set(PtrTableauDouble dd, const unsigned taille, const unsigned index, double val) {
    if (index >= 0 && index < taille) {
        dd[index] = val; // Modifie la valeur de l'élément du tableau d'indice index
    }
}



void exo1();

#endif // EXO_1_H_INCLUDED