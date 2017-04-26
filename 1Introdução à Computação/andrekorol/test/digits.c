#include <stdio.h>
#include <math.h>
int count(int i) {
    int result = 1;
    while ( i/= 10) result++;
    return result;
}
int main(void) {
    int num, part1, part2;
    printf("Entre um numero com 4 digitos: \n");    // implementar codigo para n digitos
    scanf(" %d", &num);
    int digits = count(num);
    char array[digits];
    while (digits --) {
        array[digits] = num % 10;
        num /= 10;
    }
    part1 = array[0] * pow(10, (int)log10(array[1])+1) + array[1];
    part2 = array[2] * pow(10, (int)log10(array[3])+1) + array[3];
    printf("part1 = %d e part2 = %d\n", part1, part2);
    printf("%d\n", (int)3025 / 100);
    printf("%d\n", (int)3025 % 100);
    return 0;
}
