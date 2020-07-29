#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c,delta;
    float raiz1, raiz2;
    printf("\t\t<<<<<<Calculadora Quadratica>>>>>>>>\n");
    printf("Insira os coeficientes de sua eq. do segundo grau, em ordem,\nseparadas por virgula:\t");
    scanf ("%d, %d, %d", &a, &b, &c);
        if (a==0)
            printf("\a\tNao é eq do segundo grau\n");


        else {
            delta = b*b - 4*a*c;
            raiz1 = (-b + sqrt (delta))/2*a;
            raiz2 = (-b - sqrt (delta))/2*a;
            printf("\n\tDelta = %d", delta);
            if (delta > 0) printf("\t Portanto-->Duas raizes\n\n");
            if (delta == 0) printf("\t Portanto-->Raiz unica\n\n");
            if (delta < 0) printf("\t Portanto-->Nenhuma raiz real\n\n");
            if (delta>0 || delta ==0){printf("\tAs suas raizes sao: %f e %f\n\n\n\n\n", raiz1, raiz2);}


            }


    return 0;
}
