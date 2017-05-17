#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubble_sort(int *array, int array_size) {
    int i, j, aux;
    for (i = 0; i < array_size; i++) {
	for (j = 0; j < (array_size - 1); j++) {
	    if (array[j] > array[j + 1]) {
		aux = array[j + 1];
		array[j + 1] = array[j];
		array[j] = aux;
	    }
	}
    }
}

int main(void) {
    int *array;
    int array_size = 1, num = 1, i = 0, j;
    bool sorted;
    array = (int *)malloc(sizeof(int) * array_size);
    while (num != 0) {
	printf("Entre um numero para ser adicionado ao vetor ou entre 0 para parar de adicionar numeros:\n");
	scanf(" %d", &num);
	if (num == 0) {
	    if (array_size == 1)
		return 0;
	    else {
		array_size--;
		array = (int *)realloc(array, sizeof(int) * array_size);
		break;
	    }
	}
	else {
	    array[i] = num;
	    i++;
	    array_size++;
	    array = (int *)realloc(array, sizeof(int) * array_size);
	}
    }
    printf("Vetor inicial:\nv = {");
    for (i = 0; i < array_size; i++) {
	if (i < (array_size - 1) )
	    printf("%d, ", array[i]);
	else
	    printf("%d}\n", array[i]);
    }
    for (i = 0; i < (array_size - 1); i++) {
	if (array[i + 1] > array[i])
	    sorted = true;
	else {
	    sorted = false;
	    break;
	}
    }
    if (sorted == false) {
	bubble_sort(array, array_size);
	printf("Vetor inicial ordenado:\nv = {");
	for (i = 0; i < array_size; i++) {
	    if (i < (array_size - 1) )
		printf("%d, ", array[i]);
	    else
		printf("%d}\n", array[i]);
	}
    }
    
    printf("Entre um numero para ser adicionado ao vetor:\n");
    scanf(" %d", &num);
    array_size++;
    array = (int *)realloc(array, sizeof(int) * array_size);
    for (i = 0; i < array_size; i++) {
	if (array[i] < num)
	    array[i] = array[i];
	else {
	    for (j = (array_size - 1); j > i; j--)
		array[j] = array[j - 1];
	    array[i] = num;
	    break;
	}
    }
    if (sorted == false) {
	printf("Novo vetor ordenado e com o numero \"%d\" adicionado:\nv = {", num);
	for (i = 0; i < array_size; i++) {
	    if (i < (array_size - 1) )
		printf("%d, ", array[i]);
	    else
		printf("%d}\n", array[i]);
	}
    }

    else {
	printf("Novo vetor com o numero \"%d\" adicionado:\nv = {", num);
	for (i = 0; i < array_size; i++) {
	    if (i < (array_size - 1) )
		printf("%d, ", array[i]);
	    else
		printf("%d}\n", array[i]);
	}
    }

    return 0;
}
