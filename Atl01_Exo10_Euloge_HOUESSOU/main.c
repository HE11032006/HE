#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int c = 0;
    int i;

    printf("Entrer un nombre : ");
    scanf("%d", &n);

    for (i = 0; i<=n; i++)
        c = c + i;

    printf("La somme donne %d.", c);


    return 0;
}
