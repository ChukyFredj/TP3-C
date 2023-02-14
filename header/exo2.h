#ifndef EX_2_H_INCLUDED
#define EX_2_H_INCLUDED

/*
	* @brief Correction exo2.
*/

// Définition d'une structure pour stocker le tableau de double et sa taille.
typedef struct {
    double* a_tab;          // Tableau de double
    unsigned int a_taille;  // Taille du tableau
} TableauDouble;

// Alias pour un pointeur vers une structure TableauDouble.
typedef TableauDouble* PtrTableauDouble;

// Alloue de la mémoire pour un tableau de double et initialise sa taille.
void PtrTableauDouble_construire(PtrTableauDouble dd, unsigned taille) {
    dd->a_tab = (double*)malloc(taille * sizeof(double)); // Allocation de mémoire
    dd->a_taille = taille;                                // Initialisation de la taille
}

// Affiche les éléments d'un tableau de double.
void PtrTableauDouble_afficher(const PtrTableauDouble dd) {
    for (unsigned i = 0; i < dd->a_taille; i++) {
        printf("%5.10f ", dd->a_tab[i]); // Affichage de chaque élément
    }
    printf("\n");
}

// Modifie un élément du tableau de double à un index donné.
void PtrTableauDouble_modifier(PtrTableauDouble const dd, const unsigned index, const double valeur) {
    if (index >= 0 && index < dd->a_taille) {  // Vérifie la validité de l'index
        dd->a_tab[index] = valeur;             // Modification de l'élément du tableau
    }
}

// Libère la mémoire allouée pour le tableau de double.
void PtrTableauDouble_liberer(PtrTableauDouble dd) {
    free(dd->a_tab);     // Libération de la mémoire
    dd->a_tab = NULL;    // Réinitialisation du pointeur pour éviter les erreurs
    dd->a_taille = 0;    // Réinitialisation de la taille pour éviter les erreurs
}

// Retourne la valeur d'un élément du tableau de double à un index donné.
double PtrTableauDouble_get(PtrTableauDouble dd, const unsigned index) {
    if (index >= 0 && index < dd->a_taille) {  // Vérifie la validité de l'index
        return dd->a_tab[index];               // Retourne l'élément du tableau
    } else {
        return 0.0;                            // Retourne 0.0 si l'index est invalide
    }
}

// Modifie la valeur d'un élément du tableau de double à un index donné.
void PtrTableauDouble_set(PtrTableauDouble dd, const unsigned index, double val) {
    if (index >= 0 && index < dd->a_taille) {  // Vérifie la validité de l'index
        dd->a_tab[index] = val;                // Modification de l'élément du tableau
    }
}

void C_2();

#endif // EX_2_H_INCLUDED