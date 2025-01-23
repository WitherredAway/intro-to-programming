// Write a program to find the greatest of 3 numbers using if-else statements, and then ternary operators

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int greatest;

    // Using if-else
    if (a >= b && a >= c) {
        greatest = a;
    } else if (b >= a && b >= c) {
        greatest = b;
    } else {
        greatest = c;
    }

    printf("The greatest number using if-else is %d\n", greatest);

    // Using ternary operators

    greatest = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    printf("The greatest number using ternary operator is %d\n", greatest);

    return 0;
}