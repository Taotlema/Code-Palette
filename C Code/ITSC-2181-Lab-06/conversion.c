/*
Module 04 Lab 01: Number Systems
October 01, 2024
801293977
*/

// imports
#include <stdio.h>

// Function to convert decimal to binary and print it
void binary_c(int input){
    int binary[32];
    int i = 0;

    // Calculate binary equivalent
    while (input > 0) {
        binary[i] = input % 2;
        input = input / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

// Function to convert decimal to hexadecimal and print it
void hexi_c(int input){
    char hex[16];
    int i = 0;

    // Calculate hexadecimal equivalent
    while (input != 0) {
        int temp = input % 16;
        hex[i] = (temp < 10) ? (temp + '0') : (temp + 'A' - 10);
        input = input / 16;
        i++;
    }

    // Print hexadecimal in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
}

// Bitwise AND operation
void bit_and(int input01, int input02){
    int result = input01 & input02;
    printf("AND: ");
    binary_c(result);
    printf("\n");
}

// Bitwise OR operation
void bit_or(int input01, int input02){
    int result = input01 | input02;
    printf("OR: ");
    binary_c(result);
    printf("\n");
}

// Bitwise XOR operation
void bit_xor(int input01, int input02){
    int result = input01 ^ input02;
    printf("XOR: ");
    binary_c(result);
    printf("\n");
}

// Main function
int main(){
    int ui01, ui02;

    // Take user input for decimals
    printf("-------------------\n");
    printf(" Conversions Calc. \n");
    printf("-------------------\n");
    printf("\n");

    printf("Please Enter First Decimal Number: ");
    scanf("%d", &ui01);
    printf("Please Enter Second Decimal Number: ");
    scanf("%d", &ui02);

    // Decimal Conversions
    printf("\nDecimal Conversions\n");
    printf("-------------------\n");
    printf("Binary of %d: ", ui01);
    binary_c(ui01);
    printf("\nBinary of %d: ", ui02);
    binary_c(ui02);
    printf("\n");

    // Hexadecimal Conversions
    printf("\nHex Conversions\n");
    printf("---------------\n");
    printf("Hexadecimal of %d: ", ui01);
    hexi_c(ui01);
    printf("\nHexadecimal of %d: ", ui02);
    hexi_c(ui02);
    printf("\n");

    // Bitwise Operations Output
    printf("\n------------------\n");
    printf("Bitwise Operations\n");
    printf("------------------\n");
    bit_and(ui01, ui02);
    bit_or(ui01, ui02);
    bit_xor(ui01, ui02);

    // End Program
    printf("\nThat's all for now. Goodbye!\n");

    return 0;
}
