#include <stdio.h>
int main(void)
{
  int a, b;
  a = 5;
  b = 2;    /* line 7 */
  printf("In line 7: a = %d and b = %d\n", a, b);
  b = a;    /* line 8 */
  printf("In line 8: a = %d and b = %d\n", a, b);
  a = b;    /* line 9 */
  printf("In line 9: a = %d and b = %d\n", a, b);
  printf("%d %d\n", b, a);
  return 0;
}
