#include <stdio.h>
#include <stdlib.h>

    long int fatorial (int n){
        if (n==1)
            return 1;
        else
            return n * fatorial(n-1);
    }

    long int combinacao (int a, int b){
    long fatA = fatorial(a);
    long fatB = fatorial(b);
    long fatAB = fatorial(a-b);
    return fatA / (fatB * fatAB);


}
int main()
{   int elementos, elementoscjt;
    printf("Nro de elementos do conjunto: ");
    scanf("%d", &elementoscjt);
    printf("Nro de elemntos: ");
    scanf("%d", &elementos);

    printf("A conbinacao de %d com %d eh %d",
            elementoscjt, elementos, combinacao(elementoscjt, elementos));

    return 0;
}
