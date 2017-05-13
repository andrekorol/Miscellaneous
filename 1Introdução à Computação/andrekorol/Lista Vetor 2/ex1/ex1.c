#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *array;
    int i = 0, array_size = 1, num = 1, maior = 0, menor = 2147483647;
    int amplitude;
    array = (int *)malloc(sizeof(int) * array_size);
    while (num != 0) {
	printf("Entre um número para ser adicionado a relação ou entre 0 para parar de adicionar números:\n");
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

    for (i = 0; i < (array_size - 1); i++) {
	if (array[i] >= maior)
	    maior = array[i];
	else if (array[i] <= menor)
	    menor = array[i];
    }

    amplitude = maior - menor;
    printf("A amplitude da relação [");
    for (i = 0; i < (array_size - 1); i++)
	printf("%d ", array[i]);
    printf("\b] é igual a %d\n", amplitude);

    return 0;
}
