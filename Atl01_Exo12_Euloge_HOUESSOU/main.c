#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1415926535897932384626433832795

int main()
{

    float R, Pe, Su;

    printf("Donner une valeur au rayon : ");
    scanf("%f", &R);

    Pe = 2 * Pi * R;
    Su = Pi * R * R;

    printf("Perimetre = %.2f\n", Pe);
    printf("Surface = %.2f\n", Su);


    return 0;
}
