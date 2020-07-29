#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{  int i,j;
   char M[20][30], aux[30];

for (i = 0; i < 20; i++) {
   printf("\nNome %i: ", i+1);
   scanf("%s", M[i]);
}


for (i = 1; i < 20; i++) {
   for (j = 1; j < 20; j++) {
      // verifica se tem que ser depois, se for troca de posição
      if (strcmp(M[j - 1], M[j]) > 0) {
         strcpy(aux, M[j - 1]);
         strcpy(M[j - 1], M[j]);
         strcpy(M[j], aux);
      }
   }
}

// só mostrar a matriz
for (i = 0; i < 20; i++)
   printf("\n%s", M[i]);
}
