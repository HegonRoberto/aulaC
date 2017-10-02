#include <stdio.h>
#include <stdlib.h>

int main()
{   float Pes,Polegadas,Jardas,Milhas;

      printf(" Digite o valor do Pes\n");
      scanf("%f",&Pes);
        Polegadas = Pes*12;
        Jardas = Pes/3;
        Milhas = Jardas/1760;

   printf("polegas : %f\njardas : %f\nmilhas : %f\n",Polegadas,Jardas,Milhas);
    return 0;
}
