#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int n;
    int nb;
    int max;
    int min;

    printf("Le nombre de terme : ");
    scanf("%d", &n);

    int * tab = malloc(n * sizeof(float));

    do {
        for (i=0; i<n+1; i++){
        printf("Entrer la valeur pour le premier terme %d = ", i);
        scanf("%f", &tab[i]);
    }while(tab[i]!=0);

    max=tab[0];

    for (i=0; i<n+1; i++){
        if (tab[i]>=max){
            max=tab[i];
        }
    }
    printf("\nLa plus grande valeur de la suite est : %d.\n\n", max);

    min = tab[0];
    for (i=0; i<n+1; i++){
        if (tab[i]<=min){
            min=tab[i];
        }
    }
    printf("La plus petite valeur de la suite est : %d.", min);

    free(tab);


    return 0;
}
