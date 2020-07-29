#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qdd, numero, pMenor, pMaior, maior, menor;
    numero =  maior = menor = 0;
    pMaior = pMenor = 0;
    printf("Escreva 10 numeros apertando ENTER entre eles\n");

    for (qdd = 1; qdd <= 10; qdd++){
        printf("\t\t>>> ");
        scanf("%i", &numero);

        if (qdd == 1){
            maior = numero;
            pMaior = qdd;
            menor = numero;
            pMaior = qdd;}
            else if (numero>maior){
                maior = numero;
                pMaior = qdd;
            }
        /*if (qdd == 1){
            menor = numero;
            pMaior = qdd;}
            else*/ if(numero<menor){
                menor = numero;
                pMenor = qdd;
            }


        }

    printf("\t\tA posiçao do maior eh: %i\n", pMaior);
    printf("\t\tA posiçao do menor eh: %i\n\n", pMenor);

    system("\n\npause");
    return 0;
}

