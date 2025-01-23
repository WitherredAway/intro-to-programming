// 2. Write a program to check whether a number is Palindrome or not.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reversed = 0;
    for (int temp = n, lastDigit = temp % 10; temp != 0; temp /= 10, lastDigit = temp % 10) {
        reversed = reversed * 10 + lastDigit;
    }

    if (n == reversed) {
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }

    return 0;
}