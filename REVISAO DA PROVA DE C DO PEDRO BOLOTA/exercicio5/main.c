#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[15],media,aux;
    int y;
     for(y=0; y<15; y++){
        printf("Digite as notas do aluno \n");
        scanf("%f",&notas[y]);
        aux= aux+notas[y];
     }
        aux= aux/15;
        printf("O valor da media eh: ,%f",aux);



    return 0;
}
