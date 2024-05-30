 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float seuil;
    int nb;
    int c=0;

    do {
        printf("NB : La taille du tableau doit etre inferieur ou egale a 45\n\n");
        printf("Quel est la taille de votre tableau: ");
        scanf("%d", &nb);

    } while(nb>45);

    float *tab= malloc(nb * sizeof(float));

    for (i=0; i<nb; i++){
        printf("Entrer la valeur pour tab[%d] = ", i);
        scanf("%f", &tab[i]);
    }

    printf("Donner un seuil de superiorite : ");
    scanf("%f", &seuil);


    for (i=0; i<nb; i++){
        if (tab[i] >= seuil)
            c = c + 1;
    }
    printf("...........\n\n");
    printf("le nombre de valeurs superieures ou égales au seuil choisi est: %d ", c);

    free(tab);

    return 0;
}
