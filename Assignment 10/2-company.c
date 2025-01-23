/*
Write a program to create a structure named company which has name, address, phone_no and no_of_employees as member variables.
Read name, address, phone_no and no_of_employees. Finally display all these values.
*/

#include <stdio.h>
#include <string.h>

#define nameSize 100
#define addressSize 200

struct Company {
    char name[nameSize];
    char address[addressSize];
    int phoneNo;
    int noOfEmployees;
};

struct Company inputCompany() {
    struct Company company;

    printf("Input company's name: ");
    fgets(company.name, nameSize, stdin);
    company.name[strlen(company.name) - 1] = '\0';

    printf("Input company's address: ");
    fgets(company.address, addressSize, stdin);
    company.address[strlen(company.address) - 1] = '\0';

    printf("Input company's phone number: ");
    scanf("%d", &company.phoneNo);

    printf("Input company's number of employees: ");
    scanf("%d", &company.noOfEmployees);

    return company;
}

void printCompany(struct Company company) {
    printf("Company Name: %s\n", company.name);
    printf("Address: %s\n", company.address);
    printf("Phone No: %d\n", company.phoneNo);
    printf("No. of employees: %d\n", company.noOfEmployees);
}

int main() {
    struct Company company = inputCompany();
    printf("\n");
    printCompany(company);

    return 0;
}