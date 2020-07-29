#include <stdio.h>
#include <stdlib.h>

int MAIOR (int a, int b){
    if (a>b)
        return a;
    return b;
}

int main()
{
    float a = 10, b = 5;
    printf("O maior entre %f e %f eh %i\n\n", a, b, MAIOR(a,b));
    a = 20, b = 50;
    printf("O maior entre %f e %f eh %i\n\n", a, b, MAIOR(a,b));

    return 0;
}
