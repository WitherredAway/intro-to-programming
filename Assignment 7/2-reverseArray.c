// Take an integer array as input (no. of elements input by user)
// Reverse the array
// Display the new array

#include <stdio.h>

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements to input: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
       int num;
       printf("Enter integer #%d: ", i + 1);
       scanf("%d", &num);
       array[i] = num;
    }

    printArray(array, n);

    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    printArray(array, n);
}