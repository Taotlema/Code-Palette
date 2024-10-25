/*
Module 04 Lab: Program 2 - Insertion Sort
801293977
September 22, 2024
*/

// Imports
#include <stdio.h>

int sort_ints(int arr[], int n) {
  // insertion sort algorithm
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }

  return 0;
}

int main() {
  // User instruction
  printf("= + = + = + = + = + = + = + = + = + = +\n");
  printf("     Ayemhenre's sort_ints Program     \n");
  printf("= + = + = + = + = + = + = + = + = + = +\n");
  printf(" \n");
  printf("This program can take 10 integers and sort them.\n");

  // fields
  int int_arr[10];

  // take user input
  for (int i = 0; i < 10; i++) {
    printf("Provide a number: \n");
    scanf("%d", &int_arr[i]);
  }

  // sort_ints function
  sort_ints(int_arr, 10);

  // return sorted array
  printf("The list after sorting:\n");
  for (int i = 0; i < int_arr[i]; i++) {
    printf("%d ", int_arr[i]);
  }
  printf("\n");

  return 0;
}
