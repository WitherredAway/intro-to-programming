// 3. Write a program to read an integer. Then display the value of that integer in binary and octal notation.

#include <stdio.h>

void convertAndPrint(int number, int base) {
    printf("%d in base %d is: ", number, base);

    int idx = 0;
    int result[32];
    while (number > 0) {
        result[idx] = number % base;
        number /= base;
        idx++;
    }

    for (int i = idx - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    convertAndPrint(n, 2);
    convertAndPrint(n, 8);

    return 0;
}