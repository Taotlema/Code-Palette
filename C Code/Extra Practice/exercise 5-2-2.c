/*
Exercise 5-2-2: sscanf and sprintf
Student Id: 801293977
October 30, 2024
*/

// imports
#include <stdio.h>
#include <string.h>

int main() {
  // part 1
  char string[] = "123 3.14";
  int integer;
  float floating_point;

  sscanf(string, "%d %f", &integer, &floating_point);

  printf("Parsed integer: %d\n", integer);
  printf("Parsed floating-point number: %.2f\n", floating_point);

  // part 2
  char formatted_string[50];

  sprintf(formatted_string, "The number is %d\n", integer);

  printf("%s", formatted_string);

  return 0;
}