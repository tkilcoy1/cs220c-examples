#include <stdio.h>
#include <stdlib.h>

int main(){
  int rows = 2;
  int cols = 3;
  int ary[2][3] = {{10,11,12},{20,21,22}};
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("ary[%d][%d] = %d\n", i,j,ary[i][j]);
    }
  }
  int i = 0;
  int j = 4;
  printf("ary[%d][%d] = %d\n", i,j,ary[i][j]);

  return 0;
}
