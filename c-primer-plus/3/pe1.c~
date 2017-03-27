#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    int int_max = INT_MAX;
    float flt_min = FLT_MIN;
    int int_overflow = int_max + 1;
    float flt_overflow = flt_min + 1;
    float flt_underflow = flt_min / 2;
    
    printf("The largest value my system accepts is %d\n", int_max);
    printf("The smallest floating-point number my system ");
    printf("accepts is %f\n", flt_min);
    printf("Example of integer overflow on my system: ");
    printf("%d + 1 = %d\n", int_max, int_overflow);
    printf("Example of floating-point overflow on my system: ");
    printf("%f + 1 = %f\n", flt_min, flt_overflow);
    printf("Example of floating-point underflow on my system: ");
    printf("%f / 2 = %f\n", flt_min, flt_underflow);

    return 0;
}
