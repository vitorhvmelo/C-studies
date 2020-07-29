#include <stdio.h>
#include <stdlib.h>


struct aluno {
    int num_aluno;
    float notas[3];
    float media;
};

int main()
{
    struct aluno num[10];

    for (int j = 0; j<2;j++){
        printf("\nNumero aluno[%d]: ", j+1);
        scanf("%d", &num[j].num_aluno);
        printf("\nNotas Aluno[%d]:\n", j+1);

        for (int i=0; i<3; i++){
            printf("\tNota[%d]: ", i+1);
            scanf("%f", &num[j].notas[i]);
            num[j].media += (num[j].notas[i]);
        }
        printf("\nMedia aluno %d: %f", num[j].num_aluno, (num[j].media)/3);
        num[j].media = 0;
    }



    return 0;
}
