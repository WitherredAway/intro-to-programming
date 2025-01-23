/*
Print the pattern
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int rows;
    printf("How many rows to print: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        int spaces = rows - i;
        for (int j = 1; j <= spaces; j++) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}