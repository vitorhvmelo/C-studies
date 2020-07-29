#include <stdio.h>
#include <stdlib.h>

 main()
{  int a;
        printf("\t\t<<<<<<<<<<Numeros pares e impares>>>>>>>>>\n");
        printf("\t\t\tDigite um numero:  ");
        scanf("%d", &a);
        if (a % 2 == 0)
                printf("Seu numero e par");
            else printf("Seu numero e impar");

return 0;
}
