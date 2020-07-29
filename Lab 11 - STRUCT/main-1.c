#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[30];
    int idade;
    char end[50];
};
typedef struct pessoa pes;

int main()
{
    pes p1;
    printf("Pessoa 1 ====================== \n");
    setbuf(stdin,NULL);
    printf("Nome: ");
    gets(p1.nome);
    setbuf(stdin,NULL);
    printf("Idade: ");
    scanf(" %d", &p1.idade);
    setbuf(stdin,NULL);
    printf("Endereco: ");
    gets(p1.end);

    pes *p2 = (pes*) malloc(sizeof(pes));
    printf("Pessoa 2 ====================== \n");
    setbuf(stdin,NULL);
    printf("Nome: ");
    gets(p2->nome);
    setbuf(stdin,NULL);
    printf("Idade: ");
    scanf(" %d", &p2->idade);
    setbuf(stdin,NULL);
    printf("Endereco: ");
    gets(p2->end);

    printf("Pessoa 1: ===================\n");
    printf("\t Nome: %s \n\t Idade: %d \n\t Endereco: %s \n", p1.nome, p1.idade, p1.end);
    printf("Pessoa 1: ===================\n");
    printf("\t Nome: %s \n\t Idade: %d \n\t Endereco: %s \n", p2->nome, p2->idade, p2->end);
    system("pause");
    return 0;
}
