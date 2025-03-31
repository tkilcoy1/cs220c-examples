#include <stdio.h>

extern int sum_asm(int * arr, int len); // return the sum of the elements in arr

int main(){
  int arr[7] = {-1, 100, -32, 40, 11, 21, -2};
  int res = sum_asm(arr, 7);
  printf("result = %d\n", res);

  return 0;
}
