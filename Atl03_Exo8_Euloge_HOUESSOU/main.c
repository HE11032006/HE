#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nb;
    float n;


    do {
        printf("\nNB : La taille du tableau doit etre inferieur ou egale a 30\n\n");
        printf("Quel est la taille de votre tableau: ");
        scanf("%d", &nb);

    } while(nb>30);


    float tab[nb];

    printf("Entrer les valeurs du tableau\n");

    for (int i=0; i<nb; i++){
        printf("Entrer la valeur pour tab[%d] = ", i);
        scanf("%f", &tab[i]);
    }

    for ( int i=0; i<nb; i++){
            for (int j=i; j<nb; j++){
                if (tab[i]<=tab[j]){
                    n=tab[i];
                    tab[i]=tab[j];
                    tab[j]=n;
                }

            }

    }

    for ( int i=0; i<nb; i++){
        printf("\ntab[%d] = %.2f\n", i, tab[i]);
    }



    return 0;
}
