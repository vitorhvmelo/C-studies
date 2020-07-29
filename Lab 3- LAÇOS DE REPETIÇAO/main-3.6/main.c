#include <stdio.h>
#include <stdlib.h>

int main()
{   int maior, quantidade, numeros, numero, qddmaior;
    numeros = numero = maior = 0;
    qddmaior = 1;
    printf("\nDigite quantos numeros voce deseja ler:  ");
    scanf("%d", &quantidade);
    printf("Agora digite os numeros desejados, apertando enter entre eles\n");

while (numeros < quantidade){
        printf("\t>>> ");
        scanf ("%d", &numero);
            if (numero > maior) maior = numero;
                else qddmaior++;

        numeros++;

    }

    printf("O maior numero eh: %d e foi digitado %d vezes\n\n\n", maior, qddmaior);
    system("pause");
    return 0;}
