#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    printf("Enter number to check if is prime: ");
    int input;
    scanf("%d", &input);
    int isPrime = true;

    // Loop value from it's square root
    for (int i = sqrt(input); i > 1; i--) {
        // if input is divisible by its square root it should be false
        if (input % i == 0) {
            isPrime = false;
        }
    }

    if (isPrime) {
        printf("Number is prime");
    } else {
        printf("Number isn't prime");
    }
    return 0;
}
