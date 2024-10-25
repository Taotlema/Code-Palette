/*
Exercise 5-1-4: Pointers and Functions
801293977
October 8, 2024
*/

// imports
#include <stdio.h>

// foo function
void foo(int n, int a[n], int *sum, int *largest){
  // largest value
  int L = 0;
  
  for(int i = 0; i < n; i++){
    if(a[i] > L){
      L = a[i];
    }
  }
  *largest = L;
  
  printf("%d\n", L);

  // total sum
  int S = 0;
  
  for(int i = 0; i < n; i++){
    S += a[i];
  }
  
  *sum = S;
  
  printf("%d\n", S);
  
}

main(){
  // fields
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  int sum;
  int largest;

  foo(n, arr, &sum, &largest);
  
}
  
}