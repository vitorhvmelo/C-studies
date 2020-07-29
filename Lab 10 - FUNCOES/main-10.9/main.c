#include <stdio.h>
#include <stdlib.h>

int decrescente(int a){
     if (a==0){
        printf(" 0.");
        return 0;
     }
        else{
            printf(" %d ", a);
            return decrescente(a-1);
        }

}
int crescente(int a, int b){
    if (b==a){
        printf(" %d.", a);
        return 0;
    }
        else{
        printf(" %d ", b);
            return crescente(a, b+1);
        }
}
int main(){
    int n;
    printf("Digite um valor N: ");
    scanf("%d", &n);
    printf("\nDecrescente: \n");
    decrescente(n);
    printf("\nCrescente: \n");
    crescente(n, 0);
    return 0;
}
