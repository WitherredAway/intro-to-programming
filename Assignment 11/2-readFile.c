/*
Write a program to print the content of a file.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("File does not exist.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);

    return 0;
}