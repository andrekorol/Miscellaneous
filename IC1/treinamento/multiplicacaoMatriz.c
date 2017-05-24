/* multiplicacaoMatriz.c -- multiplica duas matrizes */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int matA, matB, matRes, matrixSize, i;
  printf("Entre o tamanho desejado da matriz:\n");
  scanf(" %d", &matrixSize);
  
  for(i = 0; i <= matrixSize
