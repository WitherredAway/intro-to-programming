// Write a program to find the roots of a quadratic equation

#include <math.h>
#include <stdio.h>

int main () {
    int a, b, c;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    long double D = pow(b, 2) - 4 * a * c;
    long double root1 = (- b + sqrt(D)) / (2 * a);
    long double root2 = (- b - sqrt(D)) / (2 * a);

    printf("The roots are %Lf and %Lf\n", root1, root2);

    return 0;
}