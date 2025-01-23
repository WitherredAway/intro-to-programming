/*
Print the pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main() {
    int rows;
    printf("How many rows to print: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}