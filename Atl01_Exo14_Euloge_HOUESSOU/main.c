#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;

    printf("Quel est votre note : ");
    scanf("%d", &note);

    if (note < 5)
        printf("T'es trop nul");

    else if (note < 10 && note >= 5)
        printf("T'es nul");

    else if (note < 15 && note >= 10)
        printf("T'es pas trop nul");

    else if (note < 20 && note >= 15)
        printf("T'es trop top");

    else if (note == 20)
        printf("T'es  un boss");

    return 0;
}


