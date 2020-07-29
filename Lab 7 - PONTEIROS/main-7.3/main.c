#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz [3][3];
    int i,j;

    for (i=0;i<3;i++)
        for(j=0;j<3;j++){
        printf("\n\n Endereco elemento [%d][%d] eh %d", i+1, j+1, &matriz[i][j]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
