/*
Exercise 3-1-5: For Loops Part 2
Ayemhenre Isikhuemhen
September 10, 2024
*/

// Imports
#include <stdio.h>

main() {
  printf("Question 1");
  
  for (int i = 1; i <= 20; i++) {
    printf("%d\n", i * 2);
  }

  printf("Question 2");
  
  for (int i = 49; i > 20; i -= 2) {
      printf("%d\n", i);
  }
}