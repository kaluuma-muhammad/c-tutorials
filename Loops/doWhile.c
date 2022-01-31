#include <stdio.h>
#include <stdbool.h>

int main () {
    int input;

    do {
        printf("Please enter number from 0 - 9: ");
        scanf("%d", &input);
    } while(input < 0 || input > 9);

    return 0;
}
