#include <stdio.h>
#include <stdlib.h>
#include "arith.h"

int main(int argc, char ** argv){
  if (argc < 3){
    printf("Usage: ./arithTest a b");
    return 1;
  }
  /* read in the first to command line arguments,
     convert them to integers a and b
     print the sum a + b
     print the difference a - b
     print the product a * b
     print the quotient a / b
     print the power a ^ b
  */
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("%d + %d = %d\n", a, b, add(a,b));
  printf("%d - %d = %d\n", a, b, sub(a,b));
  printf("%d * %d = %d\n", a, b, mul(a,b));
  printf("%d / %d = %d\n", a, b, divide(a,b));
  printf("%d ^ %d = %d\n", a, b, expnt(a,b));
  
  return 0;
}
