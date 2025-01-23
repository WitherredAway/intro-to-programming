/*
Print the pattern
*
* *
* * *
* * * *
* * * * *
*/

#include <stdio.h>

int main() {
    int rows;
    printf("How many rows to print: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}