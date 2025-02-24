#include <stdio.h>

#define SIZE 9
#define PROD(M,N) ((M)*(N))
#define SHIFT(N) ((N)<<1)

int main(){
  int ary[SIZE];
  for (int i = 0; i < SIZE; i++){
    ary[i] = SHIFT(i+1) + 1;
    printf("ary[i] = %d\n", ary[i]); 
  }
  return 0;
}
