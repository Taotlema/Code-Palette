/*
Program 1: Volume of a Cylinder
Ayemhenre Isikhuemhen
September 10, 2024
*/

//Libraries
#include <stdio.h>

main() {
  // Fields
  int radius = 0;
  int height = 0;
  const float pi = 3.14159;
  float volume = 0;

  // User Input
  printf("Please provide the radius of the cylinder: ");
  scanf("%d", &radius);

  printf("Please provide the height of the cylinder: ");
  scanf("%d", &height);

  // Calculations
  volume = (float)pi * (radius * radius) * height;

  // Output
  printf("%f", volume);

} // end main