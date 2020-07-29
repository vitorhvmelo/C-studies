#include <stdio.h>
#include <stdlib.h>

int main()
{   int nun, qdd, numero, qddNegativo, somaPositivo;
    nun = qddNegativo = somaPositivo = 0;
    qdd = 10;
    printf("Digite 10 numeros, apertando ENTER entre eles;\n");
    while (nun<qdd){
        printf("\a\n\t\t>>> ");
        scanf("%i", &numero);

        if (numero < 0) qddNegativo++;
            else somaPositivo += numero;
        nun++;
    }
    printf("\n\tVoce digitou %i numeros negativos", qddNegativo);
    printf("\n\tA soma dos numeros positivos digitados eh: %i \n\n\n", somaPositivo);
    system("\n\npause");
    return 0;

}
