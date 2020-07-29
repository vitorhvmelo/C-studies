#include <stdio.h>
#include <ctype.h>
void main(void)
{
int chave, entrada;
printf("entre com a chave (0-25): ");
scanf("%d", &chave);
chave %= 26;
printf("entre com o texto a ser codificado em ROT-%d (ctrl+c para sair):\n", chave);
while( entrada = getchar( ) ) {
if( islower( entrada ) )
entrada = 'a' + (entrada - 'a' + chave) % 26;
else if( isupper( entrada ) )
entrada = 'A' + (entrada - 'A' + chave) % 26;
putchar( entrada );
}
}
