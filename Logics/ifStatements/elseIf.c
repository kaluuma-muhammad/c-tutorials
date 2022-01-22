#include <stdio.h>

int main() {
    printf("1 - Add employee\n");
    printf("2 - View employee\n");
    printf("3 - Search employees\n");
    printf("4 - Exit\n");

    printf("Choose from menu please :");
    int input;
    scanf("%d", &input);

    if (input == 1) {
        printf("Adding employee");
    } else if (input == 2) {
        printf("Viewing employee");
    } else if (input == 3) {
        printf("Searching employee");
    } else if (input == 4) {
        printf("Exiting app...");
    } else {
        printf("Incorrect value");
    }

    return 0;
}
