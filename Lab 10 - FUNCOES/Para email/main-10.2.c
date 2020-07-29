#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float volume (float r, float h){
    float pi = 3.141592;
    float volume = pi * r * r * h;
    return volume;

}
int main(){
    float altura, raio;
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Raio: ");
    scanf("%f", &raio);
    printf("O volume do cilindro eh %f", volume(raio, altura));

    return 0;
}
