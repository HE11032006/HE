#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    c = (a + b) / 2;

    printf("La demi-somme de %d et %d donne : %d\n", a, b, c);

    return 0;
}
