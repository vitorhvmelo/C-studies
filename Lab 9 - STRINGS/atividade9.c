#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE 21
int main() {
char temp[12];
int j,i;
char lista[QUANTIDADE][12] = { "Vinicius", "Guilherme", "Vitor", "Lucas", "Igor", "Joao",
"Pedro", "Abel", "Luiz", "Wemerson", "Rafael", "Pablo",
"Saint", "Thais", "Matheus", "Douglas", "Gabriel",
"Viviane", "Reginaldo", "Jose", "Leonardo" };
printf("Antes de ordenar:\n=====================\n");
for (i = 0; i < QUANTIDADE; i++)
printf("%s\n",lista[i]);



for (i = 1; i < QUANTIDADE; i++) {
   for (j = 1; j < QUANTIDADE; j++) {
      // verifica se tem que ser depois, se for troca de posição
      if (strcmp(lista[j - 1], lista[j]) > 0) {
         strcpy(temp, lista[j - 1]);
         strcpy(lista[j - 1], lista[j]);
         strcpy(lista[j], temp);
      }
   }
}


printf("\n\nApos ordenar:\n=====================\n");
for (int i = 0; i < QUANTIDADE; i++)
printf("%s\n",lista[i]);
return 0;
}
