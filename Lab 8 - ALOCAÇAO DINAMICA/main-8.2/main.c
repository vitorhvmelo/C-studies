#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p, i;
    do {
        printf("Digite um inteiro POSITIVO: ");
        scanf("%d", &n);
    } while (n<0);
    p = (int*) malloc(n* sizeof(int));
    for (i=0; i<n; i++){
        do{
            printf("Digite o  valor [%d] +=2>>> ", i+1);
            scanf("%d", &p[i]);
        }   while(p[i]<2);
    }
    for (i=0; i<n; i++)
        printf("%d\n", p[i]);

    return 0;
}
