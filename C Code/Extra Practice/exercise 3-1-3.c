/*
Exercise 3-1-1: Conditionals - Selection
Ayemhenre Isikhuemhen
September 10, 2024
*/

//Imports
#include <stdio.h>

main() {
  //Fields
  int grade;

  // User Instruction
  printf("Please enter the numeric grade: ");

  // User Input
  scanf("%d", &grade);

  // Conditional Grade System
  if (grade >= 90 && grade <= 100) {
    printf("The letter grade is an A.\n");
  } 
  else if (grade >= 80 && grade <= 89) {
    printf("The letter grade is a B.\n");
  } 
  else if (grade >= 70 && grade <= 79) {
    printf("The letter grade is a C.\n");
  } 
  else if (grade >= 60 && grade <= 69) {
    printf("The letter grade is a D.\n");
  } 
  else if (grade <= 59 && grade >= 0) {
    printf("The letter grade is an F.\n");
  } else {
    printf("Invalid grade entered.\n");
  }
}