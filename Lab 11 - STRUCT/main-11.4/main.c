#include <stdio.h>
#include <stdlib.h>
struct ponto {
int xcima, ycima;
int xbaixo, ybaixo;
};
struct retangulo{
int a, b;
float diagonal;
int perimetro;
};
int main()
{   typedef struct ponto ponto;
    typedef struct retangulo retangulo;
    ponto p;
    retangulo ret;

    printf("Escreva o Xcima: "); scanf("%d", &p.xcima);
    printf("Escreva o Ycima: "); scanf("%d", &p.ycima);
    printf("Escreva o Xbaixo: "); scanf("%d", &p.xbaixo);
    printf("Escreva o Ybaixo: "); scanf("%d", &p.ybaixo);
    ret.a = p.xbaixo - p.xcima;
    ret.b = p.ybaixo - p.ycima;
    ret.diagonal = sqrt((ret.a * ret.a) + (ret.b * ret.b));
    ret.perimetro = 2 * ret.a + 2 * ret.b;
    printf("Lado A: %d, Lado B: %d, Perimetro: %d, Diagonal: %f", ret.a, ret.b, ret.perimetro, ret.diagonal);
    return 0;

}
