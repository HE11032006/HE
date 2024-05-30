#include <stdio.h>
#include <stdlib.h>

int main()
{


    int nb;

    printf("Quel est la taille de votre tableau: ");
    scanf("%d", &nb);


    float tab1[nb];
    float tab2[nb];

    printf("\n\nEntrer les valeurs du premier tableau: ");

    for (int i=0; i<nb; i++){
        printf("\nEntrer la valeur pour tab1[%d] = ", i);
        scanf("%f", &tab1[i]);
    }

    printf("\nEntrer les valeurs du second tableau");

    for (int j=0; j<nb; j++){
        printf("\nEntrer la valeur pour tab2[%d] = ", j);
        scanf("%f", &tab2[j]);
    }
    int count;

    for (int i=0; i<nb; i++){
        for (int j=i; j<nb; j++){
            if (tab1[i]==tab2[j]){
                count++;
                printf("\nOn retrouve %.2f %d fois", tab1[i], count);

            }

        }


    }










    return 0;
}
