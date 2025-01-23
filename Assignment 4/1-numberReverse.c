// 1. Write a program to print a given number in reverse order.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reversed = 0;
    for (int temp = n, lastDigit = temp % 10; temp != 0; temp /= 10, lastDigit = temp % 10) {
        reversed = reversed * 10 + lastDigit;
    }

    printf("%d reversed is %d\n", n, reversed);

    return 0;
}