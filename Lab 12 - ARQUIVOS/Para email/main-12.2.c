#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("numeros.bin", "wb");
    for (int i = 0;i<=100; i++){
        fputc(i, fp);
    }
    fclose(fp);
    fp = fopen("numeros.bin", "rb");

    int soma = 0, j;
    for(int i = 0; i<=100; i++){
        j = fgetc(fp);
        printf("%d  ", j);
        soma+=j;
    }
    printf("\n\n\a\tA soma é %d", soma);
    fclose(fp);
    return 0;
}
