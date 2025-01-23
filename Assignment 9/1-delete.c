/*
Write a program for deletion of an element from the specified location of an array(user input).
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
    int array[N];
    inputArray(array, N);

    printf("Your original array: ");
    printArray(array, N);

    int idx;
    printf("Enter which number element to delete (1-%d): ", N + 1);
    scanf("%d", &idx);
    idx--;

    // left shift
    for (int i = idx + 1; i <= N; i++) {
        array[i - 1] = array[i];
    }

    printf("Resultant array: ");
    printArray(array, N - 1);

    return 0;
}