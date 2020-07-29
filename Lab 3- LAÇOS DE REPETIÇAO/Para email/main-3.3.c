#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f,k;
        c = 0;
        f = c * 9 / 5 + 32;
        k = c + 273.15;
    do{
        printf ( "%f Graus Celsius equivale a %f graus Fahrenheit\ne %f Kelvin\n", c,f,k);
        f = c * 9 / 5 + 32;
        k = c + 273.15;
        c++;}
    while (f<200);
    return 0;
}
