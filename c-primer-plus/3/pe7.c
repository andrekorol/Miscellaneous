#include <stdio.h>
int main(void)
{
    long double inch = 1 / 2.54;
    long double cm;
    printf("Enter your height in centimeters: \n");
    scanf("%Lg", &cm);
    cm = cm * inch;

    printf("Your height is equal to %Lg inches\n", cm);

    return 0;
}
