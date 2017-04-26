#include <stdio.h>

int main(void) {
    const int NUM1 = 92;
    const int NUM2 = 1478;
    unsigned long long int result = 1;
    int i, j, flag;

    printf("O produto dos numeros primos entre %d e %d eh igual a: \n", NUM1,
     NUM2);

     for (i = NUM1 + 1; i < NUM2; i++) {
         flag = 0;
         for (j = 2; j <= i/2; j++) {
             if(i % j == 0) {
                 flag = 1;
                 break;
             }
         }
         if ( (flag == 0) && (i !=1471) ) {
             printf("%d * ", i);
             result *= i;
         }
         else if ( (flag == 0) && (i == 1471) ) {
             printf("%d", i);
             result *= i;
         }
     }
     printf(" = %llu\n", result);
     return 0;
}
