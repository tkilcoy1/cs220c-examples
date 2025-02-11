#include <stdio.h>
#include <stdlib.h>

void printAry(int ary[], int length){
  //int length = sizeof(ary)/sizeof(int);
  for (int i = 0; i < length; i++){
    printf("ary[%d] = %d\n", i, ary[i]);
  }
}

int main(){
  int ary1[10];
  //printf("sizeof(ary1) = %lu\n", sizeof(ary1));
  //printf("length of ary1 = %lu\n", sizeof(ary1)/sizeof(int));
  for (int i = 0; i < 10; i++){
    ary1[i] = i + 1;
  }
  int length1 = sizeof(ary1)/sizeof(int); // compute the lenth of ary1 

  printf("The length of ary1 is %d\n", length1);
  printf("Contents of array1:\n");
  // TODO: write a function that prints each element in the array
  printAry(ary1, length1);
  return 0;
}
