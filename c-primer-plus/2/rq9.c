#include <stdio.h>
int main(void)
{
    int x, y;
    x = 10;
    y = 5;	/* line 7 */
    printf("After line 7: x = %d and y = %d\n", x, y);
    y = x + y;	/* line 8 */
    printf("After line 8: x = %d and y = %d\n", x, y);
    x = x*y;	/* line 9 */
    printf("After line 9: x = %d and y = %d\n", x ,y);
    printf("%d %d\n", x, y);
    return 0;
}
