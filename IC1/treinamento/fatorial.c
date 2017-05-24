#include <stdio.h>

int main(void) {
  int num, i, result = 1;
  scanf(" %d", &num);
  for(i = num; i > 0; --i) result *= i;
  printf("%d\n", result);
  return 0;
}
  
