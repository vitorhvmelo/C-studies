#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f,k;
    c = 0;
        f = c * 9 / 5 + 32;
        k = c + 273.15;
    while (f<200){

        printf ( "%f Graus Celsius equivale a %f graus Fahrenheit\ne %f Kelvin\n", c,f,k);
        c++;
        f = c * 9 / 5 + 32;
        k = c + 273.15;
    }
    return 0;
}
