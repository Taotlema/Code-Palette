/*
Module 05 Unit 2 Lab
November 1, 2024
Student Id: 801293977
*/

// imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// parse_data

float parse_data(char line[], char item[], int *quanity, float *cost){
  // parsing
  sscanf(line, "%s %d %f", item, quanity, cost);
  return (*quanity) * (*cost);
}

// pretty_print
void pretty_print(char line[], char item[], float cost, float subtotal){
  // printing the data
  printf("Item: %-10s Quantity: %-3d Item Cost: $%6.2f Subtotal: $%7.2f\n", item, quantity, cost, subtotal);
}

// main
int main(){
  // file fields 
  char line[100]; 
  char item[50];
  int quanity = 0;
  int total_items = 0;
  float cost = 0.0;
  float subtotal = 0.0;
  float total_cost = 0.0;

  // open file
  FILE *file = fopen(argv[1], "r");

  // check for empty file
  if(!file){
    prinf("There is no file to be open");
    return -1;
  }
  
  // read file
  while(fgets(line, sizeof(line), file)){
    subtotal = parse_data(line, item, &quantity, &cost);
    pretty_print(item, quantity, cost, subtotal);
    total_cost += subtotal;
    total_items++;
  }

  // summary
  printf("-----------------------------------------------------\n");
  printf("Total Items: %d Total Cost: $%.2f\n", total_items, total_cost);

  // close file
  fclose(file);
  
  return 0;
}