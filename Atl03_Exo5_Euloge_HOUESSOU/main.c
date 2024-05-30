#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int nb;
    int imax;
    int max;



    printf("NB : La taille du tableau doit etre inferieur ou egale a 15\n\n");
    printf("Quel est la taille de votre tableau: ");
    scanf("%d", &nb);



    int * tab = malloc(nb * sizeof(int));

    printf("Entrer les valeurs du tableau\n");

    for (i=0; i<nb; i++){
        printf("Entrer la valeur pour tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
    max=tab[0];

    for (i=0; i<nb; i++){
        if (tab[i]>=max){
            max=tab[i];
            imax=i;
        }
    }
    printf("La plus grande valeur qui est %d est a la position %d.", max, imax);


    free(tab);
    return 0;
}
