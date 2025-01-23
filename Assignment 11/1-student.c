/*
Write a program to create a structure having rollno, name, address, age and average_marks as member variables. Read information
of 12 students and display the details using a user-defined function.
*/

#include <stdio.h>
#include <string.h>

#define nameSize 100
#define addressSize 200

struct Student {
    int roll;
    char name[nameSize];
    char address[addressSize];
    int age;
    float averageMarks;
};

struct Student inputStudent() {
    struct Student student;

    printf("Input student's roll: ");
    scanf("%d", &student.roll);

    getchar();

    printf("Input name: ");
    fgets(student.name, nameSize, stdin);
    student.name[strlen(student.name) - 1] = '\0';

    printf("Input address: ");
    fgets(student.address, addressSize, stdin);
    student.address[strlen(student.address) - 1] = '\0';

    printf("Input age: ");
    scanf("%d", &student.age);

    printf("Input average marks: ");
    scanf("%f", &student.averageMarks);

    return student;
}

void printStudent(struct Student student) {
    printf("Student's Roll: %d\n", student.roll);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Average Marks: %.2f\n", student.averageMarks);
}

const int count = 12;

int main() {
    for (int i = 0; i < count; i++) {
        printf("Inputting student #%d...\n", i + 1);
        struct Student student = inputStudent();
        printf("\n");
        printStudent(student);
        printf("\n");
    }

    return 0;
}