#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i, j, lA, cA, lB, cB, X;
printf("\n Informe a quantidade de linhas da matriz A : ");
scanf("%d",&lA);
printf("\n Informe a quantidade de colunas da matriz A : ");
scanf("%d",&cA);
printf("\n Informe a quantidade de linhas da matriz B : ");
scanf("%d",&lB);
printf("\n Informe a quantidade de colunas da matriz B : ");
scanf("%d",&cB);
float matrizA[lA][cA],matrizB[lB][cB],matrizC[lA][cB],Aux=0;
if(cA==lB)
{
for(i=0; i<lA; i++)
{
        for(j=0; j<cA; j++)
        {
        printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);
        scanf("%f", &matrizA[i][j]);
        }
        printf("\n");
        }
for(i=0; i<lB; i++)
{
        for(j=0; j<cB; j++)
        {
        printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);
        scanf("%f", &matrizB[i][j]);
        }
        printf("\n");
        }
printf("Matriz A \n\n");
for(i=0; i<lA; i++)
{
        for(j=0; j<cA; j++)
        {
        printf("%6.f", matrizA[i][j]);
        }
        printf("\n\n");
        }
printf("Matriz B \n\n");
for(i=0; i<lB; i++)
{
        for(j=0; j<cB; j++)
        {
        printf("%6.f", matrizB[i][j]);
        }
        printf("\n\n");
        }
for(i=0; i<lA; i++)
{
        for(j=0; j<cB; j++)
        {
                 matrizC[i][j]=0;
                 for(X=0; X<lB; X++)
                 {
                 Aux += matrizA[i][X] * matrizB[X][j];
                 }
                 matrizC[i][j]=Aux;
                 Aux=0;
                 }
                 }
                 printf("\n\n");
printf("Matriz Gerada da Multiplicação: A*B \n\n");
for(i=0; i<lA; i++)
{
        for(j=0; j<cB; j++)
        {
        printf("%6.f", matrizC[i][j]);
        }
        printf("\n\n");
        }
        printf("\n\n");
        }
else
{
printf("\n\n Nao ha como multiplicar as matrizes dadas \n");
}
system("pause");
return 0;
}
