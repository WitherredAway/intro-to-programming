// 8. Write a program to check whether a number is Armstrong number or not. E.g.: 153 = 1^3 + 5^3 + 3^3 = 153

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int power = 0;
    for (int temp = n; temp != 0; temp /= 10) {
        power++;
    }

    int sum = 0;
    for (int temp = n, lastDigit = temp % 10; temp != 0; temp /= 10, lastDigit = temp % 10) {
        sum += pow(lastDigit, power);
    }

    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}