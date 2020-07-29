#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, j, linha, matriz[5][4];
    printf("Escreva a sua matriz 5x4\n\n");
    for (i=0; i<5; i++)
        for(j=0; j<4; j++){
        printf("\t Elemento [%d] [%d] >>> ", i, j);
        scanf("%d", &matriz[i][j]);

    }
    printf("Qual linha vc deseja ler?");
    scanf ("%d", &linha);
    i=linha;
    for (j=0; j<4; j++){
        printf(" %.2d ", matriz[i][j]);
    }
    return 0;
}
