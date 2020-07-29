#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{   int qdd, i, m, maior, posicao;
    m = INT_MIN;
    printf("\n\t Quantos valores vc deseja ler? >>> ");
    scanf("%d", &qdd);
    int vetor[qdd];
    printf("Digite os numeros:");
    for (i=0; i<qdd; i++){
       printf("\n\t>>> ");
       scanf("%d", &vetor[i]);
        if (vetor[i]>m) {
            posicao = i;
            m = vetor[i];}
    }
    printf("O maior numero digitado foi %d cuja posicao no vetor eh: %d", m, posicao);
    return 0;
}
