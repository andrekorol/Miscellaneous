#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char * even_or_odd(int number){
  if (number % 2 != 0){
    return "Odd";
  }
  else {
    return "Even";
  }
}
int main(){
    clock_t begin = clock();
    printf("%c\n", even_or_odd(4));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%ld\n", (long int)(end - begin)); 
    printf("%lf\n", time_spent); 

    return 0;
}

