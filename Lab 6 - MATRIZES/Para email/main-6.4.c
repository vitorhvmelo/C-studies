#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tDigite sua matriz 8x8\n\n");
    int i, j, m[8][8], soma = 0;
    for (i=0; i<8; i++)
        for (j=0;j<8;j++){
        printf("Elemento [%d][%d] >>> ", i, j);
        scanf("%d", &m[i][j]);
    }
    for (j=0,i=0;j<8;j++,i++){
        soma += m[i][j];
    }

    printf("\nA soma da diagonal principal eh %d\n\n", soma);

    system("pause");
    return 0;
}
