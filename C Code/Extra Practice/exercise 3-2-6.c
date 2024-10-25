/*
Exercise 3-2-6: Strings
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

int main(){
  // fields
  char message[] = "UNC Charlotte";
  int size = sizeof(message) / sizeof(char);

  //print out the characters of the string
  for(int i = 0; i < size; i++){
    printf("%c\n", message[i]);
  }
  
  return 0;
}