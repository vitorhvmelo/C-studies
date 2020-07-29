#include <stdio.h>
#include <stdlib.h>
int main() {
int a, b;
printf("Entre com um numero inteiro: ");
scanf("%d",&a);
printf("Entre com outro numero inteiro: ");
scanf("%d",&b);
if (a < b)
printf("Em ordem: %d e %d \n", a, b);
else
printf("Em ordem: %d e %d \n", b, a);
return 0;
}
8
