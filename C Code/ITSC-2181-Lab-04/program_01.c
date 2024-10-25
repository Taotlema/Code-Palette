/*
Module 04 Lab: Program 1 - Capitalize
801293977
September 22, 2024
*/

// Imports
#include <stdio.h>
#include <ctype.h>

// Function to capitalize letters in a string
char* capitalized(char str_arr[]) {

  // Iterate through str_arr
  for (int i = 0; str_arr[i] != 0; i++) {

    // check if char is alph
    if (isalpha(str_arr[i]) != 0) {
      // capitalize
      str_arr[i] = toupper(str_arr[i]);
    }
  }

  // return str_arr
  return str_arr;
}

int main() {
  // test 1
  char the_str[] = "test";
  capitalized(the_str);
  printf("%s\n", the_str);

  // test 2
  char the_str2[] = "This IS a tesT!";
  capitalized(the_str2);
  printf("%s\n", the_str2);

  return 0;
} // end main
