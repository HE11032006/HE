#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    if (n%2 == 0){
        printf("Le nombre %d est pair.\n", n);
    }
    else
        printf("Le nombre %d est impair.\n", n);


    return 0;
}
