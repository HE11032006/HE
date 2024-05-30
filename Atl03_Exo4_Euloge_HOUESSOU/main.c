#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exo 4 alt 2

    int p;
    int i;
    float tab[4] = {4,8,7,12};
    float tab1[2]= {3,6};
    int nb;
    int bn;
    float schtroumpf = 0;


    for (p=0; p<4; p++){
        for (i=0; i<2; i++){
            schtroumpf = schtroumpf + tab[p] * tab1[i];
        }

    }

    printf("Le schtroumpf de ses deux tableaux est : %.2f ", schtroumpf);

    return 0;
}
