/*
Program 2: Calculate Tax Amount
Ayemhenre Isikhuemhen
September 10 .2024
*/

// Libraries
#include <stdio.h>

main() {
  // Fields
  int income = 0;
  float tax_due = 0;
  float tax_amount = 0;
  int dependents = 0;
  float tax_credit = 0;

  // enter income and tax_due sequence
  printf("Enter income: ");
  scanf("%d", &income);
  printf("");

  if (income == 0 && income < 9275) {
    tax_due = (12 * income) / 100;
  } else if (income > 9275 && income < 37650) {
    tax_due = (17 * income) / 100;
  } else if (income > 37650 && income < 91150) {
    tax_due = (27 * income) / 100;
  } else if (income > 91150 && income < 190150) {
    tax_due = (30 * income) / 100;
  } else if (income >= 19015) {
    tax_due = (35 * income) / 100;
  } else {
    printf("Invalid Value");
  }

  printf("Tax due: ");
  printf("%f", tax_due);
  printf("");

  // enter dependents and adjusted_tax sequence
  printf("Enter the number of Dependents (0 for none)");
  scanf("%d", &dependents);
  printf("");

  if (dependents == 0) {
    tax_credit = 0;
  } else if (dependents <= 5) {
    tax_credit = 2250;
  } else {
    tax_credit = 450 & dependents;
  }

  printf("Tax credit = ");
  printf("%f", tax_credit);
  printf("");

  tax_amount = tax_due - tax_credit;

  printf("Adjusted Tax = ");
  printf("%f", tax_amount);
  printf("")

  // Output
  printf("END");

} // end main
