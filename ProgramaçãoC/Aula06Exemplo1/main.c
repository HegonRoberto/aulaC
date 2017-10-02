#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51];
    printf("Digite um nome:\n");
    gets(nome);
    char sexo;
    printf("Digite m ou f para sexo: \n");
    sexo = getchar();
    int tamanho = strlen(nome);
    printf("nome digitado: %s \n",nome);
    printf("Sexo %c \n",sexo);
    printf("Qtd de letras %d \n" , tamanho);
    return 0;
}
