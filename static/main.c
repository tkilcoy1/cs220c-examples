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
  int count1 = 0;
  static int count2 = 1;
  count1++;
  printf("(Non-static) Function called %d times\n", count1);
  printf("(Static) Function called %d times\n", count2);
  count2++;
}
