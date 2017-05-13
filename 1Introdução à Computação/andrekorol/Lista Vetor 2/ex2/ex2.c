#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void) {
    int *array;
    int *distintos;
    int i = 0, array_size = 1, num = 1, count = 0, j, k = 0, iguais;
    
    array = (int *)malloc(sizeof(int) * array_size);
    while (num != 0) {
	printf("Entre um número para ser adicionado ao vetor ou entre 0 para parar de adicionar números:\n");
	scanf(" %d", &num);
	if (num == 0) {
	    if (array_size == 1)
		return 0;
	    else
		break;
	}
	else {
	    array[i] = num;
	    i++;
	    array_size++;
	    array = (int *)realloc(array, sizeof(int) * array_size);
	}
	    
    }

    // start writing new problem logic here:
    
    
    for (i = 0; i < (array_size - 1); i++) {
	iguais = 0;
	for (j = 0; j < (array_size - 1); j++) {
	    if (array[i] == array[j]) {
		if (count == 0) {
		    array_size = 1;
		    distintos = (int *)malloc(sizeof(int) * array_size);
		}
		    
		else if (iguais == 1) {
		    distintos[k] = array[i];
		    array_size++;
		    distintos = (int *)realloc(distintos, sizeof(int) * array_size);
		    k++;
		    count++;
		}
	    }
	}
    }
    for (i = 0; i < (k + 1); i++)
	printf("%d\n", distintos[i]);
    printf("v = {");
    for (i = 0; i <= k; i++) {
	if (i < k)
	    printf("%d, ", distintos[i]);
	else
	    printf("%d}\n", distintos[i]);
		
    }
    return 0;
}
