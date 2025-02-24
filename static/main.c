#include <stdio.h>
#include <stdlib.h>

void counter();

int main(){
  counter();
  counter();
  counter();
  counter();
  return 0;
}

void counter(){
  int count = 0;
  count++;
  printf("Function called %d times\n", count);
}
