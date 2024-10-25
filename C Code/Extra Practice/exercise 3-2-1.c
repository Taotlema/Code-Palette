/*
Exercise 3-2-1: Function Output
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

// Code provided by Assignment
int g(int, int);

int sum;

int main(void) {
  int product = g(3, 4);
  printf("Sum=%d\n", sum);
  printf("Product=%d\n", product);
}

// My code
int g(int x, int y) {
  sum = x + y;

  return x * y;
}