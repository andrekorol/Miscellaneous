#include <stdio.h>

int main(void) {
    int n;
    float result, i;
    printf("Entre um numero: \n");
    scanf(" %d", &n);
    result = 1;
    if ( (n == 1) || (n == 0) ) {
        printf("s = %d\n", n);
        return 0;
    }
    else if (n < 0) {
        printf("Nao sao permitidos numeros negativos, apenas numeros inteiros e positivos\n");
        return 0;
    }
    else {
        printf("s = 1 + ");
        for ( i = 2; i <= n; i++) {
            if (i < n) {
                printf("1/%.0f + ", i);
                result += (1.0 / i);
            }
            else if (i == n) {
                result += (1.0 / i);
                printf("1/%.0f = %f\n", i, result);
            }
        }
    }
    return 0;
}
