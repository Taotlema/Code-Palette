/*
Module 05 Lab: Customer Program
801293977
September 30, 2024
*/

// imports
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// preprocessors
#define CUS_LEN 20
#define PHONE_LEN 16
#define RECORD_LEN 20

// customer struct
struct customer {
  char first_name[CUS_LEN];
  char middle_name[CUS_LEN];
  char last_name[CUS_LEN];
  char phone[PHONE_LEN];
  float balance;
};

// show_customer
void show_customer(struct customer cust) {
  printf("Customer: %s %s %s\n", cust.first_name, cust.middle_name,
         cust.last_name);
  printf("Phone Number: %s, Balance: $%.2f\n", cust.phone, cust.balance);
  printf("--------------\n");
}

// show_customer_db
void show_database(struct customer cust_db[], int size) {
  printf("Customer List:\n");
  printf("--------------\n");
  for (int i = 0; i < size; i++) {
    show_customer(cust_db[i]);
  }
}

// main
int main() {
  // fields
  struct customer records[RECORD_LEN];
  int record_size = 0;
  char input[CUS_LEN];

  // user interface
  while (1) {
    printf("Please enter the next customer record.\n:X Exits the program\n:S "
           "Shows the contents of the database\nFirst Name: ");
    scanf("%s", input);

    // Conditions for user special input
    if (strcasecmp(input, ":X") == 0) {
      printf("Good bye!\n");
      break;
    } else if (strcasecmp(input, ":S") == 0) {
      show_database(records, record_size);
      continue;
    }

    strcpy(records[record_size].first_name, input);

    printf("Middle Name: ");
    scanf("%s", records[record_size].middle_name);

    printf("Last Name: ");
    scanf("%s", records[record_size].last_name);

    printf("Phone Number: ");
    scanf("%s", records[record_size].phone);

    printf("Balance Due: ");
    scanf("%f", &records[record_size].balance);

    record_size++;

    if (record_size >= RECORD_LEN) {
      printf("Database is full. Cannot add more records.\n");
      break;
    }
  }

  return 0;
}