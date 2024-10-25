/*
Module 05 Lab 01
October 19, 2024
Student Id: 801293977
*/

// imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// concatnate
char *concatenate(const char *string1, const char *string2){
  // fields
  int length1 = strlen(string1);
  int length2 = strlen(string2);

  // malloc
  char *result = (char *)malloc(length1 + length2 + 2);

  strcpy(result, string1);

  strcat(result, " ");

  strcat(result, string2);

  return result;
}

// main function
int main(int argc, const char *argv[]) {

  // fields
  char str1[100] = "The United States";
  char str2[100] = "of America";

  printf("First string: %s\n", str1);
  printf("Second string: %s\n", str2);
  char *str3;

  str3 = concatenate(str1, str2);
  printf("\nThe two strings concatenated: %s\n", str3);

  char str4[100] = "The University of North Carolina";
  char str5[100] = "at Charlotte";
  printf("\nFirst string: %s\n", str4);
  printf("Second string: %s\n", str5);

  char *str6;
  str6 = concatenate(str4, str5);
  printf("\nThe two strings concatenated: %s\n", str6);

  return 0;
}
