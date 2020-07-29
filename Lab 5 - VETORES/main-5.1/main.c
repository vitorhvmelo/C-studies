#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor [10], i;
    printf("\n\n\t Digite 10 valores:");

    for (i=0; i<10; i++){
        printf("\n\t\t>>> ");
        scanf("%d", &vetor[i]);
    }

    for (i=0; i<10; i++){
        if (vetor[i]%2==0){
            printf("\t%d eh par\n", vetor[i]);}
            else printf("\t%d eh impar\n", vetor[i]);
    }
    return 0;
}
