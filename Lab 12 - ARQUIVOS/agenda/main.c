#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[30], email[30], celular[15], fixo[15]; };
typedef struct cadastro pessoa;

void inserir(FILE *f) {
    pessoa p;
    setbuf(stdin,NULL); printf("\n\nNome: "); gets(p.nome);
    setbuf(stdin,NULL); printf("email: ");    gets(p.email);
    setbuf(stdin,NULL); printf("celular: ");  gets(p.celular);
    setbuf(stdin,NULL); printf("fixo: ");     gets(p.fixo);
    fseek(f,0,SEEK_END);
    fwrite(&p,sizeof(pessoa),1,f);
}
void alterar(FILE *f) {
}

void remover(FILE *f) {
}

void buscar(FILE *f) {
    pessoa p;
    fseek(f,0,SEEK_SET);
    char busca[30];
    setbuf(stdin,NULL); printf("\n\nNome: "); gets(busca);
    while(1) {
        fread(&p,sizeof(pessoa),1,f);
        if (feof(f))
            break;
        char *encontrou = strstr(p.nome,busca);
        if (encontrou != NULL) {
            printf("\n%s %s %s %s",p.nome,p.email,p.celular,p.fixo);
        }
    }
}

void listar(FILE *f) {
    pessoa p;
    fseek(f,0,SEEK_SET);
    while(1) {
        fread(&p,sizeof(pessoa),1,f);
        if (feof(f))
            break;
        printf("\n%s %s %s %s",p.nome,p.email,p.celular,p.fixo);
    }
}

int main() {
    FILE *f = fopen("dados.txt","r+"); // vamos tentar abrir o arquivo
    if (f == NULL) { // se arquivo nao existe
        f = fopen("dados.txt","w+"); // vamos cria-lo
        if (f == NULL) { // se mesmo assim nao for possivel
            printf("sinto muito!"); // sinto muito
            return 0;
        }
    }

    int opcao = -1;
    while (opcao != 0) {
        printf("\n\n0-sair\n1-insere\n2-altera\n3-remove\n4-busca\n5-lista\n");
        printf("\nOpcao: "); scanf(" %d",&opcao);
        switch(opcao) {
            case 1: inserir(f); break;
            case 2: alterar(f); break;
            case 3: remover(f); break;
            case 4: buscar(f); break;
            case 5: listar(f); break;
            printf("\n\n\n");
        }
    }

    fclose(f);
    return 0;
}
