#include <stdio.h>

int factorial(int number) {
    int factorial = 1;

    for (int i = number; i > 1; i--) {
        factorial *= i;
    }

    return factorial;
}

void outputFactorial(int input) {
    printf("The factorial of %d is %d ", input, factorial(input));
}

int main() {
    printf("Enter number to get it's factorial: ");
    int number;
    scanf("%d", &number);
    outputFactorial(number);
    
    return 0;
}
