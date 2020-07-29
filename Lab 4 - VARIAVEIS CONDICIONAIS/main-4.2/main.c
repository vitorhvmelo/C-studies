#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qdd, nun, naturais;
    naturais = nun = 0;

    printf("\nQuantos numeros vc deseja ler?(Digite um numero impar)");
    scanf ("%d", &qdd);

    while (qdd%2 == 0){
        printf("\n\a\a\aAnimal, Voce digitou um numero par\n");
        printf("\nDessa vez, digite digite um numero impar:");
        scanf ("%i", &qdd);}

        printf("Agr digite os numeros desejados apertando ENTER entre eles\n");
    while (nun<qdd){
        printf("\n\t\t>>> ");
        scanf("%i", &naturais);


        if (naturais %2 != 0) printf("\t\tO numero digitado eh impar");
                else printf("\t\tO numero digitado eh par");

        nun++;
    }
    system("\n\npause");
    return 0;
}
