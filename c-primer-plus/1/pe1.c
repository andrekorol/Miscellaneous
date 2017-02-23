#include <stdio.h>

int main(void)
{
	int inches, cm;

	printf("Enter your inch value:\n> ");
	scanf("%d", &inches);

	cm = inches * 2.54;

	printf("Your value in centimeters is: %dcm\n", cm);

	return cm;

}