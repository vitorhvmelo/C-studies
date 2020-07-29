#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 10 ;
    int *p,**p1;
    *p= c;
    p1 = &p;
    printf("%d", p);
    printf("   %d", p1);
    return 0;
}
