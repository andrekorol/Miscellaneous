#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);

    if ( (year % 400 == 0) || ( (year % 4 == 0) && !(year % 100 == 0) ) ){
	       printf("%d has a bissextux day\n", year);
    }
    else {
	       printf("%d doesn't have a bissextux day\n", year);
    }
    return 0;
}
