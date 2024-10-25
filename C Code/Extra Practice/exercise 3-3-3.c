/*
Exercise 3-3-1: Array of Structs
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
  struct box b1 = {3, "red", 3, 2, 5, 10.21, 20.62, 35.72};
  struct box b2 = {4, "green", 4, 6, 4, 10.21, 20.62, 35.72};

  //arry of structs
  b[0] = b1;
  b[1] = b2;
  

  // printing our struct array
  printf("Item Num: %d\n", b[0].itemnum);
  printf("Item Num: %s\n", b[0].color);
  printf("Item Num: %d\n", b[0].height);
  printf("Item Num: %d\n", b[0].width);
  printf("Item Num: %d\n", b[0].depth);
  printf("Item Num: %f\n", b[0].x);
  printf("Item Num: %f\n", b[0].y);
  printf("Item Num: %f\n", b[0].z);

  printf("Item Num: %d\n", b[1].itemnum);
  printf("Item Num: %s\n", b[1].color);
  printf("Item Num: %d\n", b[1].height);
  printf("Item Num: %d\n", b[1].width);
  printf("Item Num: %d\n", b[1].depth);
  printf("Item Num: %f\n", b[1].x);
  printf("Item Num: %f\n", b[1].y);
  printf("Item Num: %f\n", b[1].z);
  return 0;
}