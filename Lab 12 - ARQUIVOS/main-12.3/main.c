#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    FILE *fp = fopen("biblia.txt", "r");
    if (fp == NULL){ printf("Problema ao abrir o arq"); exit(1);}
    printf("Digite o termo que deseja pesquisar: ");
    char busca[200];
    gets(busca);

    char linha[2048];
    int contar = 0;
    while(1){
        fgets(linha, 2048, fp);
        if(feof(fp)){
            break;
        }
        char *p = linha;
        while(p != NULL){
            p = strstr(p, busca);
            if (p != NULL){
                contar++;
                p   ++;
                printf("\n%s", linha);

            }
        }
    }
    printf("%d", contar);
    fclose(fp);
    return 0;

}



