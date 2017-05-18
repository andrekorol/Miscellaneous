#include <stdio.h>
int main(void)
{
    float salario;
    printf("Entre o salario inicial do funcionário: \n");
    scanf("%f", &salario);
    salario *= 1.25;
    printf("O novo salário com o acréscimo de 25% é de R$ %.2f\n", salario);

    return 0;
}
