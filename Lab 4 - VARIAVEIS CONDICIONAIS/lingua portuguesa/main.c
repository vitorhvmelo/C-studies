#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    printf("Nao posso acentuar �, �, h�, n�o   \n");
    setlocale(LC_ALL, "Portuguese");
    printf("Agora posso acentuar �, �, h�  \n");

    return 0;
}
