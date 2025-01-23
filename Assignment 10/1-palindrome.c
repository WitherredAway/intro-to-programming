/*
Write a program to read a string and check for palindrome without using string related functions.
*/

#include <stdio.h>

int len(char *s) {
    int result = 0;
    while (*s != '\0') {
        result++;
        s++;
    }
    return result;
}

int isPalindrome(char string[], int length) {
    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

const int maxLen = 100;

int main() {
    printf("Enter your string: ");
    char string[maxLen];
    fgets(string, maxLen, stdin);

    int length = len(string);
    string[length - 1] = '\0';
    length--;

    int pal = isPalindrome(string, length);
    if (pal) {
        printf("'%s' is a palindrome\n", string);
    } else {
        printf("'%s' is not a palindrome\n", string);
    }

    return 0;
}