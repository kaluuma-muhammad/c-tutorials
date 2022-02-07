#include <stdio.h>

int main() {
    int students = 50;
    int *s = &students;

    printf("Total students: %d\n", students);
    printf("Total students (through pointers): %d\n", *s);

    // Update students through variable
    students = 55;
    printf("Total students: %d\n", students);
    printf("Total students (through pointers): %d\n", *s);

    // Update students through pointers
    *s = 60;
    printf("Total students: %d\n", students);
    printf("Total students (through pointers): %d\n", *s);


    return 0;
}
