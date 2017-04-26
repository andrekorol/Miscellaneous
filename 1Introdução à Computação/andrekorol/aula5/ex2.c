#include <stdio.h>
#include <math.h>
int main()
{    
    double num;

    printf("Entre um número inteiro positivo e maior que zero: \n");
    scanf(" %lf", &num);

    printf("%lf ao quadrado é igual à %lf\n", num, pow(num, 2.0));
    printf("%lf ao cubo é igual à %lf\n", num, pow(num, 3.0));
    printf("A raiz quadrada de %lf é iagual à %lf\n", num, sqrt(num));
    printf("A raiz cúbica de %lf é igual à %lf\n", num, cbrt(num));
    
    return 0;
}




