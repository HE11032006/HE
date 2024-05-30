#include <stdio.h>
#include <stdlib.h>


int main() {

    //Exo 11 alt 2

    int i, nb;
    float som;

    do {
        printf("Entrer le nombre de termes harmoniques : ");
        scanf("%d", &nb);

        if (nb < 0)
            printf("Le nombre de termes harmoniques doit etre positif\n\n");

        } while (nb < 0);

    for(i=1; i<nb; i++){
        som = som + 1.0 / i;
    }

    printf("\nLa somme des %d premiers termes de la serie harmonique est : %f", nb, som);


    return 0;
}
