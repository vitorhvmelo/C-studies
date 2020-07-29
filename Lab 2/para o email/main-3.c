#include <stdio.h>
#include <stdlib.h>

int main()
{   int mes;
    printf("\t\t\t<<<CALENDARIO MES>>>\n\n\n");
    printf("\t\tDigite um numero entre 1 e 12:\t");
    scanf("%d", &mes);
    printf("\n");
    switch (mes) {
        case 1: printf("O numero refere-se ao mes: JANEIRO\n");
                break;
        case 2: printf("O numero refere-se ao mes: FEVEREIRO\n");
                break;
        case 3: printf("O numero refere-se ao mes: MARCO\n");
                break;
        case 4: printf("O numero refere-se ao mes: ABRIL\n");
                break;
        case 5: printf("O numero refere-se ao mes: MAIO\n");
                break;
        case 6: printf("O numero refere-se ao mes: JUNHO\n");
                break;
        case 7: printf("O numero refere-se ao mes: JULHO\n");
                break;
        case 8: printf("O numero refere-se ao mes: AGOSTO\n");
                break;
        case 9: printf("O numero refere-se ao mes: SETEMBRO\n");
                break;
        case 10: printf("O numero refere-se ao mes: OUTUBRO\n");
                break;
        case 11: printf("O numero refere-se ao mes: NOVEMBRO\n");
                break;
        case 12: printf("O numero refere-se ao mes: DEZEMBRO\n");
                break;}
    system ("pause");
    return 0;
}
