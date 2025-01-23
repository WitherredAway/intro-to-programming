// 4. Write a program to sum the series: 1/2 + 2/3 + ... + n/(n+1).

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += (double)i / (i + 1);
    }

    printf("The sum of the series is %.4Lf\n", sum);

    return 0;
}