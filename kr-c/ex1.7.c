#include <stdio.h>

/* verify that getchar() != EOF is 0 or 1 */
main()
{
	int c;

	while ((c = getchar()) != EOF)
		printf("%d\n", c);
	printf("%d - at EOF\n", c);
}