#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int qdd;
    printf("\n Quantos numeros vc deseja ler?: ");
    scanf("%d", &qdd);
    int vetor[qdd],soma = 0;
    float media,v,variacao = 0,desvio;

    for (int i = 0; i < qdd; i++) {
        printf("Valor %d >>> ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qdd; i++) {
        soma += vetor[i];
    }

    media = soma / (float) qdd;

    for (int i = 0; i < qdd; i++) {
        v = vetor[i] - media;
        variacao += v * v;
    }

    printf("\n\n");
    desvio = sqrt(variacao / qdd-1);
    printf("Desvio Padrao eh: d = %.2f\n\n", desvio);
    system("pause");
    return 0;
}
