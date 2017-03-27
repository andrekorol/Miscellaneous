#include <stdio.h>
int main(void)
{
    int imate = 2;
    long shot = 53456;
    char grade = 'A';
    float log = 2.71828;

    printf("The odds against the %d were %ld to 1.\n", imate, shot);
    printf("A score of %f is not an %c grade.\n", log, grade);

    return 0;
}
