/*
Exercise 3-2-2: Using Functions
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

float cube_volume(float side) 
{
    float cube = side * side * side;
    return cube;
}

int main(){
  // fields
  float side = 3;
  float volume = cube_volume(side);

  //output
  printf("The volume of the cube is %.2f\n", volume);
  
  return 0;
}