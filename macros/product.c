#include <stdio.h>

#define SIZE 9
#define PROD(M,N) M*N

int main(){
  int ary[SIZE];
  for (int i = 0; i < SIZE; i++){
    ary[i] = PROD(i+1,SIZE);
    printf("ary[i] = %d\n", ary[i]); 
  }
  return 0;
}
