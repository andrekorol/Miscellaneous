#include <stdio.h>
static void one_three();
static void two();

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
