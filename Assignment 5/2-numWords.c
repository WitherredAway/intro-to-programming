// 2. Write a program which will take input as an integer number and will echo the digits in words. E.G. 123 should be ONE TWO THREE.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int reversed = 0;
    for (int temp = n, lastDigit = temp % 10; temp != 0; temp /= 10, lastDigit = temp % 10) {
        reversed = reversed * 10 + lastDigit;
    }

    int digit;
    while (reversed != 0) {
        digit = reversed % 10;
        reversed /= 10;

        char* word = "";
        switch (digit) {
            case 0:
                word = "ZERO";
                break;
            case 1:
                word = "ONE";
                break;
            case 2:
                word = "TWO";
                break;
            case 3:
                word = "THREE";
                break;
            case 4:
                word = "FOUR";
                break;
            case 5:
                word = "FIVE";
                break;
            case 6:
                word = "SIX";
                break;
            case 7:
                word = "SEVEN";
                break;
            case 8:
                word = "EIGHT";
                break;
            case 9:
                word = "NINE";
                break;
            default:
                word = "UNKNOWN";
                break;
        }

        printf("%s ", word);
    }
    printf("\n");
    return 0;
}