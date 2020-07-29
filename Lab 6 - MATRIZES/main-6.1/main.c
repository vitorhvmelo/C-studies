#include <stdio.h>
#include <stdlib.h>

int main()
{   int linhas, colunas,i,j;
    printf("Linhas: "); scanf("%d", &linhas);
    printf("Colunas: "); scanf("%d", &colunas);
    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizC[linhas][colunas];

    for (i=0; i<linhas;i++)
        for (j=0; j<colunas; j++){
        printf("matrizA elemento: %d, %d >>> ",i,j);
        scanf("%d",&matrizA[i][j]);
        printf("matrizB elemento: %2d, %d >>> ", i,j);
        scanf("%d",&matrizB[i][j]);

        }
    for (i=0; i<linhas;i++){
        for (j=0; j<colunas; j++){
        matrizC [i][j]= matrizA[i][j]+matrizB[i][j];
        printf("  %.1d  ", matrizC[i][j]);
        }
        printf("\n");

    }

    system("pause");
    return 0;
}
