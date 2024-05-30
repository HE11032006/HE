#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int nb;
    int max;


    do {
            printf("NB : Le nombren'étudiant doit etre inferieur ou egale a 25\n\n");
            printf("Nombre d'etudiant: ");
            scanf("%d", &nb);

    }while (nb>25);


    int * tab = malloc(nb * sizeof(int));

    printf("Entrer les valeurs du tableau\n");

    for (i=0; i<nb; i++){
        printf("Moyenne de l'etudiant %d = ", i);
        scanf("%d", &tab[i]);
    }
    max=tab[0];

    for (i=0; i<nb; i++){
        if (tab[i]>=max){
            max=tab[i];
        }
    }
    printf("La plus grande moyenne est %d.", max);

    free(tab);
    return 0;
}
