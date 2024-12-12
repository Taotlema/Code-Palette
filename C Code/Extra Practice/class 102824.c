/*
Class Programming Activity
Ayemhenre Isikhuemhen
October 28, 2024
*/

//imports
# include <stdio.h>

int main(){
  // open file
  FILE * file  = fopen("output.txt", "w");

  // check if file is empty
  if(file == NULL){
    printf("Error\n");
    return 1;
  }

  fprintf(file, "Charlotte is in North Caroline\n");
  
  // close file
  
  return 0;
}
