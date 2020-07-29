#include <stdio.h>
#include <stdlib.h>
#define tamanho 20
int main()
{ int vetor1[tamanho], vetor2[tamanho], i, j;

    printf("Digite 20 valores para o primeiro vetor\n");

    for (i=0; i<20; i++){
        printf("\n\t>>> ");
        scanf("%d", &vetor1[i]);}
        for(j=19, i=0; j>=0;i++, j--){
                vetor2[j] = vetor1[i];}
    for (i=0, j=0; i<20; j++, i++)
        printf("\n\tVetor1: %d, Vetor2: %d", vetor1[i], vetor2[j]);

    system("\n\n\npause");
    return 0;
}
