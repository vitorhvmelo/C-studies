#include <stdio.h>
#include <stdlib.h>

float media (float *endereco, int tamanho){
    float soma = 0;
    int i;
    for (i = 0; i<tamanho; i++){
        soma += endereco[i];
    }
    return soma/tamanho;
}
int main()
{   float vet[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%f", media(vet, 10));

    return 0;
}
