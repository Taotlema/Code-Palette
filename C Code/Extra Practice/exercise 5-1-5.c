/*
Exercise 5-1-4: Pointers to Structs
801293977
October 8, 2024
*/

// imports
#include <stdio.h>
#include <string.h>

// Box Struct
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

float volume(struct box b) {
  float volume;
  volume = b.height * b.width * b.depth;

  return volume;
}

void updater(struct box *b1, struct box *b2) {
  // fields
  float v1 = volume(*b1);
  float v2 = volume(*b2);

  // conditional updating
  if (v1 > v2) {
    strcpy(b1->color, "green");
    b1->height = 0;
    b1->width = 0;
    b1->depth = 0;
    b1->x = 0;
    b1->y = 0;
    b1->z = 0;

    printf("The fist box was updated.\n");
  } else if (v1 < v2) {
    strcpy(b2->color, "green");
    b2->height = 0;
    b2->width = 0;
    b2->depth = 0;
    b2->x = 0;
    b2->y = 0;
    b2->z = 0;

    printf("The second box was updated.\n");
  } else if (v1 == v2) {
    strcpy(b2->color, "green");
    b2->height = 0;
    b2->width = 0;
    b2->depth = 0;
    b2->x = 0;
    b2->y = 0;
    b2->z = 0;

    printf("The second box was updated.\n");
  } else {
    printf("This ain't it bro");
  }
}

int main() {

  // fields
  struct box test_box1 = {12, "red", 4, 4, 4, 3, 4, 6};
  struct box test_box2 = {13, "blue", 2, 2, 2, 5, 8, 7};
  struct box test_box3 = {14, "yellow", 1, 1, 1, 5, 8, 7};
  struct box test_box4 = {15, "brown", 1, 1, 1, 5, 8, 7};

  // update box
  printf("- - - - - - - - - - - -\n");
  printf("      Senario One      \n");
  printf("- - - - - - - - - - - -\n");
  updater(&test_box1, &test_box2);

  printf("- - - - - - - - - - - -\n");
  printf("      Senario Two      \n");
  printf("- - - - - - - - - - - -\n");
  updater(&test_box3, &test_box4);

  return 0;
}
