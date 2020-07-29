#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, i, j;
    do {
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
    }while (n<=0);

    int **matriz = (int**) malloc(n*sizeof(int**)); //Alocando linhas

    for (i=0; i<n; i++)
        matriz[i] = (int*) malloc(n*sizeof(int));//Alocando colunas

    for (i=0; i<n; i++)
        for(j=0; j<n; j++)
            if (i==j)
                matriz[i][j] = 1;
                else matriz[i][j] = 0;

    for (i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf(" %d ", matriz[i][j]);
        printf("\n" );
    }

    system ("pause");
    return 0;
}
