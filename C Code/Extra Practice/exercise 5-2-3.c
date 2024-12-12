/*
Exercise 5-2-3: pointers to Structs
Student Id: 801293977
October 30, 2024
*/

#include <stdio.h>
#include <string.h>

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

// update_box
void update_box(struct box *box1, struct box *box2) {
  int volume1 = box1->height * box1->width * box1->depth;
  int volume2 = box2->height * box2->width * box2->depth;

  if (volume1 > volume2) {
    box1->x = 0;
    box1->y = 0;
    box1->z = 0;
    strcpy(box1->color, "green");
  } else {
    box2->x = 0;
    box2->y = 0;
    box2->z = 0;
    strcpy(box2->color, "green");
  }
}

int main(void) {
  // fields
  struct box b1 = {1, "red", 3, 2, 5, 10.21, 20.62, 35.72};
  struct box b2 = {2, "blue", 4, 6, 4, 5.0, 10.0, 15.0};

  // original boxes
  printf("Before update:\n");
  printf("Box 1 - Color: %s, Position: (%.2f, %.2f, %.2f)\n", b1.color, b1.x,
         b1.y, b1.z);
  printf("Box 2 - Color: %s, Position: (%.2f, %.2f, %.2f)\n", b2.color, b2.x,
         b2.y, b2.z);

  // update box
  update_box(&b1, &b2);

  // program output
  printf("\nAfter update:\n");
  printf("Box 1 - Color: %s, Position: (%.2f, %.2f, %.2f)\n", b1.color, b1.x,
         b1.y, b1.z);
  printf("Box 2 - Color: %s, Position: (%.2f, %.2f, %.2f)\n", b2.color, b2.x,
         b2.y, b2.z);

  return 0;
}
