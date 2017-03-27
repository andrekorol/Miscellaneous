#include <stdio.h>
int main(void)
{
    long double sec_in_year = 3.156e7;
    int  age;
    long double age_sec;
    printf("sec_in_year = %Lg\n", sec_in_year);
    printf("Enter your age in years: \n");
    scanf("%d", &age);
    age_sec = age * sec_in_year;
    printf("Your age in seconds is equal to %Lg\n", age_sec);

    return 0;
}
