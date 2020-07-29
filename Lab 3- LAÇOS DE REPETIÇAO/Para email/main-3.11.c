#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, soma=0;
for (num=1; num<=1000; num++) {
if ((num % 3 == 0) || (num % 5 == 0)) {
soma += num;} else {}
}
printf("Soma de todos os numeros naturais abaixo de 1.000 que sao multiplos de 3 ou 5: %d\n", soma);
return 0;
}

