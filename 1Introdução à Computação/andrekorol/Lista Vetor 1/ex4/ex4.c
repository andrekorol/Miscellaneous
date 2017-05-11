#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MAX 100
void descending_bubble_sort(int vet[], int max) {
    int i, j, aux;
    for( i = 0; i < max; i++) {
	for(j = 0; j < (max - 1); j++) {
	    if (vet[j] < vet[j+1]) {
		aux = vet[j+1];
		vet[j+1] = vet[j];
		vet[j] = aux;
	    }
	}
    }
    
}
int main(void) {
    int numeros[SIZE];
    srand(time(NULL));
    int num, i;
    for (i = 0; i < SIZE; i++){
	num = rand() % MAX;
	numeros[i] = num;
    }
    printf("Vetor original: ");
    for (i = 0; i < SIZE; i++)
	printf("%d ", numeros[i]);
    
    descending_bubble_sort(numeros, SIZE);
    printf("\nVetor em ordem decrescente: ");
    for (i = 0; i < SIZE; i++)
	printf("%d ", numeros[i]);

    return 0;
}
