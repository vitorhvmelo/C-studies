#include <stdio.h>
#include <stdlib.h>

struct atleta{
    char nome[30];
    char esporte[30];
    int idade;
    float peso;
    float altura;
};
typedef struct atleta atl;

int main()
{
    atl a[5];
    int i,alto = 0,velho = 0;
    char x[30],y[30];
    for(i = 0; i < 3; i++){
        setbuf(stdin,NULL);
        printf("Nome atleta %d: ", i+1);
        gets(a[i].nome);
        setbuf(stdin,NULL);
        printf("Esporte praticado pelo atleta %d: ", i+1);
        gets(a[i].esporte);;
        printf("Idade atleta %d: ", i+1);
        scanf(" %d", &a[i].idade);
        printf("Peso atleta %d (em Kg): ", i+1);
        scanf(" %f", &a[i].peso);
        printf("Altura atleta %d (em metros): ", i+1);
        scanf(" %f", &a[i].altura);
    }
    for(i = 0; i < 3; i++){
        if(a[i].altura > alto){
            alto = a[i].altura;
            strcpy(x,a[i].nome);
        }
        if(a[i].idade > velho){
            velho = a[i].idade;
            strcpy(y,a[i].nome);
        }
    }
    printf("\n\n\n\nO mais alto eh %s(%f m).\nO mais velho eh %s(%d anos)\n", x,alto,y,velho);
    system("pause");
    return 0;
}
