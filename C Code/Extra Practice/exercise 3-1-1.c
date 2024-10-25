/*
Exercise 3-1-1: Input/Output
Ayemhenre Isikhuemhen
September 10, 2024
*/

// Imports
#include <stdio.h>

main() {
  // fields
  char space1;
  char space2;
  float float_num;
  int int_num;

  // User Instruction
  printf("Enter two characters, a space, a float, a space, and a decimal:\n");

  // User Input
  scanf("%c%c %f %d", &space1, &space2, &float_num, &int_num);

  // Outputs
  printf("%c%c\n", space1, space2);
  printf("%f\n", float_num);
  printf("%d\n", int_num);

  printf("Test");
int a = -15; 

  if (a >= 15)
  {
      printf("%d\n", a);
  }
  else
  {
      printf("%d\n", -a); 
  }
  
}