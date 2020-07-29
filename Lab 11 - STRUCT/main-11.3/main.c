#include <stdio.h>
#include <stdlib.h>

struct atletas{
char nome[50];
char esporte[50];
int idade, peso, altura;
};
void copiar (struct atletas a, struct atletas *b){
 *b = a;
}
int main()
{
  typedef struct atletas att;
  att a;
  strcpy(a.nome, "Vitor");
  strcpy(a.esporte, "Nada");
  a.idade = 17; a.peso = 60; a.altura = 180;
  att b;
  copiar(a, &b);
  printf("%s %s %d %d %d", b.nome, b.esporte, b.idade, b.peso, b.altura);
    return 0;
}
