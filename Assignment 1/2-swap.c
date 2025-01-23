// Write a program to swap two variables with and without a third variable

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping with third variable
    int t = a;
    a = b;
    b = t;
    printf("After swapping (with third variable): a = %d, b = %d\n", a, b);

    // Swapping again without third variable
    a += b;  // a = 1 + 2 = 3
    b = a - b;  // b = 3 - 1 = 2
    a -= b;  // a = 3 - 2 = 1
    printf("After swapping again (without third variable): a = %d, b = %d\n", a, b);
    return 0;
}