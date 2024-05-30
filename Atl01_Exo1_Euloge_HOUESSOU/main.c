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

    printf("Apres echange on n'as : \n");

    c=a;

    printf("a = %d\n", b);
    printf("b = %d\n", c);

    return 0;
}
