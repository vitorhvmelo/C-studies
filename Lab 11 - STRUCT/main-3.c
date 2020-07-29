#include <stdio.h>
#include <stdlib.h>

struct atleta{
    char nome[30];
    char esporte[30];
    int idade;
    float peso;
    float altura;
};
void copiar(struct atleta a, struct atleta *b){
    *b = a;
}

int main()
{
    struct atleta a;
    strcpy(a.nome,"Gabriel");
    strcpy(a.esporte,"Basquete");
    a.idade = 19;
    a.peso = 68;
    a.altura = 1.87;

    struct atleta b;

    copiar(a, &b);

    printf(" %s %s %d %f %f", b.nome,b.esporte,b.idade,b.peso,b.altura);

    return 0;
}
