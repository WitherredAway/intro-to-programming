/*
Write a program to multiply two matrices (user input).
*/

#include <stdio.h>

void inputMatrix(int rows, int cols, int array[rows][cols]) {
    for (int row = 0; row < rows; row++) {
        printf("Enter %d integers for row %d: ", cols, row + 1);
        for (int col = 0; col < cols; col++) {
            scanf("%d", &array[row][col]);
        }
    }
}

void printMatrix(int rows, int cols, int array[rows][cols]) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]) {
    if (cols1 != rows2) {
        printf("Columns of the first matrix must be equal to rows of the second matrix.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    for (int row = 0; row < rows1; row++) {
        for (int col = 0; col < cols2; col++) {
            for (int i = 0; i < rows1; i++) {
                result[row][col] += matrix1[row][i] * matrix2[i][col];
            }
        }
    }
}

const int rows = 3, cols = 3;

int main() {
    int matrix1[rows][cols];
    printf("Creating matrix 1 (%dx%d)...\n", rows, cols);
    inputMatrix(rows, cols, matrix1);
    printf("Matrix 1:\n");
    printMatrix(rows, cols, matrix1);

    int matrix2[rows][cols];
    printf("Creating matrix 2 (%dx%d)...\n", rows, cols);
    inputMatrix(rows, cols, matrix2);
    printf("Matrix 2:\n");
    printMatrix(rows, cols, matrix2);

    int result[rows][cols];
    multiplyMatrices(rows, cols, matrix1, rows, cols, matrix2, result);
    printf("Multiplied resultant matrix: \n");
    printMatrix(rows, cols, result);

    return 0;
}