#include <stdio.h>
#include <stdlib.h>

int main()
{   int x, n1, maior, menor;
    float media = 0;
    n1=0;
        while (n1<10){
            printf ("Digite um numero e aperte ENTER: ");
            scanf ("%d", &x);

                if (x>0){

                        if (n1 == 0){
                            maior = x;

                        } else {
                            if(x > maior)
                                maior = x;
                            }
                        if (n1 == 0){
                            menor = x;}
                            else{
                                if (x < menor)
                                    menor = x;
                            }


                    media = media + x;
                    n1++;}

                        else {
                            printf ("Vc digitou um numero negativo, digite somente numeros positivos e interios\n");}}

    media = media / n1;

    printf("\nA media dos numeros digitados eh: %f \n\n O maior numero eh %i\n\n O menor numero eh %i \n", media, maior, menor);
    system ("pause");
    return 0;
}
