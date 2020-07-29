#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int inteiro, enesimo, numero, anterior, anterior2;
        numero, anterior2 = 0;
        anterior = 1;
    printf("\n\t\aDigite um numero: ");
    scanf ("%d", &inteiro);
    printf("\n\n Esta eh a Sequencia de Fibocanacci ate o n termo que vc digitou: ");
    printf ("0, 1, ");

        for (enesimo = 0; enesimo != inteiro; enesimo++){

            numero = anterior + anterior2;
            printf ("%d, ", numero);
            anterior2 = anterior;
            anterior = numero;
            }

    printf("\n");

    system ("pause");

    return 0;
}
