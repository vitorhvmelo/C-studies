#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, vet [5];
    for (p = vet; p<vet+5; p++) {
        scanf("%d", p);
    }

    printf("O dobro dos valores digitado é: \n\n\t");

    for (p=vet; p<vet+5; p++){
        printf("\n\t %d", *p * 2);
    }

    return 0;
}
