#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char str1[100], str2[200], strCopy[100];
    printf("Digite a primeira str: ");
    setbuf(stdin, NULL);
    gets(str1);
    printf("Digite a  segunda str: ");
    setbuf(stdin, NULL);
    gets(str2);
    strcpy (strCopy, str1);
    int tamanho = strlen(str2);
    printf("Copia de str1: %s\n", strCopy);
    printf("Tamanho de str1: %d\n Tamanho de str2: %d\n Tamanho de strCopy: %d", strlen(str1), tamanho, strlen(strCopy));
    return 0;
}
