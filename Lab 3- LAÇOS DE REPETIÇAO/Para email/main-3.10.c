#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,soma=0,n,divisor=0,resultado;
printf("digite um numero inteiro positivo: ");
scanf("%i", &n);
 if (n<=0) {
        printf("este numero nao eh positivo"); } else{

 for(i=1;i<n;i++) {
        divisor+=1;
        resultado= n % divisor;
        if(resultado==0) {
            soma = soma + i ;
            printf("%i eh um divisor de %i \n",divisor,n);
            printf("soma eh : %i \n", soma);
        } else {}

}
        }
}
