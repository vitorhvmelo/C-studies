#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    printf("Nao posso acentuar é, ç, há, não   \n");
    setlocale(LC_ALL, "Portuguese");
    printf("Agora posso acentuar é, ç, há  \n");

    return 0;
}
