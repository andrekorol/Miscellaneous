#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
bool par(int n) {
    return (n & 1)?(false):(true);
}

int main(void) {
    int num = 0, p = 0, i = 0, j;
    int pares[SIZE], impares[SIZE];
    while (num != -1) {
	printf("Entre um numero: \n");
	scanf(" %d", &num);
	if (par(num) == true) {
	    pares[p] = num;
	    p++;
	}
	else {
	    if (num != -1) {
		impares[i] = num;
		i++;
	    }
	}
    }
    printf("Pares:\n");
    for(j = 0; j < p; j++)	
	printf("%d\n", pares[j]);
	
    printf("Impares:\n");
    for (j = 0; j < i; j++)
	printf("%d\n", impares[j]);

    return 0;
}
