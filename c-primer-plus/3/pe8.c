#include <stdio.h>
int main(void)
{
    float cup, pint, ounce, tablespoon, teaspoon;
    char pe = 112;
    printf("Enter your volume in cups: \n");
    scanf("%f", &cup);
    pint = 2.0 * cup;
    ounce = (1.0 / 8.0) * cup;
    tablespoon = (1.0 / 2.0) * ounce;
    teaspoon = (1.0 / 3.0) * tablespoon;
    
    printf("%f cup(s) is equal to:\n%f pints\n%f ounces\n%f tablespoons\n%f teaspoons\n", cup, pint, ounce, tablespoon, teaspoon);

    return 0;
}
