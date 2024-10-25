/*
Module 05 Lab 01
October 19, 2024
Student Id: 801293977
*/

// imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calc_bills function
void calc_bills(int dollar_amount, int *twenties, int *tens, int * fives, int *ones){
  *twenties = dollar_amount / 20;
  dollar_amount %= 20;

  *tens = dollar_amount / 10;
  dollar_amount %= 10;

  *fives = dollar_amount / 5;
  dollar_amount %= 5;

  *ones = dollar_amount;
}

// main
int main(){
  // fields
  int bill_amount = 0;
  int twenties = 0; 
  int tens = 0;
  int fives = 0; 
  int ones = 0;

  // take user input
  printf("Enter dollar amount to pay:");
  scanf("%d", &bill_amount);
  
  // calc bills
  calc_bills(bill_amount, &twenties, &tens, &fives, &ones);
  
  // program output
  printf("You need:\n");
  printf("    $20 dollar bills: %d\n", twenties);
  printf("    $10 dollar bills: %d\n", tens);
  printf("    $5 dollar bills: %d\n", fives);
  printf("    $1 dollar bills: %d\n", ones);
}