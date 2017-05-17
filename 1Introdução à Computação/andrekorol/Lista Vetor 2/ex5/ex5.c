#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array;
    int array_size = 1, num = 1, i = 0, posicao, j;
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
    printf("vetor incial:\nv = {");
    for (i = 0; i < array_size; i++) {
	if (i < (array_size - 1) )
	    printf("%d, ", array[i]);
	else
	    printf("%d}\n", array[i]);
    }

    printf("Entre a ordem da componente a ser deletada:\n");
    scanf(" %d", &posicao);
    posicao--;
    for (i = 0; i < array_size; i++) {
	if (i == posicao) {
	    for (j = i; j < (array_size - 1); j++) 
		array[j] = array[j + 1];
	    break;
	}
	else
	    array[i] = array[i];
    }
    array_size--;
    array = (int *)realloc(array, sizeof(int) * array_size);
    
    printf("Vetor final sem a componente de ordem %d:\nv = {", posicao + 1);
    for (i = 0; i < array_size; i++) {
	if (i < (array_size - 1) )
	    printf("%d, ", array[i]);
	else
	    printf("%d}\n", array[i]);
    }

    return 0;
}
