#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2, num3;

    printf("Entre os três números inteiros DIFERENTES que serão ordenados: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 < num2) && (num2 < num3)) {
        printf("%d < %d < %d\n", num1, num2, num3);
    }
    else if ((num1 < num3) && (num3 < num2)) {
        printf("%d < %d < %d\n", num1, num3, num2);
    }
    else if ((num2 < num1) && (num1 < num3)) {
        printf("%d < %d < %d\n", num2, num1, num3);
    }
    else if ((num2 < num3) && (num3 < num1)) {
        printf("%d < %d < %d\n", num2, num3, num1);
    }
    else if ((num3 < num1) && (num1 < num2)) {
        printf("%d < %d < %d\n", num3, num1, num2);
    }
    else if ((num3 < num2) && (num2 < num1)) {
        printf("%d < %d < %d\n", num3, num2, num1);
    }

    return 0;
}
