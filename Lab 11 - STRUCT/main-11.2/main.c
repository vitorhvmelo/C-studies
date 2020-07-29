#include <stdio.h>
#include <stdlib.h>
struct atletas{
char nome[50];
char esporte[50];
int idade, peso, altura;
};

int main()
{
    int velho = 0, numVelho;
    int alto = 0, numAlto;
    char strVelho[100], strAlto[100];
    typedef struct atletas att;
    att atleta[2];
    for (int i = 0; i<2; i++){
        printf("\t=============Atleta[%d]============\n\n", i+1);
        setbuf(stdin, NULL);
        printf("\n\tDigite o nome: "); gets(atleta[i].nome);
        setbuf(stdin, NULL);
        printf("\n\tDigite o esporte: "); fgets(atleta[i].esporte, 50, stdin);
        setbuf(stdin, NULL);
        printf("\n\tDigite a idade: "); scanf("%d", &atleta[i].idade);
        setbuf(stdin, NULL);
        printf("\n\tDigite o peso: "); scanf("%d", &atleta[i].peso);
        setbuf(stdin, NULL);
        printf("\n\tDigite a altura: "); scanf("%d", &atleta[i].altura);

    }
    for (int i = 0; i<2; i++){
        if (atleta[i].idade > velho){
            strcpy (strVelho, atleta[i].nome);
            numVelho = i;
            velho = atleta[i].idade;
        }
        if (atleta[i].altura > alto){
            strcpy(strAlto, atleta[i].nome);
            alto = atleta[i].altura;
            numAlto = i;
        }
    }
    printf("\n\tO mais alto eh o Atleta[%d] (%s) (%d cm). \n\tO mais velho eh o atleta[%d](%s) (%d anos)", numAlto+1, strAlto, alto, numVelho+1, strVelho, velho);
    return 0;
}
