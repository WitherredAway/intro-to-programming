// Write a menu-driven calculator program which has addition(), subtraction(), multiplication(), division(), percentage() and power() as user-defined functions.

#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

float percentage(float a, float b) {
    return a / b * 100;
}

float power(float a, float exp) {
    float result = 1;
    for (int i = 0; i < (int)exp; i++) {
        result *= a;
    }
    return result;
}

int main() {
    while (1) {
        printf("Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Percentage\n");
        printf("6. Power\n");
        printf("7. EXIT\n");
        printf("> ");

        int option;
        scanf("%d", &option);

        if (option == 7) {
            break;
        } else if (option > 7) {
            printf("Invalid option chosen\n\n");
            continue;
        }

        float a, b;
        printf("Enter the operand: ");
        scanf("%f", &a);
        printf("Enter the operating number: ");
        scanf("%f", &b);

        float result;
        switch (option) {
            case 1:
                result = add(a, b);
                break;
            case 2:
                result = subtract(a, b);
                break;
            case 3:
                result = mult(a, b);
                break;
            case 4:
                result = div(a, b);
                break;
            case 5:
                result = percentage(a, b);
                break;
            case 6:
                result = power(a, b);
                break;
            default:
                break;
        }
        printf("The result is: %.2f\n\n", result);
    }
}