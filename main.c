//Author: Samantha Zolin
//Section: 10
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(n){
  if (n<10) {
    return n;
  }
  else {
    return n%10 + digit_sum(n/10);
  }
}

int main(void){
  int n = atoi(readline("Enter an int: "));
  printf("sum of digits of %i is %i.\n", n, digit_sum(n));
}

