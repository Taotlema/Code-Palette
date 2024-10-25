/*
Exercise 3-3-1: Struct
Ayemhenre Isikhuemhen
September 18, 2024
*/

// imports
#include "stdio.h"

// declaring struct
struct box {
  int itemnum;
  char color[20];
  int height;
  int width;
  int depth;
  float x;
  float y;
  float z;
};

int main(void) {
  // struct intialization
  struct box b = {3, "red", 3, 2, 5, 10.21, 20.62, 35.72};

  // printing our struct values
  printf("Item Num: %d\n", b.itemnum);
  printf("Item Num: %s\n", b.color);
  printf("Item Num: %d\n", b.height);
  printf("Item Num: %d\n", b.width);
  printf("Item Num: %d\n", b.depth);
  printf("Item Num: %f\n", b.x);
  printf("Item Num: %f\n", b.y);
  printf("Item Num: %f\n", b.z);

  return 0;
}