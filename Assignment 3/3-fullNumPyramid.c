/*
Print the pattern
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include <stdio.h>

int main() {
    int rows;
    printf("How many rows to print: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int spaces = rows - i;

        // Print the leading spaces at current row
        for (int j = 1; j <= spaces; j++) {
            printf("  ");
        }

        // Print the numbers for the first half of the pyramid at current row
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        // Print the numbers for the second half of the pyramid at current row
        for (int j = i - 1; j > 0; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}