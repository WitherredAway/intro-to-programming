/*
Write a program to accept a string and count the number of vowels present in the string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int maxLen = 100;

int main() {
    printf("Enter your string: ");
    char string[maxLen];
    fgets(string, maxLen, stdin);

    int len = strlen(string);

    int numVowels = 0;
    for (int i = 0; i < len; i++) {
        switch (tolower(string[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                numVowels++;
                break;
            default:
                break;
        }
    }
    printf("There are %d vowels in the string.\n", numVowels);

    return 0;
}