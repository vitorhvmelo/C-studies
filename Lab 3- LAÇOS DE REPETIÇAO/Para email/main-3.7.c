#include <stdio.h>
#include <stdlib.h>

int main()
{

    int denominador, numerador;
    float soma;
    denominador = numerador = 1;
    soma = 0;

    while (denominador < 50) {



        soma = soma + numerador / denominador;

        denominador ++;
        numerador +=2;
         }

    printf("\n\n\t\t%f\n\n", soma);

    return 0;
}
