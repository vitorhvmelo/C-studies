#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int i, j, k, l, linhas, colunas, aux1, aux2, aux3;

    printf("Determine a ordem da Matriz A");
    printf("\n\tLinhas A: ");
    scanf("%d", &i);
    printf("\n\tColunas A: ");
    scanf("%d", &j);

    printf("Determine a ordem da Matriz B");
    printf("\n\tLinhas B: ");
    scanf("%d", &k);
    printf("\n\tColunas B: ");
    scanf("%d", &l);

    int mA [i][j], mB [k][l], mR[i][l];


    if (j == k){

        printf("\n\aDigite os elementos de A\n");
        for (linhas = 0; linhas<i; linhas++)
           for (colunas=0; colunas<j; colunas++){
            printf("Elemento [%d][%d]>>> ", linhas+1, colunas+1);
            scanf("%d", &mA[linhas][colunas]);}

        printf("\n\aDigite os elementos de B\n");
        for (linhas=0; linhas<k; linhas++)
            for (colunas=0; colunas<l; colunas++){
            printf("Elemento [%d][%d]>>> ", linhas+1, colunas+1);
            scanf("%d", &mB[linhas][colunas]);
            }

        for (aux1=0; aux1<i; aux1++)
            for(aux2=0; aux2 < l; aux2++){
                    mR [aux1][aux2]=0;
                for (aux3=0; aux3 < k; aux3++){
                    mR [aux1][aux2] = mR [aux1][aux2] + mA [aux1][aux3] * mB[aux3][aux2];
                    }}

         printf("\n\tMatriz A: \n");
        for (linhas = 0; linhas<i; linhas++){
           for (colunas=0; colunas<j; colunas++)
            printf(" %3.d ", mA[linhas][colunas]);
            printf("\n\n");}

         printf("\n\tMatriz B: \n");
        for (linhas = 0; linhas<k; linhas++){
           for (colunas=0; colunas<l; colunas++)
            printf(" %3.d ", mB[linhas][colunas]);
            printf("\n\n");}

        printf("\a\n\tMatriz Resultado: \n");
        for (linhas = 0; linhas<i; linhas++){
           for (colunas=0; colunas<l; colunas++)
            printf(" %3.d ", mR[linhas][colunas]);
            printf("\n\n");}



    }else
            printf("A sua matriz nao pode ser multiplicada");


    system("pause");
    return 0;
}
