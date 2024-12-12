/*
Exercise 5-2-1: String Processing
Student Id: 801293977
October 30, 2024
*/

// imports
#include <stdio.h>
#include <string.h>

int main() {
  // fields
  char str1[30] = "Ayemhenre";
  char str2[] = " The Programmer";
  char a[] = "Greater";
  char b[] = "Lesser";
  char arr[] = "aaaa?bbbbb?";
  int count = 0;

  // print length of string
  printf("Length of string: %zu\n", strlen(str1));

  // concatenating two strings
  strcat(str1, str2);
  printf("Concat Result: %s\n", str1);

  // greater or less than
  if (strcmp(a, b) < 0) {
    strcpy(a, b);
    printf("Copied lesser to greater: %s\n", b);
  } else {
    strcpy(a, b);
    printf("Copied lesser to greater: %s\n", a);
  }

  // counting times when '?' occurs
  for(int i = 0; i < strlen(arr); i++) {
    if(arr[i] == '?') {
      count += 1;
    }
  }

  printf("? counter: %d\n", count);

  return 0;
}
