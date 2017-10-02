#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PI= 3.14;
    float Raio;
    float circulo;

    printf("Digite um valor para Raio\n");
    scanf("%f",&Raio);
    circulo= (Raio*Raio)*PI;
    printf("A area do circulo eh: %f\n",circulo);



    return 0;
}
   // programa que calcule e mostre a area de um circulo Area= PI * raio ao quadrado
