#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a, b, c, d;

    printf("Entre com quatro numeros inteiros distintos: \n");

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
if( (a <= b) && (b <= c) && (c <= d) ) // se (a <= b) e (b <= c e ( c <= d )
printf("Em ordem: %d, %d, %d, %d \n", a, b, c, d);

else if ((a <= b) && (b <= d) && (d <= c))
printf("Em ordem: %d, %d, %d, %d \n", a, b, d, c);

else if ((a <= c) && (c <= b) && (b <= d))
printf("Em ordem: %d, %d, %d, %d \n", a, c, b, d);

else if ((a <= c) && (c <= d) && (d <= b))
printf("Em ordem: %d, %d, %d, %d \n", a, c, d, b);

else if ((a <= d) && (d <= b) && (b <= c))
printf("Em ordem: %d, %d, %d, %d \n", a, d, b, c);

else if ((a <= d) && (d <= c) && (c <= b))
printf("Em ordem: %d, %d, %d, %d \n", a, d, c, b);

else if ((b <= a) && (a <= c) && (c <= d))
printf("Em ordem: %d, %d, %d, %d \n", b, a, c, d);

else if ((b <= a) && (a <= d) && (d <= c))
printf("Em ordem: %d, %d, %d, %d \n", b, a, d, c);

else if ((b <= c) && (c <= a) && (a <= d))
printf("Em ordem: %d, %d, %d, %d \n", b, c, a, d);

else if ((b <= c) && (c <= d) && (d <= a))
printf("Em ordem: %d, %d, %d, %d \n", b, c, d, a);

else if ((b <= d) && (d <= a) && (a <= c))
printf("Em ordem: %d, %d, %d, %d \n", b, d, a, c);

else if ((b <= d) && (d <= c) && (c <= a))
printf("Em ordem: %d, %d, %d, %d \n", b, d, c, a);

else if ((c <= a) && (a <= b) &&(b <= d))
printf("Em ordem: %d, %d, %d, %d \n", c, a, b, d);

else if ((c <= a) && (a <= d) &&(d <= b))
printf("Em ordem: %d, %d, %d, %d \n", c, a, d, b);

else if ((c <= b) && (b <= a) && (a <= d))
printf("Em ordem: %d, %d, %d, %d \n", c, b, a, d);

else if ((c <= b) && (b <= d) && (d <= a))
printf("Em ordem: %d, %d, %d, %d \n", c, b, d, a);

else if ((c <= d) && (d<= a) && (a <= b))
printf("Em ordem: %d, %d, %d, %d \n", c, d, a, b);

else if ((c <= d) && (d<= b) && (b <= a))
printf("Em ordem: %d, %d, %d, %d \n", c, d, b, a);

else if ((d <= a) && (a <= b) &&(b <= c))
printf("Em ordem: %d, %d, %d, %d \n", d, a, b, c);

else if ((d <= a) && (a <= c) &&(c <= b))
printf("Em ordem: %d, %d, %d, %d \n", d, a, c, b);

else if ((d <= b) && (b <= a) && (a <= c))
printf("Em ordem: %d, %d, %d, %d \n", d, b, a, c);

else if ((d <= b) && (b <= c) && (c <= a))
printf("Em ordem: %d, %d, %d, %d \n", d, b, c, a);

else if ((d <= c) && (c<= a) && (a <= b))
printf("Em ordem: %d, %d, %d, %d \n", d, c, a, b);

else if ((d <= c) && (c<= b) && (b <= a))
printf("Em ordem: %d, %d, %d, %d \n", d, c, b, a);

return 0;



}
