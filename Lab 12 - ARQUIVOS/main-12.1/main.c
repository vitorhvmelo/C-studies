#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    FILE *fp = fopen("arquivo3.txt", "w");
    FILE *fp1 = fopen("texto1.txt", "r");
    FILE *fp2 = fopen("texto2.txt", "r");
    if(fp == NULL) printf("Erro ao abrir arquivo3.txt");
    if(fp1 == NULL) printf("Erro ao abrir texto1.txt");
    if(fp2 == NULL) printf("Erro ao abrir texto2.txt");

    char str1[100], str2[100];
    setbuf(stdin, NULL);
    fgets(str1, 100, fp1);
    setbuf(stdin, NULL);
    fgets(str2, 100, fp2);
    strcat(str1, str2);
    fputs(str1, fp);
    fclose(fp);
    fclose(fp2);
    fclose(fp1);
    return 0;
}
