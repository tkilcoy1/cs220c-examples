#include <stdio.h>
#include <stdlib.h>
#include "coord.h"

int main(int argc, char ** argv){
  // read in a pair of coordinates from the command line
  coord xy = coord_create(atoi(argv[1]), atoi(argv[2]));
  int a = coord_getx(xy);
  int b = coord_gety(xy);
  printf("coordinate pair created = (%d, %d)\n", a, b);

  return 0;
}
