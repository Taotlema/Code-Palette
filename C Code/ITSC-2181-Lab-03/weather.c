/*
Program 3: Weather
Ayemhenre Isikhuemhen
September 10, 2024
*/

// Libraries
#include <stdio.h>

main() {
  // Fields
  int high_temp = 0;
  int current = 0;
  int day = 0;

  // User Instructions
  printf("You will be asked to enter the daily high temperatur for 10 "
         "consecutive days.");
  printf(" ");

  // Iteration for the 10-day period
  for (int i = 0; i < 10; i++) {
    printf("Enter a high temperature: ");
    scanf("%d", &current);

    if (high_temp < current) {
      high_temp = current;
      day = i+1;
    }
  }

  printf(" ");
  printf("The highest recorded temperature in the 10-day period was: ");
  printf("%d", high_temp);
  printf(" ");
  printf("Last recorded on: Day ");
  printf("%d", day);

} // end main
