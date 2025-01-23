// 4. Write a program to display all numbers that are not divisible by 2 & 3.

#include <stdio.h>

int main() {
    int from, to;
    printf("Enter two numbers for the range to search within: ");
    scanf("%d %d", &from, &to);

    int count = 0;
    for (int i = from; i <= to; i++) {
        if (i % 2 != 0 && i % 3 != 0) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("The no. of numbers that aren't divisible by 2 & 3 within %d-%d is %d\n", from, to, count);

    return 0;
}