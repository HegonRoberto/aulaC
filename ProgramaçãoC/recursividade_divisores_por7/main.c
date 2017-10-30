#include <stdio.h>
#include <stdlib.h>


int somarrec(int n){
    if(n<1)return 0;
    if(n%7==0){
      return n +somarrec(n-7);

    }else{
    somarrec(n-1);
    }}

int main()
{


    printf("%d",somarrec(14));
    return 0;
}
