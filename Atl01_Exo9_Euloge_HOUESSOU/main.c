#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   printf("Tapez un nombre compris entre 10 et 20: ");
   scanf("%d", &a);

    do{
        if (a<=10){
            printf("Plus grand !\n");
        }
        else if (a>=20){
            printf("Plus petit !\n");
        }
        printf("Tapez un nombre compris entre 10 et 20: ");
        scanf("%d", &a);

   } while (a<10 || a>20);

   printf("Bravo !");


    return 0;
}
