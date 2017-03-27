#include <stdio.h>
int main(void)
{
    int cv;
    printf("Enter an ASCII code value:\n >");
    scanf("%d", &cv);
    printf("The character that have has the ASCII code equal to %d is %c\n", cv, cv);

    return 0;
}
