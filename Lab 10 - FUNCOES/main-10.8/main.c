#include <stdio.h>
#include <stdlib.h>

long cubo (int n){
    if (n==0)
        return 0;
    else
        return n*n*n + cubo(n-1);

}

int main()
{   int n;
    printf("Digite um valor N: ");
    scanf("%d", &n);
    printf("\nA soma dos cubos ate N eh: %d", cubo(n));
    return 0;
}
