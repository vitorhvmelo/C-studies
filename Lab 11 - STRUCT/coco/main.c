#include <stdio.h>
#include <stdlib.h>

int fibonacci(int a){

    if (a == 1|| a == 2){
        return 1;
    }
        else
            return fibonacci(a-1) + fibonacci(a-2);

}
int main()
{
    int n;
    printf("Digite um valor n: ");
    scanf("%d", n);
    printf("\nA sequencia Fibonacci ate o enesino termo �: \n");
    for (int i = 0; i<n; i++)
        printf("%d", fibonacci(n));
    return 0;
}
