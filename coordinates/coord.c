#include <stdlib.h> // for malloc and free
#include "coord.h"

struct coord_struct {
  int x;
  int y;
};

coord coord_create(int x, int y){
  // use malloc to allocate space on the heap for a coordinate pair (x,y)
  coord newxy = malloc(sizeof(struct coord_struct));
  newxy->x = x;
  newxy->y = y;
  return newxy;
}

int coord_getx(coord xy){
  // return x-coordinate
  return xy->x;
}

int coord_gety(coord xy){
  // return y-coordinate
  return xy->y;
}


