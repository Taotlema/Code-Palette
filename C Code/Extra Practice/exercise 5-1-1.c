/*
Exercise 5-1-1: Pointer Basics
Ayemhenre Isikhuemhen
October 7, 2024
*/

// imports
#include "stdio.h"

int main(){
  // part 1
  int num; 
  int *ptr; 

  ptr = &num; 
  *ptr = 100;

  printf("%d\n", num);

  // part 2
  float flt;
  float *f_ptr; 

  f_ptr = &flt; 
  *f_ptr = 3.1416;

  printf("%f\n", flt);
  
  return 0;
}