/*
Write a program to insert a number (user input) at the beginning (index 0) and at the end of an array (user input).
*/

#include <stdio.h>

void inputArray(int array[], int arraySize) {
    printf("Enter %d integers: ", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

const int N = 10;

int main() {
    int array[N + 2];
    inputArray(array, N);

    printf("Your original array: ");
    printArray(array, N);

    int start;
    printf("Enter an integer to insert at the beginning: ");
    scanf("%d", &start);

    // shift elements to the right
    for (int t = N; t > 0; t--) {
        array[t] = array[t - 1];
    }
    array[0] = start;

    printf("Array after inserting at the beginning: ");
    printArray(array, N + 1);

    int end;
    printf("Enter an integer to append at the end: ");
    scanf("%d", &end);
    array[N + 1] = end;

    printf("Array after appending at the end: ");
    printArray(array, N + 2);

    return 0;
}
