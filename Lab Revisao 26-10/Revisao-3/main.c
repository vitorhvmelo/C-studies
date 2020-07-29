#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3
int main()
{   //treinando matriz

    int matriz[lin][col], i, j;

    for (i=0; i < col; i++)
        for (j=0; j < lin; j++)
            scanf("%d", &matriz[i][j]);

    for (i=0; i < col; i++){
        for (j=0; j < lin; j++)
            printf (" %d ", matriz[i][j]);
    printf("\n");}

    return 0;
}
