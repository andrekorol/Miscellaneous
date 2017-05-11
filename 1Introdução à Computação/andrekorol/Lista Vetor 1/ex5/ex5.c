#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void) {
    int *array;
    int *inverse;
    int i = 0, array_size = 1, num = 1, last;
    bool result;
    array = (int *)malloc(sizeof(int) * array_size);
    while (num != 0) {
	if (num != 0) {
	    printf("Entre um numero inteiro para ser adicionado ao vetor:\n");
	    scanf(" %d", &num);
	    if (num == 0)
		break;
	    array[i] = num;
	    i++;
	    array_size++;
	    array = (int *)realloc(array, sizeof(int) * (array_size));
	}
    }

    printf("Vetor original:\n");
    for (i = 0; i < (array_size - 1); i++)
    	printf("%d\t", array[i]);

    inverse = (int *)malloc(sizeof(int) * array_size);
    last = array_size - 2;
    for (i = 0; i < (array_size - 1); i++) {
	inverse[i] = array[last];
	last--;
    }

    printf("\nVetor invertido:\n");
    for (i = 0; i < (array_size - 1); i++)
	printf("%d\t", inverse[i]);

    last = array_size - 2;
    for (i = 0; i < (array_size - 1); i++) {
	if (array[i] == inverse[i])
	    result = true;
	else {
	    result = false;
	    break;
	}
    }

    if (result == true)
	printf("\nO vetor é palindromo\n");
    else
	printf("\nO vetor não é palindromo\n");
    
    free(array);
    free(inverse);
    
    return 0;
}
