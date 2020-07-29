#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, l, linhas, colunas, aux1, aux2, aux3;
    int i,j;

    printf("\aMatriz A: \n");
    int **mA = (int**) malloc (2*sizeof(int*)); // A: criando linhas

    for (i=0; i < 2; i++){
        mA[i]= (int*) malloc(3*sizeof(int)); //A: criando coluna
    }
    for (i=0; i < 2; i++)  // A: lendo
        for(j=0; j < 3; j++){
            printf("Matriz A[%d][%d]:", i+1,j+1);
            scanf("%d", &mA[i][j]);
        }


    printf("\n\aMatriz B: \n");
    int **mB = (int**) malloc (3*sizeof(int*));// B: criando linhas

    for (i=0; i < 3; i++)
        mB[i]= (int*) malloc(4*sizeof(int)); //B: criando colunas

    for (i=0; i < 3; i++)  // B: lendo
        for(j=0; j < 4; j++){
            printf("Matriz[%d][%d]:", i+1,j+1);
            scanf("%d", &mB[i][j]);
        }


    int **mR = (int*) malloc(2*sizeof(int*));// R: criando linhas
    for (i=0; i<2; i++)
        mR[i] = (int) malloc(4*sizeof(int));// R; criando colunas

    for (aux1=0; aux1<2; aux1++)
        for(aux2=0; aux2 < 4; aux2++){
            mR [aux1][aux2]=0;
            for (aux3=0; aux3 < 3; aux3++){
                mR [aux1][aux2] = mR [aux1][aux2] + mA [aux1][aux3] * mB[aux3][aux2];
            }
        }

    printf("\n\tMatriz A: \n");
    for (linhas = 0; linhas<2; linhas++){
        for (colunas=0; colunas<3; colunas++)
            printf(" %3.d ", mA[linhas][colunas]);
        printf("\n\n");
    }

    printf("\n\tMatriz B: \n");
    for (linhas = 0; linhas<3; linhas++){
        for (colunas=0; colunas<4; colunas++)
            printf(" %3.d ", mB[linhas][colunas]);
        printf("\n\n");
    }

    printf("\a\n\tMatriz Resultado: \n");
    for (linhas = 0; linhas<2; linhas++){
        for (colunas=0; colunas<4; colunas++)
            printf(" %3.d ", mR[linhas][colunas]);
        printf("\n\n");
    }

    system("pause");
    return 0;
}
