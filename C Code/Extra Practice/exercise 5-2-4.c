/*
Exercise 5-2-4: File I/O
Student Id: 801293977
October 28, 2024
*/

//imports
#include <stdio.h>

int main() {
    // open file
    FILE *file = fopen("output.txt", "w");

    // check if file was successfully opened
    if (file == NULL) {
        printf("Error\n");
        return 1;
    }

    // write message to file
    fprintf(file, "Charlotte is in North Carolina\n");

    // close file
    fclose(file);

    return 0;
}
