#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    c = a * b;

    printf("Le produit de %d et %d donne : %d\n", a, b, c);


    return 0;
}
