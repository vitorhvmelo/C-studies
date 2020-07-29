#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, j, mat[3][2]= {{1,2},{3,4},{5,6}}, vet[2] = {7,8}, res[3];
    for (i=0; i<3; i++){
        res[i]=0;
        for (j = 0; j<2; j++){
            res[i]+= mat[i][j] * vet[j];
        }
    }
      for (i=0; i< 3; i++){
        printf ("\n %d", res[i]);
      }


    return 0;
}














