// Write a program to print the sum of first 50 numbers

#include <stdio.h>

const int arraySize = 50;

int main() {
    int sum = 0;
    for (int i = 1; i <= arraySize; i++) {
        sum += i;
    }
    printf("The sum of first %d numbers is %d\n", arraySize, sum);
    return 0;
}
