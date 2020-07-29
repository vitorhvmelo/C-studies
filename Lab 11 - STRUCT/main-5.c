#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    FILE *arq;
    int vet[N];
    arq = fopen("exemplo.bin","wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.");
        system("pause");
        exit(1);
    }
    int i;
    for(i = 0; i < N; i++){
        printf("Digite o %d numero: ", i+1);
        scanf(" %d", &vet[i]);
        fputc(vet[i],arq);
    }
    fclose(arq);
    arq = fopen("exemplo.bin","wb");
    int soma = 0;
    for(i = 0; i < N; i++){
        soma += vet[i];
    }
    printf("A soma eh %d.\n\n", soma);
    fputc(soma,arq);
    fclose(arq);
    system("pause");
    return 0;
}
