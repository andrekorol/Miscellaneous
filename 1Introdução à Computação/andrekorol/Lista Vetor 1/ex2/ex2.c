#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 21
int main(void) {
    srand(time(NULL));
    int num, i, pos;
    int numeros[10];
    for (i = 0; i < 10; i++) {
	num = rand() % MAX;
	numeros[i] = num;
    }
     /* for (i = 0; i < 10; i++) */
     /* 	printf("%d\n", numeros[i]); */
    printf("Entre um numero: \n");
    scanf(" %d", &num);
    for (i = 0; i < 10; i++) {
    	if (num == numeros[i])
    	    printf("O numero %d encontra-se na posição %d do vetor\n",
    		   num, i);
    }
}
