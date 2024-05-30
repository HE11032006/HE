#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;

  printf("Quel est ton age mon enfant : ");
  scanf("%d", &age);

  if (age == 6 || age == 7){
    printf("Poussin");
  }
  else if (age == 8 || age == 9){
    printf("Pupille");
  }
  else if (age == 10 || age == 11){
    printf("Minime");
  }
  else if (age > 12){
    printf ("Cadet");
  }

    return 0;
}
