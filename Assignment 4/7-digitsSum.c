// 7. Write a program to find the sum of all digits of a number entered by user. E.g.: 125 = 1 + 2 + 5 = 8

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int temp = n, lastDigit = temp % 10; temp != 0; temp /= 10, lastDigit = temp % 10) {
        sum += lastDigit;
    }

    printf("The sum of the digits of %d is %d\n", n, sum);

    return 0;
}