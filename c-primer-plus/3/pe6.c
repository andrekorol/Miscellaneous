#include <stdio.h>
int main(void)
{
    long double g = 3.0e-23;
    int quarts = 950;
    long double molecules;
    int amount;
    printf("Enter an amount of water in quarts: \n");
    scanf("%d", &amount);

    molecules = amount * (1.0 / g) * quarts;

    printf("There are %Lg molecules of water in %d quarts\n", molecules, amount);

    return 0;
}
