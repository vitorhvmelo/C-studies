#include <stdio.h>
#include <stdlib.h>

int main() {
    char arquivo[30];
    printf("Arquivo: "); gets(arquivo);
    FILE *f = fopen(arquivo,"r");
    if (f == NULL) {
        printf("Nao consegui abrir seu arquivo. Sinto muito. Problema seu.");
        return 0;
    }

    char busca[100];
    printf("Busca: "); gets(busca);

    char linha[2048];
    int contar = 0;
    while(1) {
        fgets(linha,2048,f);
        if (feof(f))
            break;
        //printf("%s",linha); getchar();

        char *p = linha;
        while(p != NULL) {
            p = strstr(p,busca);
            if (p != NULL) {
                contar++;
                p++;
                printf("%s",linha);

                // opcional: para sublinhar a palavra encontrada
                int pos = p - linha;
                for (int i = 0; i < pos-1; i++)
                    printf(" ");
                for (int i = 0; i < strlen(busca); i++)
                    printf("-");
                getchar();
            }
        }
    }

    fclose(f);
    getchar();
    return 0;
}
