#include <stdio.h>
#include <stdlib.h>

int main()
{   int semana;
     printf("\t\t\t<<<CALENDARIO Semana>>>\n\n\n");
    printf("\t\tDigite um numero:\t");
    scanf("%d", &semana);

    switch (semana) {
    case 1: printf("O numero corresponde a: SEGUNDA\n");
            break;
    case 2: printf("O numero corresponde a: TERCA\n");
            break;
    case 3: printf("O numero corresponde a: QUARTA\n");
            break;
    case 4: printf("O numero corresponde a: QUINTA\n");
            break;
    case 5: printf("O numero corresponde a: SEXTA\n");
            break;
    case 6: printf("O numero corresponde a: SABADO\n");
            break;
    case 7: printf("O numero corresponde a: DOMINGO\n");
            break;
    default: printf("\n\aO numero deve estar entre 1 e 7\n");
    }

    return 0;
}
