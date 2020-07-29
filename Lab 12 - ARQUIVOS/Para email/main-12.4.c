#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct atleta{
char nome[20], esporte[10];
char idade[15], peso[15], altura[15];

};
typedef struct atleta atleta;
atleta att[5];
void dados(int a){

    printf("Nome:"); setbuf(stdin, NULL); gets(att[a].nome);
    printf("Esporte: "); setbuf(stdin, NULL); gets(att[a].esporte);
    printf("Idade: "); setbuf(stdin, NULL); gets(att[a].idade);
    printf("Peso: "); setbuf(stdin, NULL); gets(att[a].peso);
    printf("Altura: "); setbuf(stdin, NULL); gets(att[a].altura);
}
void escrever(int a, FILE *fp){
    fseek(fp,a*sizeof(atleta),SEEK_SET);
    fwrite(&att[a], sizeof(atleta), 1, fp);
}
int main()
{
    int a=0;
    FILE *fp = fopen("Atletas.txt", "wb");
    if (fp==NULL){
        printf("erro");
        exit(1);
    }
    for(a=0; a<5; a++){
    printf("Atleta [%d]\n", a);
    dados(a);
    escrever(a, fp);
    }
    fclose(fp);
    fp = fopen("Atletas.txt", "r+b");
    if (fp==NULL){
        printf("erro");
        exit(1);
    }
    fseek(fp, 2*sizeof(atleta), SEEK_SET);
    fread(&att[3], sizeof(atleta), 1, fp);
    printf("Nome:"); setbuf(stdin, NULL); gets(att[3].nome);
    printf("Idade: "); setbuf(stdin, NULL); gets(att[3].idade);
    fseek(fp, 2*sizeof(atleta), SEEK_SET);
    fwrite(&att[3], sizeof(atleta), 1, fp);
    fflush(fp);

    for (int i=0; i<5; i++){
        fseek(fp, i*sizeof(atleta), SEEK_SET);
        fread(&att[i], sizeof(atleta), 1,fp);
    }
    for (int i=0; i<5; i++){
        //fwrite(&att[i], sizeof(atleta), 1, stdout);
        printf("\nDados atleta[%d]: \n\tNome: %s\n\tEsporte: %s\n\tIdade: %s\n\tPeso: %s\n\tAltura: %s\n", i, att[i].nome, att[i].esporte ,att[i].idade ,att[i].peso ,att[i].altura);
    }
    fclose(fp);
    return 0;
}
