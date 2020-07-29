#include <stdio.h>
#include <stdlib.h>


int main() {
int a, b, c;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if ( (a <= b) && (b <= c) )
printf("Em ordem: %d, %d, %d \n", a, b, c);


if ( (a <= c) && (c <= b) )
printf("Em ordem: %d, %d, %d \n", a, c, b);


if ( (b <= a) && (a <= c) )
printf("Em ordem: %d, %d, %d \n", b, a, c);


if ( (b <= c) && (c <= a) )
printf("Em ordem: %d, %d, %d \n", b, c, a);

if ( (c <= a) && (a <= b) )
printf ("Em ordem:%d, %d, %d \n", c, a, b);

if ( (c <= b && b <= a))
printf ("Em ordem:%d, %d, %d,\n", c, b, a);

return 0;}
