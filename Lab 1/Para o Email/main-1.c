#include <stdio.h>
#include <stdlib.h>

int main() {
	float cat1, cat2;
	printf ("Calculadora de Hipotenusas, digite o tamanhos dos catetos do triangulo: \n");
	printf("Cateto1:");
	scanf ("%f", &cat1);
	printf("Cateto2:");
	scanf("%f",&cat2);
	float hip=sqrt(cat1 * cat1 + cat2 * cat2);
	printf("A hipotenusa vale:%f \n", hip);
	system("pause");
	return 0;
}
