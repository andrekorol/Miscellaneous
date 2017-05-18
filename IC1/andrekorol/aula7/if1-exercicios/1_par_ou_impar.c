#include <stdio.h>
#include <stdbool.h>

bool par(int n)
{
    return (n & 1)?(false):(true);
}
int main(void) {
    int num1, num2;
    const char *cond1, *cond2;

    printf("Entre dois números inteiros:\n");
    scanf(" %d %d", &num1, &num2);
    if ( (par(num1) == true) && (par(num2) == true) ) {
        cond1 = "par";
        cond2 = "par";
        printf("%d é %s e %d é %s\n", num1, cond1, num2, cond2);
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if ( (par(num1) == false) && (par(num2) == false) ) {
        cond1 = "impar";
        cond2 = "impar";
        printf("%d é %s e %d é %s\n", num1, cond1, num2, cond2);
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if ( (par(num1) == true) && (par(num2) == false) ) {
        cond1 = "par";
        cond2 = "impar";
        printf("%d é %s e %d é %s\n", num1, cond1, num2, cond2);
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else {
        cond1 = "impar";
        cond2 = "par";
        printf("%d é %s e %d é %s\n", num1, cond1, num2, cond2);
        printf("%d / %d = %d\n", num1, num2,  num1 /  num2);
    }
    return 0;
}
