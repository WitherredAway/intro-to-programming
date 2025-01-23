/*
Define a structure "complex" to read two complex numbers and perform addition and subtraction of these two complex numbers and
display the result.
*/

#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
};

struct Complex inputComplexNumber() {
    struct Complex complex;
    printf("Enter the real part of the complex number: ");
    scanf("%d", &complex.real);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%d", &complex.imaginary);
    return complex;
}

void printComplexNumber(struct Complex complex) {
    printf("%d + %di\n", complex.real, complex.imaginary);
}

struct Complex addComplexNumbers(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real + complex2.real;
    result.imaginary = complex1.imaginary + complex2.imaginary;
    return result;
}

struct Complex subtractComplexNumbers(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real - complex2.real;
    result.imaginary = complex1.imaginary - complex2.imaginary;
    return result;
}


int main() {
    printf("Inputing first complex number...\n");
    struct Complex complex1 = inputComplexNumber();
    printComplexNumber(complex1);
    printf("\n");
    printf("Inputing second complex number...\n");
    struct Complex complex2 = inputComplexNumber();
    printComplexNumber(complex2);
    printf("\n");

    struct Complex addedComplex = addComplexNumbers(complex1, complex2);
    printf("Added complex number: ");
    printComplexNumber(addedComplex);

    struct Complex subtractedComplex = subtractComplexNumbers(complex1, complex2);
    printf("Subtracted complex number: ");
    printComplexNumber(subtractedComplex);

    return 0;
}