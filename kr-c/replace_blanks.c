#include <stdio.h>

#define NONBLANK 'a'
/* replace each string of one or more blanks by a single blank */
main()
{
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
		lastc = c;
	}


}
