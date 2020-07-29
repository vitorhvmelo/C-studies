#include <stdio.h>
#include <stdlib.h>

float valor(float valor, int *inteiro, float *decimal){
    *inteiro = (int)valor;
    *decimal = valor - *inteiro;
}


int main()
{   float n;
    int i;
    float d;
    printf("Digite um valor n: ");
    scanf("%f", &n);
    valor(n, &i, &d);
    printf("%f separado em %d e %f", n, i, d);

    return 0;
}
