// 1. Write a program to display all leap years from 2021 AD to 5000 AD.

#include <stdio.h>

const int fromYear = 2021;
const int toYear = 5000;

int main() {
    int count = 0;
    for (int year = fromYear; year < toYear; year++) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            printf("%d\n", year);
            count++;
        }
    }
    printf("Total no. of leap years between %d and %d: %d\n", fromYear, toYear, count);

    return 0;
}