//Author: Samantha Zolin
//Section: 10
#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <string.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return (n%10+digit_sum(n/10));
  }
}

int main(digit_sum(int n)) {
  int N=atoi(readline("Enter an int: "));
  printf("sum of digits of {n} is {digit_sum(n)}.";

}
