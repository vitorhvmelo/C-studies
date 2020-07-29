#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f,k;
    for(c=-10; c<=100; c++ ){
        f = c * 9 / 5 + 32;
        k = c + 273.15;
        printf ( "%f Graus Celsius equivale a %f graus Fahrenheit\ne %f Kelvin\n", c,f,k);
    }
    return 0;
}
