#include <stdio.h>

int main(){
  int num;
  int sum = 0;
  while (1){
    int result = scanf("%d",&num); // stores number read from input into num
    if (result >= 1) sum += num; // successfully read an int
    else if (result == -1) break; // EOF character read
    else scanf("%*s"); // read input but don't store if no number is read
  }
  printf("sum = %d\n", sum);
}
