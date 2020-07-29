#include <stdio.h>
#include <stdlib.h>
struct pessoa {
char nome [100];
int idade;
char endereco [100];
};
int main()
{
    struct pessoa um;
    struct pessoa *dois = (pessoa*) malloc(sizeof(pessoa));
    printf("Digite o nome da pessoa Estatica: ");
    gets(um.nome);
    printf("Digite a idade: ");
    scanf("%d", &um.idade);
    setbuf(stdin, NULL);
    printf("Digite o endereco: ");
    gets(um.endereco);
    printf("\nDados Pessoa Estatica: \n\t>>>NOME: %s, \n\t>>>IDADE: %d, \n\t\a>>>ENDERECO: %s", um.nome, um.idade, um.endereco);
    printf("\n\n\nDigite o nome da pessoa Dinamico: ");
    gets(dois->nome);
    printf("Digite a idade: ");
    scanf("%d", &dois->idade);
    setbuf(stdin, NULL);
    printf("Digite o endereco: ");
    gets(dois->endereco);
    printf("\nDados Pessoa Estatica: \n\t>>>NOME: %s, \n\t>>>IDADE: %d, \n\t\a>>>ENDERECO: %s", um.nome, um.idade, um.endereco);

    return 0;
}
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
