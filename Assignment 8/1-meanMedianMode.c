/*
Given 10 positive integers, write a program to find the mean, median and mode.
    mean = average of data values in the array,
    median = (a[(n-1)/2] + a[(n-1)/2+1])/2 for even number of elements
    median = a[(n-1)/2]                    for odd number of elements after sorting the array in ascending order and
    mode = the value that occurs the maximum no of times in the array
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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = 0; j < arraySize - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

const int N = 10;

int main() {
    int array[N];
    inputArray(array, N);

    printf("Your array: ");
    printArray(array, N);

    // sorting the array
    bubbleSort(array, N);
    printf("Your sorted array: ");
    printArray(array, N);

    // calculating mean
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i];
    }
    float mean = sum / (float)N;
    printf("The mean is: %.2f\n", mean);

    // calculating median
    float median;
    if (N % 2 == 0) {
        median = (array[(N - 1) / 2] + array[((N - 1) / 2) + 1]) / 2.0;
    } else {
        median = array[N / 2];
    }
    printf("The median is: %.2f\n", median);

    // calculating mode
    int modeCount = 0;
    for (int i = 0; i < N; i++) {
        int value = array[i];
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] == value) {
                count++;
            }
        }
        if (count > modeCount) {
            modeCount = count;
        }
    }

    printf("The modes are: ");
    int value, count;
    for (int i = 0; i < N; i++) {
        if (i > 0 && array[i] == array[i - 1]) {
            continue; // skip duplicates
        }
        value = array[i];
        count = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] == value) {
                count++;
            }
        }
        if (count == modeCount) {
            printf("%d ", value);
        }
    }
    printf("\n");

    return 0;
}
