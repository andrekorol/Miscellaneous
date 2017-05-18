#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    void clearScreen() {
        const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
    }
    printf("Entre um dos operadores a seguir para selecionar a operação a ");
    printf("ser realizada: \n");
    printf("(+) Somar dois números\n(-) Subtrair dois números\n");
    printf("(*) Multiplicar dois números\n(/) Dividir dois números\n");
    printf("(@) Raiz quadrada de um número\n");
    printf("Digite a opção desejada: \n");
    const char *operacao;
    char operador;
    double num1, num2;
    scanf("%c", &operador);

    switch (operador) {
        case '+':
        operacao = "Adição";
        break;

        case '-':
        operacao = "Subtração";
        break;

        case '*':
        operacao = "Multiplicação";
        break;

        case '/':
        operacao = "Divisão";
        break;

        case '@':
        operacao = "Raiz quadrada";
        break;
    }
    if ((operador == '+') || (operador == '-') || (operador == '*') ||
    (operador  =='/')) {
        clearScreen();
        printf("Operador selecionado: (%c) %s\n", operador, operacao);
        printf("Entre dois números: \n");
        scanf("%lf" "%lf", &num1, &num2);
        switch (operador) {
            case '+':
            printf("%f %c %f = %f\n", num1, operador, num2, num1 + num2);
            break;

            case '-':
            printf("%f %c %f = %f\n", num1, operador, num2, num1 - num2);
            break;

            case '*':
            printf("%f %c %f = %f\n", num1, operador, num2, num1 * num2);
            break;

            case '/':
            printf("%f %c %f = %f\n", num1, operador, num2, num1 / num2);
            break;
        }
    }
    else if (operador == '@') {
        clearScreen();
        printf("Operador selecionado: (%c) %s\n", operador, operacao);
        printf("Entre um número: \n");
        scanf("%lf", &num1);
        printf("A raiz quadrada de %f é %f\n", num1, sqrt(num1));
    }
    else{
        clearScreen();
        printf("\n##############Operador inválido!!!##############\n\n");
        main();
    }
    return 0;
}
