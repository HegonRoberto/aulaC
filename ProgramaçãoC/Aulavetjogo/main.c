#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jogo[20];
   int palp[3];
   sortear(jogo,20);
   palpitar(palp,3);
   verificar(jogo,palp,20,3);
    printf("Hello world!\n");
    return 0;
}
