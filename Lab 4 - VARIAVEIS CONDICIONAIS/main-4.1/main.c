#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for (num = 0; num <= 100000; num += 1000 ){
        printf("\t%d\n", num);
    }
    return 0;
}
