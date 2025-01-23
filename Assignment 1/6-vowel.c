// Write a program to check if a letter is a vowel

#include <stdio.h>
#include <ctype.h>

int main() {
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    letter = tolower(letter);
    if ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')) {
        printf("%c is a vowel\n", letter);
    } else {
        printf("%c is not a vowel\n", letter);
    }

    return 0;
}