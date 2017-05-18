#include <stdio.h>
#include <stdlib.h>

const char * par_ou_impar(int n)
{
    return (n & 1)?("impar"):("par");
}

int main(void)
{
    long double num;
    printf("Entre um número: \n");
    scanf("%Lf", &num);
    printf("%s\n", par_ou_impar(num));

    return 0;
}
