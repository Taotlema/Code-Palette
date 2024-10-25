/*
Exercise 3-2-7: Test Question
Ayemhenre Isikhuemhen
September 16, 2024
*/

// imports
#include "stdio.h"

/* array of integers, N numbers, int, 
Input: {1, 2, 3, 4, 5}
Output: {5, 4, 3, 2, 1}

How can you solve this problem using one array
Ans: You can take the input array and swap the values as you iterate through it.
*/

void reverse(int input[], int N){
  int i; 

  for(i = 0; i < N; i++){
    int temp = input[i];
    input[i] = input[N-i-1];
    input[N-i-1] = temp;
  }

}