#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,divisor,resultado;
    divisor=0;
   printf("Digite um numero positivo: ");
   scanf("%i",&n);
   if (n<=0) {
        printf("este numero nao eh positivo"); } else{
    for(i=1;i<=n;i++) {
        divisor+=1;
        resultado= n % divisor;
        if(resultado==0) {
            printf("%i eh um divisor de %i \n",divisor,n);
        } else {}

    }
 }    return 0;
}
