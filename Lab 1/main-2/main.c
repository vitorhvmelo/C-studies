#include <stdio.h>
#include <stdlib.h>

int main()
{ float c, f, k;
    printf("Insira o valor em Celsius:");
    scanf("%f", &c);
    f = 9*c/5 + 32;
    k= c+273.15;
    printf("f=%f, k=%f" ,f ,k);
    return 0;
}
