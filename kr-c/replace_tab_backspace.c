#include <stdio.h>

/* replace tab by \t and backspace by \b */
main()
{
	char c;

	while((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}