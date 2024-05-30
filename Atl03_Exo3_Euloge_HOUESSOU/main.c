#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exo 3 alt 2

    int i;
    int nb;

    printf("Quel est la taille de votre tableau: ");
    scanf("%d", &nb);

    float * tab = malloc(nb * sizeof(float));
    float * tab1 = malloc(nb * sizeof(float));
    float * sommetab = malloc(nb * sizeof(float));

    printf("Entrer les valeurs du premier tableau\n");

    for (i=0; i<nb; i++){
        printf("Entrer la valeur pour tab[%d] = ", i);
        scanf("%f", &tab[i]);
    }

    printf("Entrer les valeurs du second tableau\n");

    for (i=0; i<nb; i++){
        printf("Entrer la valeur pour tab1[%d] = ", i);
        scanf("%f", &tab1[i]);
    }

    for (i=0; i<nb; i++){
        sommetab[i] = tab[i] + tab1[i];


    }

    for (i=0; i<nb; i++){
        printf("sommetab[%d]= %.2f\n", i, sommetab[i]);
    }
    // Pour cet algo, il faut que le compilateur distinque les trois tableaux et de plus seul mot tab, tab1, et sommetab diffère donc peut importe i, j ,k si tab diffère alors tout diffère

    free(tab);
    free(tab1);
    free(sommetab);


    return 0;
}
