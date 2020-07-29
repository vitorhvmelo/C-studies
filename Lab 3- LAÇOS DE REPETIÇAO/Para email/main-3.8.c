#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,c=0,j,n;
    printf("Ate que linha deseja fazer o triangulo de Floyd? \n\n");
    scanf("%i" , &n);

        for(i=1;i<=n;i++){
                for(j=1;j<=i;j++){c++;
            printf("%i ",c);}

         printf("\n");
        }

    return 0;
}
