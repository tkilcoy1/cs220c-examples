#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
  if (argc < 3) {
    fprintf(stderr, "Usage: ./printMultiples a max\n");
    return 1;
  }
  int a = atoi(argv[1]);
  int max = atoi(argv[2]);
  for (int i = 1; i*a <= max; i++){
    printf("%d\n", i*a);
  }
  return 0;
}
