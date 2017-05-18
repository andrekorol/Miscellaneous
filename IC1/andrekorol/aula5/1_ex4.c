#include <stdio.h>
#include <math.h>
int main(void){
    double num, int_num, frac_num;

    printf("Entre um número: \n");
    scanf("%lf", &num);
    int_num = (int) num;
    frac_num = num - int_num;
    printf("A pafrte inteira de %f é %f\n", num, int_num);
    printf("A parte fracionária de %f é %f\n", num, frac_num);
    printf("%f é arredondado para %f\n", num, round(num));

    return 0;
}
