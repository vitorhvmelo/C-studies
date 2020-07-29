#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void ordem (int tamanho, int *vet, int *maior, int *menor){
  int i;
  *menor = INT_MAX;
  *maior = INT_MIN;
  for (i=0; i<tamanho; i++){
    if (vet[i] < *menor)
        *menor = vet[i];
    if (vet[i] > *maior)
        *maior = vet[i];
  }
}
int main()
{   int maior, menor;
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    ordem (10, vet, &maior, &menor);
    printf("O menor eh: %d e o maior: %d", menor, maior);

    return 0;
}
