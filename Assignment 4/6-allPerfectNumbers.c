// 6. Write a program to display all perfect numbers that are greater than 1 digit but less than 5 digit.

#include <stdio.h>
#include <math.h>

const int maxDigits = 5;

int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int maxNum = pow(10, maxDigits);

    for (int i = 0; i <= maxNum; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}