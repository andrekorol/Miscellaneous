#include <stdio.h>

/* count blanks, tabs and newlines */
main()
{	
	double blanks, tabs, newlines;
	int c;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++newlines;
	}
	printf("%.0f blanks\n%.0f tabs\n%.0f newlines\n", blanks, tabs, newlines);
}