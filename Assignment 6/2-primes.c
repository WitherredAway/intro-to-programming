// 2. Write a program to find the sum of all prime numbers from 5 to 50.

#include <stdio.h>

const int from = 5;
const int to = 50;

int main() {
    int sum = 0;
    for (int n = from; n <= to; n++) {
        int factors = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                factors++;
            }
        }
        if (factors == 2) {
            sum += n;
        }
    }
    printf("The sum of all prime numbers from %d to %d is %d\n", from, to, sum);

    return 0;
}