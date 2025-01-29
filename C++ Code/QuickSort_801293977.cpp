//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream> // Input and output streams
#include <cstdlib>  // For qsort
#include <cstring>  // For strncmp

using namespace std;

// Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

// Prompts user of program to provide their last name, age, and balance
void userprompt(patient *patient_list, int &total) {
    cout << "Please provide your name: ";
    cin >> patient_list[total].name;
    cout << "Please provide your age: ";
    cin >> patient_list[total].age;
    cout << "Please provide your balance: ";
    cin >> patient_list[total].balance;
    total++;
}

// Compares two patients by age
int comparePatientsByAge(const void *a, const void *b) {
    const patient *p1 = (const patient *)a;
    const patient *p2 = (const patient *)b;
    return (p1->age - p2->age);
}

// Compares two patients by balance due
int comparePatientsByBalance(const void *a, const void *b) {
    const patient *p1 = (const patient *)a;
    const patient *p2 = (const patient *)b;
    if (p1->balance < p2->balance) return -1;
    if (p1->balance > p2->balance) return 1;
    return 0;
}

// Compares two patients by name
int comparePatientsByName(const void *a, const void *b) {
    const patient *p1 = (const patient *)a;
    const patient *p2 = (const patient *)b;
    return strncmp(p1->name, p2->name, 20);
}

// Displays the patient list
void displayPatientList(const patient *patient_list, int total_patients) {
    for (int i = 0; i < total_patients; i++) {
        cout << "Name: " << patient_list[i].name
             << ", Age: " << patient_list[i].age
             << ", Balance: $" << patient_list[i].balance << endl;
    }
    cout << endl;
}

// The main program
int main() {
    // Fields
    int total = 5;

    // Storing some test data
    struct patient patient_list[6] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Mario O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };

    // User prompt to add a new patient
    userprompt(patient_list, total);

    // DISPLAYING CONTENTS OF THE ARRAY BEFORE SORTING
    cout << "Patient List (Original):" << endl;
    displayPatientList(patient_list, total);

    // SORTING BY AGE
    cout << "Sorting by Age..." << endl;
    qsort(patient_list, total, sizeof(patient), comparePatientsByAge);
    cout << "Patient List - Sorted by Age:" << endl;
    displayPatientList(patient_list, total);

    // SORTING BY BALANCE
    cout << "Sorting by Balance Due..." << endl;
    qsort(patient_list, total, sizeof(patient), comparePatientsByBalance);
    cout << "Patient List - Sorted by Balance Due:" << endl;
    displayPatientList(patient_list, total);

    // SORTING BY NAME
    cout << "Sorting by Name..." << endl;
    qsort(patient_list, total, sizeof(patient), comparePatientsByName);
    cout << "Patient List - Sorted by Name:" << endl;
    displayPatientList(patient_list, total);

    return 0;
}
