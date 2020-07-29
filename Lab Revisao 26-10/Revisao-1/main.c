#include <stdio.h>
#include <stdlib.h>

int main()
{

    float notas[10];
    int i;

    for (i=0;i<10;i++){
        printf("Notas do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        }

    float media = 0;
    for (i=0; i<10;i++){
        media = media + notas[i];
    }
    media = media/10;
    printf("\nA media eh %.2f\n", media);

    for (i=0; i<10; i++){
        if (notas[i]>media)
            printf("Aluno %d aprovado\n", i+1);
    }

    return 0;
}
