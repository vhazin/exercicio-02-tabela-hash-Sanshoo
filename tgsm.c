#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrix [200][200];
  int current = 1;
  char curkeys [200];

  scanf("%i", &matrix[0][0]);
  for (int a = 0; a < matrix[0][0]; a++){
    scanf("%i %i", &matrix[current][0], &matrix[current][1]);
    for (int i = 0; i < matrix[current][1]; i++){
      scanf("%i", &matrix[current+1][i]);
    }
    current = current+2;
  }

  current = 1;
  for (int a = 0; a < matrix[0][0]; a++){
    for (int b = 0; b < matrix[current][0]; b++){
      printf("%i -> ", b);
      for (int i = 0; i < matrix[current][1]; i++){
        if (((matrix[current+1][i]) % (matrix[current][0])) == (b)){
          printf("%i -> ", matrix[current+1][i]); 
        }
      printf("\\\n");
      }
    }
    current = current+2;
  }  
}