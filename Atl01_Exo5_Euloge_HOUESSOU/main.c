#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    printf("Le plus grand entier parmi %d, %d et %d est : ", a, b, c);

     if (a<=b && b<=c ){
        printf("%d", c);
     }
     else if (a<=c && c<=b ){
        printf("%d", b);
     }
     else if (b<=a && a<=c ){
        printf("%d", c);
     }
     else if (b<=c && c<=a ){
        printf("%d", a);
     }
     else if (c<=a && a<=b){
        printf("%d", b);
     }
     else if (c<=b && b<=a ){
        printf("%d", a);
     }
    return 0;
}
