// 1. Write a program to find HCF of 2 positive integers a, b using subtraction only.

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int a = n1;
    int b = n2;
    if (a < b) {
        swap(&a, &b);
    }

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    printf("The HCF of %d and %d is %d\n", n1, n2, a);

    return 0;
}