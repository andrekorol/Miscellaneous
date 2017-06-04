#include <stdio.h>
static void br();
static void ic();
int main(void)
{
    br();
    printf(", ");
    ic();
    printf(",");
    printf("\n");
    ic();
    printf(",");
    printf("\n");
    br();
    printf("\n");

    return 0;
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}


    
