#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, c;
    int *endb = &b, *endc = &c;
    printf("Digite  variavel B:  ");
    scanf("%d", &b);
    printf("Digite  variavel C:  ");
    scanf("%d", &c);

    if (endb>endc)
        printf("O endereco de B eh maior e eh: %d", endb);
    else  printf("O endereco de C eh maior e eh: %d", endc);
    return 0;
}
