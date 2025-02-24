#include <stdio.h>
#include <stdlib.h>

#define BIT(N) (1 << (N))

// TODO: define setBit, clearBit, flipBit, and getBit
void setBit(int pos, unsigned int * num){
  // set the bit in position "pos" to 1
  *num |= BIT(pos);
}

void clearBit(int pos, unsigned int * num){
  // set the bit in position "pos" to 0
  *num &= ~BIT(pos);
}

void flipBit(int pos, unsigned int * num){
  // flip the bit in position "pos"
  *num ^= BIT(pos);
}

int getBit(int pos, unsigned int num){
  // return the value of the bit in position "pos"
  if (num & BIT(pos)) return 1;
  return 0; 
}

int main(){
  unsigned int a = 0;
  printf("Setting bits 3 and 7...\n");
  setBit(3,&a);
  setBit(7,&a);
  printf("a = %032b\n", a);
  printf("Clearing bits 6 and 7...\n");
  clearBit(7,&a);
  clearBit(6,&a);
  printf("a = %032b\n", a);
  printf("Flipping bit 6...\n");
  flipBit(6,&a);
  printf("a = %032b\n", a);
  printf("Flipping bit 6 again...\n");
  flipBit(6,&a);
  printf("a = %032b\n", a);
  printf("Bit 3 = %d\n", getBit(3,a));
  printf("Bit 10 = %d\n", getBit(10,a)); 
  return 0;
}
