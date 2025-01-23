// Take an input x for position and y for the integer and insert it into the array
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

    int array[n + 1];
    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &num);
        array[i] = num;
    }

    printArray(array, n);

    int x, y;
    input:
    printf("Enter the position and integer you want to insert: ");
    scanf("%d %d", &x, &y);
    x--;

    if (x > n - 1 || x <= 0) {
        printf("Index out of range\n");
        goto input;
    }

    for (int i = n; i > x; i--) {
        array[i] = array[i - 1];
    }
    array[x] = y;

    printArray(array, n + 1);
}