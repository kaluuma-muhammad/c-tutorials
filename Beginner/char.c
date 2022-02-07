#include <stdio.h>

int main() {
    // ASCII data types
    // ASCII characters to Integers
    char character;
    printf("Please enter a character: ");
    scanf("%c", &character);
    getchar();
    printf("%i\n", character);

    // Integers to ASCII characters
    int number;
    printf("Please enter a value from 0 - 127: ");
    scanf("%i", &number);
    getchar();
    printf("%c\n", number);

    // Maths with ASCII
    char value1;
    char value2;

    printf("Please enter first character: ");
    scanf("%c", &value1);
    getchar();
    printf("Please enter second character: ");
    scanf("%c", &value2);

    int num1 = value1;
    int num2 = value2;
    int add = num1 + num2;
    printf("%c(%i)", value1, value1, value2, num2, add, add);

    return 0;
}
