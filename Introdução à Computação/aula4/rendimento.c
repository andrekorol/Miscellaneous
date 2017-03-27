#include <stdio.h>
int main(void)
{
    float deposito, juros, rendimento, resultado;

    printf("Entre o valor do depósito: \n");
    scanf("%f", &deposito);

    printf("Entre a porcentagem da taxa de juros: \n");
    scanf("%f", &juros);
    juros /= 100;
    resultado = deposito * (1 + juros);
    rendimento = resultado - deposito;

    printf("O valor do rendimento é de R$%.2f e o valor total depois do rendimento é de R$%.2f\n", rendimento, resultado);

    return 0;
}
