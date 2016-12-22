#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = 0, 20, ..., 300 */
main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius\tFahrenheit\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%.0f\t%.1f\n", celsius, fahr);
		celsius += step;
	}
}