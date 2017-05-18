#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int *array;
    int *distintos;
    int i = 0, array_size = 1, num = 1, distintos_size = 0, j = 0, k;
    bool is_in;
    array = (int *)malloc(sizeof(int) * array_size);
    while (num != 0) {
	printf("Entre um número para ser adicionado ao vetor ou entre 0 para parar de adicionar números:\n");
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
    printf("Vetor dado:\nv = {");
    for (i = 0; i < array_size; i++) {
	if (i < (array_size - 1) )
	    	printf("%d, ", array[i]);
	else
	    printf("%d}\n", array[i]);
    }

    for (i = 0; i < array_size; i++) {
	is_in = false;
	if (distintos_size == 0) {
	    distintos_size++;
	    distintos = (int *)malloc(sizeof(int) * distintos_size);
	    distintos[j] = array[i];
	    j++;
	}
	else {
	    for (k = 0; k < distintos_size; k++) {
		if (array[i] == distintos[k])
		    is_in = true;
	    }
	    if (is_in == false) {
		distintos_size++;
		distintos = (int *)realloc(distintos, sizeof(int) * distintos_size);
		distintos[j] = array[i];
		j++;
	    }
	}
    }
    printf("Vetor apenas com os numeros distintos:\nv = {");
    for (i = 0; i < distintos_size; i++) {
	if (i < (distintos_size - 1) )
	    printf("%d, ", distintos[i]);
	else
	    printf("%d}\n", distintos[i]);
    }
    
    return 0;

}
