#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char str1[50], str2[50];
    printf("Digite sua str: ");
    setbuf(stdin, NULL);
    gets(str1);
    int j, i;
    for(i=0, j = strlen(str1); i<strlen(str1); i++, j--){

        str2[j] = str1[i];
    }
    printf("Sua str invertida: %s", str2);
    return 0;
}
