#include <stdio.h>
#include <stdlib.h>
#define tamanho 20
int main()
{
    int vetor[tamanho] = {2,5,6,43,2,54,6,87,65,78,99,4,2,3,4,5,6,7,4,3}, i, j, x;


    printf("Vetor: ");
    for (i=0; i<tamanho; i++){
        printf(" %d ", vetor[i]);

    }printf("\n");
    for(i=0; i< tamanho; i++)
        for(j = i+1; j< tamanho; j++)
            if (vetor[i]>vetor[j]){
                x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j]= x;
            }
    printf("Ordenado: ");
    for (i=0; i<tamanho; i++){
        printf(" %d ", vetor[i]);
    }

    return 0;
}
