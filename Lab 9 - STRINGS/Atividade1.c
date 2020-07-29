#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    int i;
    char str[100], str2[100];
    gets (str);
    int tamanho = strlen(str);

    for (i=0; i<100; i++)
        str2[i] = 0;
    for (i=0; i<tamanho; i++)
        if (str[i]<='z' && str[i]>='a')
            str2[i] = str[i] - 32;

    printf("%s", str2);
    return 0;
}
