/*
Exercise 5-2-5: Switch
Student Id: 801293977
October 28, 2024
*/

//imports
#include <stdio.h>

int main() {
    int area_code;

    // Sample input for area_code
    printf("Enter an area code: ");
    scanf("%d", &area_code);

    // Switch statement to match area_code to the corresponding city
    switch (area_code) {
        case 229:
            printf("Albany\n");
            break;
        case 404:
        case 470:
        case 678:
        case 770:
            printf("Atlanta\n");
            break;
        case 478:
            printf("Macon\n");
            break;
        case 706:
        case 762:
            printf("Columbus\n");
            break;
        case 912:
            printf("Savannah\n");
            break;
        default:
            printf("Invalid Area Code\n");
            break;
    }

    return 0;
}