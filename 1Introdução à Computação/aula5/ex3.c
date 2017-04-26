#include <math.h>
#include <stdio.h>

int main(){

    double num1, num2;

    printf("entre com o primeiro e segundo números:\n");
    scanf(" %lf %lf", &num1, &num2);
    printf("%.2lf elevado a %.2lf é igual a %.2lf\n", num1, num2, pow(num1, num2));
    return 0;
}
