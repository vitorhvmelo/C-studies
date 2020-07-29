#include <stdio.h>
#include <stdlib.h>


int transposta(int matriz[][3], int tamanho){
    int matrizT[3][2];
    int i, j;
    for (i=0; i<tamanho; i++)
        for(j=0; j<3; j++){
        matrizT[j][i] = matriz[i][j];
    }
    printf("Matriz Transposta: \n");
    for (j=0; j<3; j++){
        for(i=0; i<2; i++)
            printf("  %d  ", matrizT[j][i]);
        printf("\n");
    }
    return matrizT;



}
int main()
{   int i, j;
    int matriz[2][3] = {{1,2,3}, {4,5,6}};
    printf("Matriz original: \n");
    for (i=0; i<2; i++){
        for(j=0; j<3; j++)
              printf("  %d  ", matriz[i][j]);
        printf("\n");
    }
    transposta(matriz, 2);
    return 0;
}
