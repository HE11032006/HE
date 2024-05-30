#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exo 6 alt 2

    int i;
    int nb;
    int n;

    do {
        printf("NB : La taille du tableau doit etre inferieur ou egale a 15\n\n");
        printf("Quel est la taille de votre tableau: ");
        scanf("%d", &nb);

    } while(nb>15);

    int tab[nb];

    printf("Entrer les valeurs du tableau\n");

    for (int i=0; i<nb; i++){
        printf("Entrer la valeur pour tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    for (i=0; i<(nb/2); i++){
        n=tab[i];
        tab[i]=tab[nb-i-1];
        tab[nb-i-1]=n;
    }

    for (i=0; i<nb; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
    }


    return 0;
}


