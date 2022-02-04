#include <stdio.h>

int factorial(int number) {
    int factorial = 1;

    for (int i = number; i > 1; i--) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    printf("Enter number to get it's factorial: ");
    int number;
    scanf("%d", &number);

    int res = factorial(number);

    printf("The factorial of %d is %d ", number, res);

    return 0;
}
