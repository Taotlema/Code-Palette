/*
Exercise 3-2-6: Processing Arrays
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

int main() {
  // fields
  int arr[12] = {0};

  arr[0] = 1;
  arr[2] = 3;
  arr[6] = 7;

  int sum = 0;

  // Output Elements
  printf("Array elements: ");
  for (int i = 0; i < 12; i++) {
    printf("%d ", arr[i]);
  }

  // Adding contents to Array
  for (int i = 0; i < 12; i++) {
    sum += arr[i];
  }

  // Output
  printf("Sum of array elements: %d\n", sum);

  return 0;
}