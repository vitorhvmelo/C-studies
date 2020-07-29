#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{   int n, fatorial, denominador, j;
    float soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n<0){
        printf("Digite um numero positivo:");
       }

    if (n>0){  for ( denominador = j = 1; j <= n; j++ ){

            denominador = denominador * j;
            soma = (soma + 1/ (float)denominador);
        }
    }
    printf("%f", soma);

    return 0;
}



    /*t i, j, i_fatorial, N;
    scanf(" %d", &N);
    float E = 0;
    for (i = 1; i <= N; i++) {
        i_fatorial = 1;
        for (j = 1; j <= i; j++)
            i_fatorial = i_fatorial * j;
        E = E + 1 / (float)i_fatorial;
    printf("\n %f", E);*/

