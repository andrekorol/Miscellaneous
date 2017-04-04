/* width.c -- field widths */
#include <stdio.h>
#define PAGES 955
int main(int argc, char const *argv[]) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}
