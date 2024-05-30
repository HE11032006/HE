#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, MOY;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    MOY = (a + b + c) / 3;

    printf("Moyenne = %.2f\n", MOY);

    if (a<=b && b<=c ){
        printf("Ordre croissant : %f-%f-%f ", a, b, c);
    }
    else if (a<=c && c<=b ){
        printf("Ordre croissant : %f-%f-%f ", a, c, b);
    }
    else if (b<=a && a<=c ){
        printf("Ordre croissant : %f-%f-%f ", b, a, c);
    }
    else if (b<=c && c<=a ){
        printf("Ordre croissant : %f-%f-%f ", b, c, a);
    }
    else if (c<=a && a<=b){
        printf("Ordre croissant : %f-%f-%f ", c, a, b);
    }
    else if (c<=b && b<=a ){
        printf("Ordre croissant : %f-%f-%f ", c, b, a);
    }
    return 0;
}
