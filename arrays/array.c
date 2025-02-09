#include <stdio.h>
#include <stdlib.h>

void printAry(int ary[], int len){
  
}

int main(){
  int ary1[10];
  for (int i = 0; i < 10; i++){
    ary1[i] = i + 1;
  }
  int length1 = 0; // TODO: compute the lenth of ary1 

  printf("The length of ary1 is %d\n", length1);
  printf("Contents of array1:\n");
  // TODO: write a function that prints each element in the array
  printAry(ary1, length1);
  return 0;
}
