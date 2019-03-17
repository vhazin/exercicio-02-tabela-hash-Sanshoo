#include <stdio.h>
#include <stdlib.h>

int main(){
  int matrix [200][200];
  int current = 1;
  char curkeys [200];

  scanf("%i", &matrix[0][0]);
  for (int a = 0; a < matrix[0][0]; a++){
    scanf("%i %i", &matrix[current][0], &matrix[current][1]);
    for (a = 0; a < matrix[current][1]; a++){
      scanf("%i", &matrix[current+1][a]);
    }
    current = current+2;
  }

  current = 1;
  for (int a = 0; a < matrix[0][0]; a++){
    for (a = 0; a < matrix[current][0]; a++){
      
    }
  }  
  



}