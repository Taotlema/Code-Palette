/*
Exercise 5-1-3: malloc() and free()
Ayemhenre Isikhuemhen
October 7, 2024
*/

// importd
#include <stdio.h>

// Person Struct
struct person {
  char *name;
  int age;
  int height; // in inches
  char eye_color;
};

int main() {
  // question 1
  struct person *sp = (struct person *) calloc(1, sizeof(struct person));
  strncpy(sp -> name, "Xinyao", 10);

  sp->age = 28;
  sp->height = 165;
  sp->eye_color = "black";

  free(sp->name);
  free(sp);

  // question 2
  float *stock_prices;
  stock_prices = (float *)malloc(500 * sizeof(float));
  float price = 7;

  for (float *curr = stock_prices; curr < stock_prices + 5; curr++) {
    *curr = price;
    price += 0.25;
  }

  /* Printing the first ten elements
    for (float *curr = stock_prices; curr < stock_prices + 10; curr++){
      *curr = price;
      price += 0.25;
      printf("%f\n", *curr);
    }
  */
}