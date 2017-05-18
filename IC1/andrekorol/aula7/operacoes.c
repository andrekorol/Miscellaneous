#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    printf("Entre um dos operadores a seguir para selecionar a operação a ");
    printf("ser realizada: \n");
    printf("(+) Somar dois números\n(-) Subtrair dois números\n");
    printf("(*) Multiplicar dois números\n(/) Dividir dois números\n");
    printf("(@) Raiz quadrada de um número\n");
    printf("Digite a opção desejada: \n");

    char operador;
    double num1, num2;
    scanf("%c", &operador);
    if (operador == '+') {
        printf("Entre dois números: \n");
        scanf("%lf" "%lf", &num1, &num2);
        printf("%f %c %f = %f\n", num1,operador, num2, num1 + num2);
    }
    else if (operador == '-') {
        printf("Entre dois números: \n");
        scanf("%lf" "%lf", &num1, &num2);
        printf("%f %c %f = %f\n", num1, operador, num2, num1 - num2);
    }
    else if (operador == '*') {
        printf("Entre dois números: \n");
        scanf("%lf" "%lf", &num1, &num2);
        printf("%f %c %f = %f\n", num1, operador, num2, num1 * num2);
    }
    else if (operador == '/') {
        printf("Entre dois números: \n" );
        scanf("%lf" "%lf", &num1, &num2);
        printf("%f %c %f = %f\n", num1, operador, num2, num1 / num2);
    }
    else if (operador == '@') {
        printf("Entre um número: \n");
        scanf("%lf", &num1);
        printf("A raiz quadrada de %f é %f\n", num1, sqrt(num1));
    }
    return 0;
}
