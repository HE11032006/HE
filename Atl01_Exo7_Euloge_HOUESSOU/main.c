#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Entrer deux nombres : \n");

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    c = a * b;

    if (c<0){
        printf("Le produit est negatif.");
    }
    else {
    printf("Le produit est positif.");
    }

    return 0;
}
