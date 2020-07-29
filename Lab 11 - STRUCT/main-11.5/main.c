#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{

    FILE *arq = fopen("numeros.bin","wb");
    if(arq == NULL){
        printf("Problema ao abrir o arquivo");
        exit(1);
    }

    int i, c, soma = 0;
    int teste;

    for(i=0; i<=100; i++){
        fputc(i, arq);
    }

    fclose(arq);
    arq = fopen("numeros.bin", "rb");
    for(i=0; i<=100; i++){
        c = fgetc(arq);
        soma += c;
    }
    printf("%d", soma);
    return 0;
}
