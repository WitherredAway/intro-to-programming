// Fibonacci Series

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int main() {
    int n;
    printf("How many numbers to print from the fibonacci series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}