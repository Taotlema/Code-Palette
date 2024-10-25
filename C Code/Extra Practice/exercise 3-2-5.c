/*
Exercise 3-2-5: Operations on Arrays
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

int main(){
  // fields
  float data[5] = {[0] = 0};
  float sum = 0;
  
  //read input
  for(int i = 0; i < 5; i++){
    //collect user input
    printf("Enter the next number: ");
    scanf("%f", &data[i]);
  }

  // find sum
  for(int i = 0; i < 5; i++){
    sum += data[i];
  }

  // print average
  float average = sum/5;
  printf("Sum: %.2f\nAverage: %.2f\n", sum, average);
  
  return 0;
}

/* NOTES
An array stores information in the memoray, but is actively used here as a reference. I think.
*/