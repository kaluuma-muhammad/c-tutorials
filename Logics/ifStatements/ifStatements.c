#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // pseudo random number generator
    // this gets seeded and outputs a result
    // seed - from the clock

    int maxValue = 50;
    srand(time(NULL));
    int randomNum = rand() % maxValue + 1;
    printf("%d\n", randomNum);

    printf("Gues a number from 0 - %d :", maxValue);
    int input;
    scanf("%d", &input);

    printf("You guessed %d\n", input);
    printf("The correct answer was %d\n", randomNum);

    if (input == randomNum) {
        printf("You win");
    } else {
        printf("Oops... You loose");
    }

    printf("Thank you for playing");
    return 0;
}
