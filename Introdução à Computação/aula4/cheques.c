#include <stdio.h>
int main(void)
{
    float salario, cheque1, cheque2;
    printf("Entre o salário do trabalhador: \n");
    scanf("%f", &salario);
    printf("Entre o valor do primeiro cheque emitido pelo trabalhador: \n");
    scanf("%f", &cheque1);
    salario -= cheque1 * 1.0038;
    printf("Entre o valor do segundo cheque emitido pelo trabalhador: \n");
    scanf("%f", &cheque2);
    salario -= cheque2 * 1.0038;
    printf("O saldo atual do trabalhador após a emissão dos dois cheques é de R$%f\n", salario);

    return 0;
}
