#include <stdio.h>

void swap_val(int a, int b);
void swap_ref(int *x, int *y);

int main(){
  int a = 100;
  int b = 200;

  printf("a = %d, b = %d\n", a, b);

  swap_val(a,b);

  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap_val(int a, int b){
  printf("swapping a and b...\n");
  int temp = a;
  a = b;
  b = temp;  
}

void swap_ref(int *x, int *y){}
