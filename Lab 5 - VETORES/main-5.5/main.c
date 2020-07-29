#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qdd, i;
    printf("\n Quantos elementos vc deseja ler?: ");
    scanf("%d", &qdd);
    float soma = 0, vetor[qdd];
    for(i = 1; i <= qdd; i++){
        printf("Valor %d: ", i);
        scanf(" %f", &vetor[i]);
    }
    for(i = 1; i <= qdd; i++){
        if(vetor[i] != 0){
            soma += (i / vetor[i]);
        }
    }
    printf("\n Soma = %f \n\n", soma);

    return 0;
}
