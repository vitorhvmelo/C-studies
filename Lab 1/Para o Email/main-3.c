#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5, y=10, z=0;
    if ((x>1) || (y/z==1000)) //Como � um ou outro,  o programa gera uma resposta porque x>1
        printf("Sucesso (divisao por zero?)\n");
    else printf("Fracasso na divisao por zero \n");


    if ((x>1) && (y/z==1000))// COmo sao necess�rios as duas condi�oes, o programa nao gera resposta, pois nao resolve a divisao por zero
        printf("Sucesso (divisao por zero?)\n");
    else printf("Fracasso na divisao por zero \n");

return 0;}
