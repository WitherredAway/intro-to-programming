// 3. Write a program to check whether a number is in power of 2 or not.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    float power = log2(n);
    int powerInt = power;
    if (power == powerInt) {
        printf("%d is 2 to the power %d\n", n, powerInt);
    } else {
        printf("%d is not in the power of 2\n", n);
    }

    return 0;
}