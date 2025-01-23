/*
Write a program to find an element from an array (user input). If found, print the position of the element in the array.
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

int find(int array[], int arraySize, int element) {
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

const int N = 10;

int main() {
    int array[N];
    inputArray(array, N);

    printf("Your array: ");
    printArray(array, N);

    int element;
    printf("Enter an integer to find: ");
    scanf("%d", &element);

    int idx = find(array, N, element);
    switch (idx) {
        case -1:
            printf("%d does not exist in the array.\n", element);
            break;
        default:
            printf("%d is at index %d in the array.\n", element, idx);
            break;
    }

    return 0;
}