// Write a program to calculate factorial of a number

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = 1;
    for (int i = n; i > 0; i--) {
        result *= i;
    }
    printf("The factorial of %d is %d\n", n, result);

    return 0;
}