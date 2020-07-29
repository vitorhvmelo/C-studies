#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tTamanho das Variaveis\n\n");
    printf("\tTamanho CHAR %d", sizeof(char));
    printf("\n\tTamanho INT %d", sizeof(int));
    printf("\n\tTamanho FLOAT %d", sizeof(float));
    printf("\n\tTamanho DOUBLE %d", sizeof(double));
    printf("\n\tTamanho LONG DOUBLE %d", sizeof(long double));

    printf("\n\n\t\tTamanho dos enderecos\n\n");
    printf("\tTamanho INT*: %d; INT**: %d; INT***: %d", sizeof(int*), sizeof(int**), sizeof(int***));
    printf("\n\tTamanho LONG*: %d; LONG**: %d; LONG***: %d", sizeof(long*), sizeof(long**), sizeof(long***));
    printf("\n\tTamanho DOUBLE*: %d; DOUBLE**: %d; DOUBLE***: %d", sizeof(double*), sizeof(double**), sizeof(double***));

    return 0;
}
