#include <stdio.h>
#include <stdlib.h>

int main()
{
float altura;
float imc;
int sexo;
    printf("\n 1: Homens \n 2: Mulheres \t\tQual seu sexo? ");
    scanf("%d", &sexo);
    printf ("\n (em metros)\t\tQual a sua altura?");
    scanf("%f", &altura);
    if (sexo == 1)
        imc = (72.7 * altura) - 58;
    else
    imc = (62.1 * altura) - 44,7;


    printf ("\a\n\t\t**Seu peso idel eh:  %f", imc);

    return 0;
}
